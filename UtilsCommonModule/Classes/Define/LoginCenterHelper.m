//
//  LoginCenterHelper.m
//  Pods
//
//  Created by infun on 2018/7/25.
//

#import "LoginCenterHelper.h"

#define LoginModel @"loginModel"

@implementation LoginCenterLoginModel

- (BOOL)buyPermission {
    if ([self.roleId isEqualToString:JinJIGuan] || [self.roleId isEqualToString:XianXiaMenDian]) {
        _buyPermission = YES;
        return YES;
    }
    _buyPermission = NO;
    return NO;
}

@end

@interface LoginCenterHelper()
@property (nonatomic,strong) LoginCenterLoginModel *loginModel;
@property (nonatomic,assign) NSUInteger jpushLoginTimes;//极光推送绑定失败次数

@end

@implementation LoginCenterHelper

+ (instancetype)shareCenterHelper
{
    static LoginCenterHelper *helper = nil;
    if (!helper) {
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            helper = [[LoginCenterHelper alloc] init];
        });
    }
    return helper;
}

- (void)plusJpushLoginTimes
{
    self.jpushLoginTimes ++;
    if (self.jpushLoginTimes>4) {
        self.jpushLoginTimes = 0;
    }
}

- (void)resetJpushLoginTimes
{
    self.jpushLoginTimes = 0;
}

- (NSUInteger)fetchJpushLoginTimes
{
    return self.jpushLoginTimes;
}

//是否拥有购买权限
- (BOOL)fetchUserBuyPermission {
    if ([self.loginModel.roleId isEqualToString:JinJIGuan] || [self.loginModel.roleId isEqualToString:XianXiaMenDian]) {
        return YES;
    }
    return NO;
}

- (NSString *)fetchUserRoleAliasWithRoleId:(NSString *)roleId {
    if ([roleId isEqualToString:JinJIGuan]) {
        return @"金纪官";
    } else if ([roleId isEqualToString:XianXiaMenDian]) {
        return @"线下门店";
    } else if ([roleId isEqualToString:MEMCRM]) {
        return @"普通会员";
    } else if ([roleId isEqualToString:GongYingShang]) {
        return @"供应商";
    }else if ([roleId isEqualToString:YouKe])
    {
        return @"游客";
    }
    return @"普通会员";
}

- (void)saveLoginModel:(LoginCenterLoginModel *)model
{
    if (model) {
       _loginModel = model;
        NSData *encodedObject = [NSKeyedArchiver archivedDataWithRootObject:model];
        [[NSUserDefaults standardUserDefaults] setObject:encodedObject forKey:LoginModel];
        [[NSUserDefaults standardUserDefaults] synchronize];
    }
}

- (LoginCenterLoginModel *)loginModel
{
    if (_loginModel) {
        return _loginModel;
    }
    NSData *encodedObject = [[NSUserDefaults standardUserDefaults] objectForKey:LoginModel];
    if (encodedObject) {
        LoginCenterLoginModel *model = [NSKeyedUnarchiver unarchiveObjectWithData:encodedObject];
        _loginModel = model;
        return _loginModel;
    }
    
    return nil;
}

- (void)logout
{
    _loginModel.userId = nil;
    _loginModel.name = nil;
    _loginModel = nil;
    [[NSUserDefaults standardUserDefaults] removeObjectForKey:LoginModel];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (BOOL)isLogin
{
    if (_loginModel && _loginModel.userId) {
        return YES;
    }else
    {
        return NO;
    }
}

- (BOOL)isAppleAccount
{
    if ([_loginModel.account isEqualToString:@"13620180004"] ||
        [_loginModel.account isEqualToString:@"Test0017"] ||
        [_loginModel.account isEqualToString:@"Test0018"]) {
        return YES;
    }
    return NO;
}

- (NSString *)loginUserId
{
    if (_loginModel) {
        return _loginModel.userId;
    }
    NSData *encodedObject = [[NSUserDefaults standardUserDefaults] objectForKey:LoginModel];
    if (encodedObject) {
        LoginCenterLoginModel *model =  [NSKeyedUnarchiver unarchiveObjectWithData:encodedObject];
        if (model) {
            return model.userId;
        }
    }
    return nil;
}

@end
