//
//  LCCommonConst.h
//  YKT
//
//  Created by navy deng on 2016/12/23.
//  Copyright © 2016年 WJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define APPID @"1324589927"     //应用ID
#define APPStoreUrl @"https://itunes.apple.com/cn/app/id1324589927?mt=8"
#define AppMallStoreUlr @"https://itunes.apple.com/cn/app/id1439012829?mt=8"

#define APPStoreWriteViewUrl [NSString  stringWithFormat: @"itms-apps://itunes.apple.com/app/id%@?action=write-review",APPID] //跳转AppStore评分URL

extern NSString * const BaseModule;                 //基础模块
extern NSString * const NetworkModule;              //网络模块
extern NSString * const ShareModule;              //分享模块
extern NSString * const INSFUNHomePageModule;//应范首页模块
extern NSString * const INSFUNINSModule;//趣物模块
extern NSString * const INSFUNMessagesModule;//消息模块
extern NSString * const INSFUNActivityModule;//活动模块
extern NSString * const INSFUNMyCenterModule;//个人中心模块
extern NSString * const INSFUNPublishModule;//发布模块
extern NSString * const INSFUNLoginRegisterModule;//登陆注册模块
extern NSString * const INSFUNPublicResourceModule;//公共资源模块
extern NSString * const INSFUNIMModule;//IM模块
extern NSString * const OSSHelperModule;//oss模块

//应范b端商城
extern NSString * const IF_BusinessMall_HomePageModule;//商城首页
extern NSString * const IF_BusinessMall_ShopManagerModule;//商铺管理
extern NSString * const IF_BusinessMall_ShoppingCartModule;//购物车
extern NSString * const IF_BusinessMall_UserCenterModule;//用户中心
extern NSString * const IF_BusinessMall_OrderModule;//订货
extern NSString * const IF_BusinessMall_ChoicenessModule;//精选
extern NSString * const IF_BusinessMall_ClassifyModule;//分类
extern NSString * const IF_BusinessMall_BaseModule;//公共模块
extern NSString * const IF_BusinessMall_LoginRegistModule;//商城登录
extern NSString * const IF_BusinessMall_MessageCenterModule;//商城消息中心
extern NSString * const IF_BusinessMall_WithdrawModule;// 提现模块

extern NSString * const MediaPlayModule;//视频播放模块
extern NSString * const OSSHelperModule;//oss模块

//通知key
extern  NSString *const kNotificationNetworkBeValid;        //网络变成可用
extern  NSString *const kNotificationNetworkUnValid;        //网络不可用
extern  NSString *const kNotificationNewMessage;            //极光新消息

extern  NSString *const kNotificationUserInfoChange;        //用户信息更新
extern  NSString *const kNotificationRoleChange;            //用户角色更新
extern  NSString *const kNotificationUpgradeSuccess;        //升级金纪官成功
extern  NSString *const kNotificationPayUpgradeSuccess;//支付成功
extern  NSString *const kNotificationRefreshWelfareList;
extern  NSString *const kNotificationLoginSuccess;          //登录成功
extern  NSString *const kNotificationIFLoginStateChange;    //登陆状态改变
extern  NSString *const kNotificationLogoutSuccess;         //退出成功
extern  NSString *const kNotificationNeedLogin;             //需要登录，弹出登录页
extern  NSString *const kNotificationTokenValid;            //登录失效
extern  NSString *const kNotificationBackFrom3rdPay;      //支付状态回调
extern  NSString *const kNotificationRefreshMyOrder;        //刷新订单

extern  NSString *const kNotificationUpdateGoodData;            //商品状态更新  要刷新数据

extern  NSString *const kNotificationRefreshRefundOrder;        //刷新售后订单

extern  NSString *const kNotificationRefreshRefundOrderDetail;  //刷新售后订单详情

extern  NSString *const kNotificationChangePayStatusOrder;      //刷新订单---指定状态

extern  NSString *const kNotificationRefreshOrderDetail;      //刷新订单详情
extern  NSString *const kNotificationRefreshShopCart;       //刷新购物车
extern  NSString *const kNotificationRefreshMainView;       //刷新首页
extern  NSString *const KNotificationNetWorkStateChange;    //网络发送改变
extern  NSString *const KNotificationDidReceiveJPushMessage;//收到极光透传

extern  NSString *const KNotificationUnReadMessageChange;   //未读消息数改变
extern  NSString *const KNotificationSetUnReadMessageByMessageType;//设置未读
extern  NSString *const KNotificationUnReadMessageChangeForPendency;

extern  NSString *const KNotificationTeamChange;//小队改变
extern  NSString *const KNotificationJoinTeamSuc;//加入小队成功
extern  NSString *const KNotificationExitTeamSuc;//退出小队成功
extern  NSString *const KNotificationCreateTeamSuc;//创建小队成功
extern  NSString *const KNotificationInviteMembaerIntoTeam;//邀请成员进入小队
extern  NSString *const KNotificationTeamDisbandedOrFilled;//小队已满或已解散

