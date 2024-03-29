//
//  define.h
//  MiAiApp
//
//  Created by 徐阳 on 2017/5/18.
//  Copyright © 2017年 徐阳. All rights reserved.
//

// 全局工具类宏定义

#ifndef define_h
#define define_h


//常用宏
//系统版本、设备版本
#define LDTIsIOS7              ([[[[UIDevice currentDevice] systemVersion] substringToIndex:1] intValue]>=7)
#define LDTIsIOS8              ([[[[UIDevice currentDevice] systemVersion] substringToIndex:1] intValue]>=8)
#define LDTIsIOS9              ([[[[UIDevice currentDevice] systemVersion] substringToIndex:1] intValue]>=9)
#define LDTIS_IPHONE_4         ( fabs( ( double )[[UIScreen mainScreen] bounds].size.height - ( double )480 ) == 0 )
#define LDTIS_IPHONE_6PLUS     (fabs((double)[[UIScreen mainScreen] bounds].size.height - (double)736) < __DBL_EPSILON__)
#define LDTIOS_VERSION         [[[UIDevice currentDevice] systemVersion] doubleValue]

#define ipone5 568
//判断是不是IponeX
#define LDTISiPhoneX [[UIScreen mainScreen] bounds].size.width >=375.0f && [[UIScreen mainScreen] bounds].size.height >=812.0f&& YYIS_IPHONE
#define YYIS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
//状态栏高度
#define LDTStatusBarHeight (CGFloat)(LDTISiPhoneX?(44):(20))
// 导航栏高度
#define LDTNavBarHBelow (44)
// 状态栏和导航栏总高度
#define LDTNavBarHAbove (CGFloat)(LDTISiPhoneX?(88):(64))
// TabBar高度
#define LDTTabBarHeight (CGFloat)(LDTISiPhoneX?(49+34):(49))
// 顶部安全区域远离高度
#define LDTTopBarSafeHeight (CGFloat)(LDTISiPhoneX?(44):(0))
// 底部安全区域远离高度
#define LDTBottomSafeHeight (CGFloat)(LDTISiPhoneX?(34):(0))
// iPhoneX的状态栏高度差值
#define LDTTopBarDifHeight (CGFloat)(LDTISiPhoneX?(24):(0))
//出去通知栏导航栏的可显示内容的视图高度
#define kShowViewTotalHeight (SCREEN_HEIGHT- LDTNavBarHAbove - LDTBottomSafeHeight)


//字体大小
#define font10 [UIFont systemFontOfSize:10]
#define font11 [UIFont systemFontOfSize:11]
#define font12 [UIFont systemFontOfSize:12]
#define font13 [UIFont systemFontOfSize:13]
#define font14 [UIFont systemFontOfSize:14]
#define font15 [UIFont systemFontOfSize:15]
#define font16 [UIFont systemFontOfSize:16]
#define font17 [UIFont systemFontOfSize:17]
#define font18 [UIFont systemFontOfSize:18]
#define font19 [UIFont systemFontOfSize:19]
#define font20 [UIFont systemFontOfSize:20]
#define font21 [UIFont systemFontOfSize:21]

#define fontC(number) [UIFont fontWithName:@"Helvetica-Bold" size:number]

//获取系统对象
#define kApplication        [UIApplication sharedApplication]
#define kAppWindow          [UIApplication sharedApplication].delegate.window
#define kAppDelegate        [AppDelegate shareAppDelegate]
#define kRootViewController [UIApplication sharedApplication].delegate.window.rootViewController
#define kUserDefaults       [NSUserDefaults standardUserDefaults]
#define kNotificationCenter [NSNotificationCenter defaultCenter]

#define kStatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define NavBarHeight 44.0
#define TabBarHeight ([[UIApplication sharedApplication] statusBarFrame].size.height>20?83:49)
#define TopHeight (kStatusBarHeight + NavBarHeight)

//获取屏幕宽高
#define KScreenWidth [[UIScreen mainScreen] bounds].size.width
#define KScreenHeight [[UIScreen mainScreen] bounds].size.height
#define kScreen_Bounds [UIScreen mainScreen].bounds

