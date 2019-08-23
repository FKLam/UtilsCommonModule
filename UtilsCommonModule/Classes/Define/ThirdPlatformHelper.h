//
//  ThirdPlatformHelper.h
//  Pods
//
//  Created by infun on 2018/7/27.
//

#import <Foundation/Foundation.h>
#import "ThirdMacros.h"

typedef NS_ENUM(NSInteger,ProjectType)
{
    IFEye_dist,//应范眼正式
    IFEye_dev,//应范眼开发
    IFMall_dist,//商城正式
    IFMall_dev,//商城开发
};

@interface ThirdPlatformHelper : NSObject

//bugly
+ (NSString *)buglyIDForProject:(ProjectType)project;
+ (NSString *)buglyKeyForProject:(ProjectType)project;

//umeng
+ (NSString *)umengKeyForProject:(ProjectType)project;

//weixin
+ (NSString *)wechatAppKey:(ProjectType)project;
+ (NSString *)wechatAppSecret:(ProjectType)project;

//tim
+ (NSString *)timAppKey:(ProjectType)project;
+ (NSString *)timAppType:(ProjectType)project;

//极光
+ (NSString *)jpushAppKey:(ProjectType)project;
@end