extern  NSString *const KNotificationPublishFunGoodSuc;//发布趣物成功
extern  NSString *const kNotificationRefreshGoods;//刷新趣物
extern  NSString *const kNotificationEditRefreshGoods;//编辑趣物刷新
extern  NSString *const kNotificationDeleteGoods;//删除趣物
extern  NSString *const kNotificationLikeGoods;//点赞
extern  NSString *const kNotificationHandleCommentGoods;//刷新评论
extern  NSString *const kNotificationHandleCommentLike;//评论点赞
extern  NSString *const kNotificationFocus;//收藏
extern  NSString *const kNotificationGoodsBeFrozen ;//趣物冻结
//支持横屏获取屏幕宽高
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 80000 // 当前Xcode支持iOS8及以上

#define SCREEN_WIDTH ([[UIScreen mainScreen] respondsToSelector:@selector(nativeBounds)]?[UIScreen mainScreen].nativeBounds.size.width/[UIScreen mainScreen].nativeScale:[UIScreen mainScreen].bounds.size.width)
#define SCREENH_HEIGHT ([[UIScreen mainScreen] respondsToSelector:@selector(nativeBounds)]?[UIScreen mainScreen].nativeBounds.size.height/[UIScreen mainScreen].nativeScale:[UIScreen mainScreen].bounds.size.height)
#define SCREEN_SIZE ([[UIScreen mainScreen] respondsToSelector:@selector(nativeBounds)]?CGSizeMake([UIScreen mainScreen].nativeBounds.size.width/[UIScreen mainScreen].nativeScale,[UIScreen mainScreen].nativeBounds.size.height/[UIScreen mainScreen].nativeScale):[UIScreen mainScreen].bounds.size)
#else
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREENH_HEIGHT [UIScreen mainScreen].bounds.size.height
#define SCREEN_SIZE [UIScreen mainScreen].bounds.size
#endif

#define kApplication        [UIApplication sharedApplication]
#define kAppWindow          [UIApplication sharedApplication].delegate.window

#define kRootViewController [UIApplication sharedApplication].delegate.window.rootViewController
#define kUserDefaults       [NSUserDefaults standardUserDefaults]
#define kNotificationCenter [NSNotificationCenter defaultCenter]

//通知
#define LCNotificationCenter [NSNotificationCenter defaultCenter]

//随机颜色
#define LCRandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]
//RGB 颜色
#define LCRGBColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
//RGB ALPHA
#define LCRGBAColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(r)/255.0 blue:(r)/255.0 alpha:a]
// clear背景颜色
#define LCClearColor [UIColor clearColor]

#define UIColorFromRGB(r, g, b) [UIColor colorWithRed:(CGFloat)r/255.0 green:(CGFloat)g/255.0 blue:(CGFloat)b/255.0 alpha:1]
#define defaultRedColor UIColorFromRGB(223, 73, 65)
#define UIColorFromHex(s) [UIColor colorWithRed:(((s & 0xFF0000) >> 16))/255.0 green:(((s &0xFF00) >>8))/255.0 blue:((s &0xFF))/255.0 alpha:1.0]

#define defaultImage [UIImage imageWithColor:UIColorFromHex(0xF1F1F1)]

// 商城默认图
#define Mall_Banner_DefaultImage [UIImage imageForClass:self.class module:IF_BusinessMall_BaseModule imageName:@"mall_banner_default_img"]

#define Mall_Master_DefaultImage [UIImage imageForClass:self.class module:IF_BusinessMall_BaseModule imageName:@"mall_master_default_img"]

#define UIFontPingFangSCMedium(s) [UIFont fontWithName:@"PingFangSC-Medium" size:s]
#define UIFontPingFangSCRegular(s) [UIFont fontWithName:@"PingFangSC-Regular" size:s]

#define WJ_F(f) ((int)f + 1)

//iOS系统版本
#define IS_IOS7_LATER ([[[UIDevice currentDevice] systemVersion] doubleValue]>=7.0)
#define IS_IOS8_LATER ([[[UIDevice currentDevice] systemVersion] doubleValue]>=8.0)
#define IS_IOS9_LATER ([[[UIDevice currentDevice] systemVersion] doubleValue]>=9.0)
#define IS_IOS10_LATER ([[[UIDevice currentDevice] systemVersion] doubleValue]>=10.0)
#define IS_IOS11_LATER ([[[UIDevice currentDevice] systemVersion] doubleValue]>=11.0)
#define IS_SIZE3_5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

//机型
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREENH_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREENH_HEIGHT))


#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH <= 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)
//#define IS_IPHONE_X ([UIScreen instancesRespondToSelector:@selector(currentMode)]?CGSizeEqualToSize(CGSizeMake(1125, 2436),[[UIScreen mainScreen]currentMode].size):NO)
#define IS_IPHONE_X  (isIPhoneXSeries())
//尺寸
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREENH_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREENH_HEIGHT))
#define kStatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define kNavBarHeight 44.0
#define kTabBarHeight (IS_IPHONE_X?83:49)
#define kTopHeight (IS_IPHONE_X?88:64)
#define kBottomAreaHeight (IS_IPHONE_X?34:0)
#define kContentAreaHeight (SCREENH_HEIGHT - kTopHeight)

