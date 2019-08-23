//
//  ThirdPlatformHelper.m
//  Pods
//
//  Created by infun on 2018/7/27.
//

#import "ThirdPlatformHelper.h"

@implementation ThirdPlatformHelper
//bugly
+ (NSString *)buglyIDForProject:(ProjectType)project
{
    switch (project) {
        case IFEye_dist:return BuglyID; break;
        case IFEye_dev:return BuglyID; break;
        case IFMall_dist:return IFMall_BuglyID;break;
        case IFMall_dev:return IFMall_BuglyID;break;
            
            
        default:
            return nil;
            break;
    }

}

+ (NSString *)buglyKeyForProject:(ProjectType)project
{
    switch (project) {
        case IFEye_dist:return BuglyKey; break;
        case IFEye_dev:return BuglyKey;break;
        case IFMall_dist:return IFMall_BuglyKey;break;
        case IFMall_dev:return IFMall_BuglyKey;break;
        default:
            return nil;
            break;
    }
}

//umeng
+ (NSString *)umengKeyForProject:(ProjectType)project
{
    switch (project) {
        case IFEye_dist:return UMengKey; break;
        case IFEye_dev:return UMengKey_DEV;break;
        case IFMall_dist:return IFMall_UMengKey; break;
        case IFMall_dev:return IFMall_UMengKeyDev; break;
            
            
        default:
            return nil;
            break;
    }
}

//weixin
+ (NSString *)wechatAppKey:(ProjectType)project
{
    switch (project) {
        case IFEye_dist:return kAppKey_Wechat; break;
        case IFEye_dev:return kAppKey_Wechat;break;
        case IFMall_dist:return nil; break;
        case IFMall_dev:return nil; break;
            
            
        default:
            return nil;
            break;
    }
}
+ (NSString *)wechatAppSecret:(ProjectType)project
{
    switch (project) {
        case IFEye_dist:return kSecret_Wechat; break;
        case IFEye_dev:return kSecret_Wechat; break;
        case IFMall_dist:return nil; break;
        case IFMall_dev:return nil; break;
            
            
        default:
            return nil;
            break;
    }
}

//tim
+ (NSString *)timAppKey:(ProjectType)project
{
    switch (project) {
        case IFEye_dist:return kAppKey_TIM; break;
        case IFEye_dev:return kAppKey_TIM_DEV; break;
        case IFMall_dist:return nil; break;
        case IFMall_dev:return nil; break;
            
            
        default:
            return nil;
            break;
    }
}

+ (NSString *)timAppType:(ProjectType)project
{
    switch (project) {
        case IFEye_dist:return KAccountType_TIM; break;
        case IFEye_dev:return KAccountType_TIM_DEV; break;
        case IFMall_dist:return nil; break;
        case IFMall_dev:return nil; break;
            
            
        default:
            return nil;
            break;
    }
}

//极光
+ (NSString *)jpushAppKey:(ProjectType)project
{
    switch (project) {
        case IFEye_dist:return kAppKey_JPUSH; break;
        case IFEye_dev:return kAppKey_JPUSH_DEV; break;
        case IFMall_dist:return kAppKey_Mall_JPUSH; break;
        case IFMall_dev:return kAppKey_Mall_JPUSH_DEV; break;
            
            
        default:
            return nil;
            break;
    }
}

@end
