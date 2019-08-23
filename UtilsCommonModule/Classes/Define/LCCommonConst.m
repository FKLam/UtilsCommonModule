//
//  LCCommonConst.m
//  YKT
//
//  Created by navy deng on 2016/12/23.
//  Copyright © 2016年 WJ. All rights reserved.
//

#import "LCCommonConst.h"
#import <sys/utsname.h>

NSString *const BaseModule = @"BaseModule";
NSString *const NetworkModule = @"NetworkModule";
NSString *const ShareModule = @"ShareModule";
NSString * const INSFUNHomePageModule = @"InsFun_HomePageModule";
NSString * const INSFUNINSModule = @"InsFun_InsModule";//趣物模块
NSString * const INSFUNMessagesModule = @"InsFun_MessagesCenterModule";//消息模块
NSString * const INSFUNActivityModule = @"InFun_ActivityModule";//活动模块
NSString * const INSFUNMyCenterModule = @"InsFun_MyCenterModule";//个人中心模块
NSString * const INSFUNPublishModule = @"InsFun_PublishModule";//发布模块
NSString * const INSFUNLoginRegisterModule = @"InsFun_LoginRegisterModule";//登陆注册模块
NSString * const INSFUNPublicResourceModule = @"InsFun_PublicResource";//登陆注册模块
NSString * const INSFUNIMModule = @"IMModule";//IM模块
NSString * const MediaPlayModule = @"MediaPlayModule";
NSString * const OSSHelperModule = @"OSSHelperModule";

NSString * const IF_BusinessMall_HomePageModule = @"IF_BusinessMall_HomePageModule";
NSString * const IF_BusinessMall_ShopManagerModule = @"IF_BusinessMall_ShopManagerModule";
NSString * const IF_BusinessMall_ShoppingCartModule = @"IF_BusinessMall_ShoppingCartModule";
NSString * const IF_BusinessMall_UserCenterModule = @"IF_BusinessMall_UserCenterModule";
NSString * const IF_BusinessMall_OrderModule = @"IF_BusinessMall_OrderModule";//订货
NSString * const IF_BusinessMall_ChoicenessModule = @"IF_BusinessMall_OrderModule";//精选
NSString * const IF_BusinessMall_ClassifyModule = @"IF_BusinessMall_ClassifyModule";//分类
NSString * const IF_BusinessMall_BaseModule = @"IF_BusinessMall_BaseModule";//公共模块
NSString * const IF_BusinessMall_LoginRegistModule = @"IF_BusinessMall_LoginRegistModule";//商城登录模块
NSString * const IF_BusinessMall_MessageCenterModule = @"IF_BusinessMall_MessageCenterModule";

NSString * const IF_BusinessMall_WithdrawModule = @"IF_BusinessMall_WithdrawModule";// 提现模块

NSString *const kNotificationNetworkBeValid = @"com.insfun.kNotificationNetworkBeValid";
NSString *const kNotificationNetworkUnValid = @"com.insfun.kNotificationNetworkUnValid";

NSString *const kNotificationNewMessage  = @"com.lc.kNotificationNewMessage";

NSString *const kNotificationUserInfoChange = @"com.lc.kNotificationUserInfoChange";
NSString *const kNotificationRoleChange = @"com.lc.kNotificationRoleChange";
NSString *const kNotificationUpgradeSuccess = @"com.lc.kNotificationUpgradeSuccess";
NSString *const kNotificationPayUpgradeSuccess = @"com.lc.kNotificationPayUpgradeSuccess";
NSString *const kNotificationRefreshWelfareList = @"com.lc.kNotificationRefreshWelfareList";

NSString *const kNotificationUpdateGoodData = @"com.insfun.kNotificationUpdateGoodData";                            //商品状态更新  要刷新数据

NSString *const kNotificationBackFrom3rdPay = @"com.insfun.kNotificationBackFrom3rdPay";                            //支付状态回调

NSString *const kNotificationRefreshShopCart = @"com.insfun.kNotificationRefreshShopCart";                          //刷新购物车

NSString *const kNotificationRefreshMyOrder = @"com.insfun.kNotificationRefreshMyOrder";                            //刷新订单

NSString *const kNotificationRefreshRefundOrder = @"com.insfun.kNotificationRefreshRefundOrder";                    //刷新售后订单

NSString *const kNotificationRefreshRefundOrderDetail = @"com.insfun.kNotificationRefreshRefundOrderDetail";        //刷新售后订单详情

NSString *const kNotificationChangePayStatusOrder = @"com.insfun.kNotificationChangePayStatusOrder";                //刷新订单---指定状态

NSString *const kNotificationRefreshOrderDetail = @"com.insfun.kNotificationRefreshOrderDetail";                    //刷新订单详情

NSString *const kNotificationRefreshMainView  = @"com.lc.govcar.kNotificationRefreshMainView";                      //刷新首页

NSString *const kNotificationLoginSuccess = @"com.insfun.kNotificationLoginSuccess";                                //登录成功
NSString *const kNotificationLogoutSuccess = @"com.insfun.kNotificationLogoutSuccess";                              //退出成功
NSString *const kNotificationNeedLogin = @"com.insfun.kNotificationNeedLogin";                                      //退出成功
NSString *const kNotificationTokenValid = @"com.insfun.kNotificationTokenValid";                                      //商城token失效
NSString *const kNotificationIFLoginStateChange = @"com.insfun.kNotificationIFLoginStateChange";
NSString *const KNotificationNetWorkStateChange = @"com.insfun.KNotificationNetWorkStateChange";
NSString *const KNotificationDidReceiveJPushMessage = @"com.insfun.KNotificationDidReceiveJPushMessage";