// 应范商城  全局主题色
#define MALL_THEME_COLOR UIColorFromHex(0x03A861)

// 应范商城  下拉刷新主题颜色
#define MALL_MJREFRESH_COLOR UIColorFromHex(0xeff3f9)

#define PUBLIC_BASE_COLOR UIColorFromRGB(34, 165, 254)

#define PUBLIC_BACK_COLOR UIColorFromRGB(238, 238, 238)

#define PUBLIC_LINE_COLOR UIColorFromRGB(240, 240, 240)

#define PUBLIC_GREEN_COLOR UIColorFromRGB(7, 187, 24)

#define PUBLIC_TEXT_GRAY_COLOR UIColorFromRGB(80, 80, 80)

#define PUBLIC_TEXT_BLACK_COLOR UIColorFromHex(0x333333)



#define SystemFont(size) [UIFont systemFontOfSize:size];

#define LCWeakSelf(type)  __weak typeof(type) weak##type = type;
#define LCStrongSelf(type)  __strong typeof(type) type = weak##type;

#ifdef DEBUG
#define LCLog(format, ...) printf("class: <%p %s:(%d) > method: %s \n%s\n", self, [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, __PRETTY_FUNCTION__, [[NSString stringWithFormat:(format), ##__VA_ARGS__] UTF8String] )
#else
#define LCLog(format, ...)
#endif

#ifdef DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr,"[%s:%d行] %s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(format, ...)
#endif

#define LCViewBorderRadius(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]]
 
#define LCDegreesToRadian(x) (M_PI * (x) / 180.0)   //角度转化成弧度
#define LCRadianToDegrees(radian) (radian*180.0)/(M_PI)  //弧度转化成角度

//获取图片资源
#define kGetImage(imageName) [UIImage imageNamed:[NSString stringWithFormat:@"%@",imageName]]

#define empty_ad  kGetImage(@"empty_ad")
#define empty_image  kGetImage(@"empty_image")
#define kUserSaveKey @"kUserSaveKey"
#define kUserDetailSaveKey @"kUserDetailSaveKey"

#define YinFunEye @"YinFunEye"
#define YinFunMall @"YinFunMall"

#define UpGradeJinjiGuan @"UpGradeJinjiGuan"

#define SINGLE_LINE_WIDTH           (1 / [UIScreen mainScreen].scale)
#define SINGLE_LINE_ADJUST_OFFSET   ((1 / [UIScreen mainScreen].scale) / 2)

//获取temp
#define kPathTemp NSTemporaryDirectory()

//获取沙盒 Document
#define kPathDocument [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]

//获取沙盒 Cache
#define kPathCache [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject]

//GCD - 一次性执行
#define kDISPATCH_ONCE_BLOCK(onceBlock) static dispatch_once_t onceToken; dispatch_once(&onceToken, onceBlock);

//GCD - 在Main线程上运行
#define kDISPATCH_MAIN_THREAD(mainQueueBlock) dispatch_async(dispatch_get_main_queue(), mainQueueBlock);

//GCD - 开启异步线程
#define kDISPATCH_GLOBAL_QUEUE_DEFAULT(globalQueueBlock) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), globalQueueBlock);

/*block*/
#pragma clang diagnostic push

#pragma clang diagnostic ignored "-Wstrict-prototypes"

typedef void(^BaseCompletionBlock)();

#pragma clang diagnostic pop

static inline BOOL isIPhoneXSeries() {
    BOOL iPhoneXSeries = NO;
    if (UIDevice.currentDevice.userInterfaceIdiom != UIUserInterfaceIdiomPhone) {
        return iPhoneXSeries;
    }
    
    if (@available(iOS 11.0, *)) {
        UIWindow *mainWindow = [[[UIApplication sharedApplication] delegate] window];
        if (mainWindow.safeAreaInsets.bottom > 0.0) {
            iPhoneXSeries = YES;
        }
    }
    
    return iPhoneXSeries;
}

typedef void(^FinishedSelectedBlock)(NSMutableArray *result,NSString *componesId);
typedef NS_ENUM(NSInteger,DeviceType)
{
    
    Unknown = 0,
    Simulator,
    IPhone_1G,          //基本不用
    IPhone_3G,          //基本不用
    IPhone_3GS,         //基本不用
    IPhone_4,           //基本不用
    IPhone_4s,          //基本不用
    IPhone_5,
    IPhone_5C,
    IPhone_5S,
    IPhone_SE,
    IPhone_6,
    IPhone_6P,
    IPhone_6s,
    IPhone_6s_P,
    IPhone_7,
    IPhone_7P,
    IPhone_8,
    IPhone_8P,
    IPhone_X,
};
@interface LCCommonConst : NSObject
+ (DeviceType)deviceType;
@end