#define Iphone6ScaleWidth KScreenWidth/375.0
#define Iphone6ScaleHeight KScreenHeight/667.0
//根据ip6的屏幕来拉伸
#define kRealValue(with) ((with)*(KScreenWidth/375.0f))

//强弱引用
#define kWeakSelf(type)  __weak typeof(type) weak##type = type;
#define kStrongSelf(type) __strong typeof(type) type = weak##type;

//View 圆角和加边框
#define ViewBorderRadius(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]]

// View 圆角
#define ViewRadius(View, Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES]

//property 属性快速声明 别用宏定义了，使用代码块+快捷键实现吧

// 当前系统版本
#define CurrentSystemVersion [[UIDevice currentDevice].systemVersion doubleValue]
//当前语言
#define CurrentLanguage (［NSLocale preferredLanguages] objectAtIndex:0])

//-------------------打印日志-------------------------
//DEBUG  模式下打印日志,当前行
#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define DLog(...)
#endif

//拼接字符串
#define NSStringFormat(format,...) [NSString stringWithFormat:format,##__VA_ARGS__]

//颜色
#define KClearColor [UIColor clearColor]
#define KWhiteColor [UIColor whiteColor]
#define KBlackColor [UIColor blackColor]
#define KGrayColor [UIColor grayColor]
#define KGray2Color [UIColor lightGrayColor]
#define KBlueColor [UIColor blueColor]
#define KRedColor [UIColor redColor]
#define kRandomColor    KRGBColor(arc4random_uniform(256)/255.0,arc4random_uniform(256)/255.0,arc4random_uniform(256)/255.0)        //随机色生成

//字体
#define BOLDSYSTEMFONT(FONTSIZE)[UIFont boldSystemFontOfSize:FONTSIZE]
#define SYSTEMFONT(FONTSIZE)    [UIFont systemFontOfSize:FONTSIZE]
#define FONT(NAME, FONTSIZE)    [UIFont fontWithName:(NAME) size:(FONTSIZE)]


//定义UIImage对象
#define ImageWithFile(_pointer) [UIImage imageWithContentsOfFile:([[NSBundle mainBundle] pathForResource:[NSString stringWithFormat:@"%@@%dx", _pointer, (int)[UIScreen mainScreen].nativeScale] ofType:@"png"])]
#define IMAGE_NAMED(name) [UIImage imageNamed:name]

//数据验证
#define StrValid(f) (f!=nil && [f isKindOfClass:[NSString class]] && ![f isEqualToString:@""])
#define SafeStr(f) (StrValid(f) ? f:@"")
#define HasString(str,key) ([str rangeOfString:key].location!=NSNotFound)

#define ValidStr(f) StrValid(f)
#define ValidDict(f) (f!=nil && [f isKindOfClass:[NSDictionary class]])
#define ValidArray(f) (f!=nil && [f isKindOfClass:[NSArray class]] && [f count]>0)
#define ValidNum(f) (f!=nil && [f isKindOfClass:[NSNumber class]])
#define ValidClass(f,cls) (f!=nil && [f isKindOfClass:[cls class]])
#define ValidData(f) (f!=nil && [f isKindOfClass:[NSData class]])

//获取一段时间间隔
#define kStartTime CFAbsoluteTime start = CFAbsoluteTimeGetCurrent();
#define kEndTime  NSLog(@"Time: %f", CFAbsoluteTimeGetCurrent() - start)
//打印当前方法名
#define ITTDPRINTMETHODNAME() ITTDPRINT(@"%s", __PRETTY_FUNCTION__)


//发送通知
#define KPostNotification(name,obj) [[NSNotificationCenter defaultCenter] postNotificationName:name object:obj];

//单例化一个类
#define SINGLETON_FOR_HEADER(className) \
\
+ (className *)shared##className;

#define SINGLETON_FOR_CLASS(className) \
\
+ (className *)shared##className { \
static className *shared##className = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
shared##className = [[self alloc] init]; \
}); \
return shared##className; \
}

#endif /* define_h */
