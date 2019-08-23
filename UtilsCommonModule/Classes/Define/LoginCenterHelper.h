//
//  LoginCenterHelper.h
//  Pods
//
//  Created by infun on 2018/7/25.
//

#import <Foundation/Foundation.h>

// 角色Id，必须输入，MEMCRM:普通会员, BROKER:金纪官, SALESCLERK:线下门店, SUPPLIER:供应商",TOURIST:游客

#define JinJIGuan_TestAccount @"13520181031"

#define XianXiaMenDian_TestAccount @"Test0017"

#define JinJIGuan @"BROKER"

#define XianXiaMenDian @"SALESCLERK"

#define MEMCRM @"MEMCRM"

#define GongYingShang @"SUPPLIER"

#define YouKe @"TOURIST"

#define JPushRetrySeconds 15 //极光推送失败后重新尝试操作间隔秒，2的次方数

@interface LoginCenterLoginModel:NSObject

@property (nonatomic, strong) NSString *userId;//用户id
@property (nonatomic, strong) NSString *roleId;//角色id
@property (nonatomic, strong) NSString *sign;//签名
@property (nonatomic, strong) NSString *name;//用户昵称
@property (nonatomic, strong) NSString *headPic;//用户头像
@property (nonatomic, strong) NSString *account;//用户账号
@property (nonatomic, strong) NSString *token;

@property (nonatomic, strong) NSString *roleName;

@property (nonatomic, assign) BOOL buyPermission;// 自定义  是否拥有购买权限

@end

@interface LoginCenterHelper : NSObject

//累计添加操作极光次数
- (void)plusJpushLoginTimes;

//获取极光推送次数
- (NSUInteger)fetchJpushLoginTimes;

//重置极光推送次数
- (void)resetJpushLoginTimes;

+ (instancetype)shareCenterHelper;

- (void)saveLoginModel:(LoginCenterLoginModel *)model;

- (void)logout;

- (LoginCenterLoginModel *)loginModel;

//是否拥有购买权限
- (BOOL)fetchUserBuyPermission;

- (NSString *)fetchUserRoleAliasWithRoleId:(NSString *)roleId;

/**
 当前是否登陆

 @return <#return value description#>
 */
- (BOOL)isLogin;


/**
 当前登陆用户ID

 @return <#return value description#>
 */
- (NSString *)loginUserId;


/**
 是否是苹果账号

 @return <#return value description#>
 */
- (BOOL)isAppleAccount;
@end