NSString *const KNotificationUnReadMessageChange = @"com.insfun.KNotificationUnReadMessageChange";
NSString *const KNotificationSetUnReadMessageByMessageType = @"com.insfun.KNotificationSetUnReadMessageByMessageType";
NSString *const KNotificationUnReadMessageChangeForPendency = @"com.insfun.KNotificationUnReadMessageChangeForPendency";

NSString *const KNotificationTeamChange = @"com.insfun.KNotificationTeamChange";//小队有更新
NSString *const KNotificationJoinTeamSuc = @"com.insfun.KNotificationJoinTeamSuc";//加入小队成功
NSString *const KNotificationExitTeamSuc = @"com.insfun.KNotificationExitTeamSuc";//退出小队成功
NSString *const KNotificationCreateTeamSuc = @"com.insfun.KNotificationCreateTeamSuc";//创建小队成功
NSString *const KNotificationInviteMembaerIntoTeam = @"com.insfun.KNotificationInviteMembaerIntoTeam";//邀请成员进入小队
NSString *const KNotificationTeamDisbandedOrFilled = @"com.insfun.KNotificationTeamDisbandedOrFilled";//小队已满或已解散


NSString *const KNotificationPublishFunGoodSuc = @"com.insfun.KNotificationPublishFunGoodSuc";//发布趣物成功

NSString *const kNotificationRefreshGoods = @"com.insfun.kNotificationRefreshGoods";//刷新趣物详情，趣物列表
NSString *const kNotificationEditRefreshGoods = @"com.insfun.kNotificationEditRefreshGoods";//编辑趣物刷新趣物详情，趣物列表
NSString *const kNotificationDeleteGoods = @"com.insfun.kNotificationDeleteGoods";//删除趣物
NSString *const kNotificationLikeGoods = @"com.insfun.kNotificationLikeGoods";//点赞操作
NSString *const kNotificationHandleCommentGoods = @"com.insfun.kNotificationHandleCommentGoods";//评论操作
NSString *const kNotificationHandleCommentLike = @"com.insfun.kNotificationHandleCommentLike";//评论点赞
NSString *const kNotificationFocus = @"com.insfun.kNotificationFocus";//收藏，取消收藏
NSString *const kNotificationGoodsBeFrozen = @"com.insfun.kNotificationGoodsBeFrozen";//趣物冻结
@implementation LCCommonConst

+ (DeviceType)deviceType
{
    CGSize size = [[UIScreen mainScreen] currentMode].size;
    if(size.height>=2436)
    {
        return IPhone_X;
    }
    struct utsname systemInfo;
    uname(&systemInfo);
    NSString *platform = [NSString stringWithCString:systemInfo.machine
                                            encoding:NSUTF8StringEncoding];
    //simulator
    if ([platform isEqualToString:@"i386"])          return Simulator;
    if ([platform isEqualToString:@"x86_64"])        return Simulator;
    
    //iPhone
    if ([platform isEqualToString:@"iPhone1,1"])     return IPhone_1G;
    if ([platform isEqualToString:@"iPhone1,2"])     return IPhone_3G;
    if ([platform isEqualToString:@"iPhone2,1"])     return IPhone_3GS;
    if ([platform isEqualToString:@"iPhone3,1"])     return IPhone_4;
    if ([platform isEqualToString:@"iPhone3,2"])     return IPhone_4;
    if ([platform isEqualToString:@"iPhone4,1"])     return IPhone_4s;
    if ([platform isEqualToString:@"iPhone5,1"])     return IPhone_5;
    if ([platform isEqualToString:@"iPhone5,2"])     return IPhone_5;
    if ([platform isEqualToString:@"iPhone5,3"])     return IPhone_5C;
    if ([platform isEqualToString:@"iPhone5,4"])     return IPhone_5C;
    if ([platform isEqualToString:@"iPhone6,1"])     return IPhone_5S;
    if ([platform isEqualToString:@"iPhone6,2"])     return IPhone_5S;
    if ([platform isEqualToString:@"iPhone7,1"])     return IPhone_6P;
    if ([platform isEqualToString:@"iPhone7,2"])     return IPhone_6;
    if ([platform isEqualToString:@"iPhone8,1"])     return IPhone_6s;
    if ([platform isEqualToString:@"iPhone8,2"])     return IPhone_6s_P;
    if ([platform isEqualToString:@"iPhone8,4"])     return IPhone_SE;
    if ([platform isEqualToString:@"iPhone9,1"])     return IPhone_7;
    if ([platform isEqualToString:@"iPhone9,3"])     return IPhone_7;
    if ([platform isEqualToString:@"iPhone9,2"])     return IPhone_7P;
    if ([platform isEqualToString:@"iPhone9,4"])     return IPhone_7P;
    if ([platform isEqualToString:@"iPhone10,1"])    return IPhone_8;
    if ([platform isEqualToString:@"iPhone10,4"])    return IPhone_8;
    if ([platform isEqualToString:@"iPhone10,2"])    return IPhone_8P;
    if ([platform isEqualToString:@"iPhone10,5"])    return IPhone_8P;
    if ([platform isEqualToString:@"iPhone10,3"])    return IPhone_X;
    if ([platform isEqualToString:@"iPhone10,6"])    return IPhone_X;
    
    return IPhone_X;
    
}
@end
