//
//  GlobalEnum.h
//  Pods
//
//  Created by zhujiayongJob  on 2018/5/29.
//

#ifndef Goal_h
#define Goal_h

//我关注的人 是否关注我
typedef NS_ENUM(NSInteger,AttentionType){
    kAttentionTypeAttentioned = 1,//
    kAttentionTypeEach = 2,//互相关注
};

//我是否关注我的粉丝
typedef NS_ENUM(NSInteger,MutualStatus) {
    kStatusAttentionNone = 0,//互不关注
    kStatusAttentioning = 1,//我关注对方
    kStatusAttentioned = 2,//我被对方关注
    kStatusMutualAttention = 3,//互相关注
};

typedef NS_ENUM(NSInteger,IFMessageType) {
    kIFMessageTypeSystem = 0,//系统消息
    kIFMessageTypeActivity = 1,//活动
    kIFMessageTypeAttention = 2,//关注
    kIFMessageTypeComment = 3,//评论
    kIFMessageTypeJoinTeam = 4,//参加小队
    kIFMessageTypeGoods = 5 ,   //产品收录
    IFMessageTypePrivate = 6//私信
};

typedef NS_ENUM(NSInteger,IFMallMessageType) {
    kIFMallMessageTypeUpgrade = 0,//系统升级
    kIFMallMessageTypeActivity = 1,//活动
    kIFMallMessageTypeCoin = 2,//应分收入
    kIFMallMessageTypeOrderLogistics = 3,//订单物流
    
    
};

typedef NS_ENUM(NSUInteger,InFunLoginType) {
    kInFunLoginTypePassword = 1,//密码登录
    kInFunLoginTypeWechat,
    kInFunLoginTypeQQ,
    kInFunLoginTypeWeibo,
};

/**
 活动状态
 */
typedef NS_ENUM(NSInteger,ActivityStatus){
    kActivityStatusNoBegin = 0,//未开始
    kActivityStatusEnd = 1,//结束
    kActivityStatusBeginning = 2,//进行中
};

typedef NS_ENUM(NSInteger,UMCountType) {
    UMCountType100 = 100,//im登陆失败
    UMCountType10000 = 10000,//我的页面访问人数/次数
    UMCountType10002 = 10002,//趣物页面访问人数/次数
    UMCountType10003 = 10003,//发现页面访问人数/次数
    UMCountType10004 = 10004,//活动页面访问人数/次数
    UMCountType10005 = 10005,//小队页面访问人数/次数
    UMCountType10006 = 10006,//发布趣物成功人数/次数
    UMCountType10008 = 10008,//本人趣物分享人数
    UMCountType10009 = 10009,//他人趣物分享人数
    UMCountType10010 = 10010,//活动点击人数/次数
    UMCountType10011 = 10011,//活动趣物发布人数
    UMCountType10027 = 10027,//趣物-收藏点击人数/次数
    UMCountType10028 = 10028,//趣物-关注点击人数/次数
    UMCountType10029 = 10029,//趣物-观点点击人数/次数
    UMCountType10030 = 10030,//趣物-点赞点击人数/次数
    UMCountType10031 = 10031,//趣物-分享点击人数/次数
    UMCountType10032 = 10032,//趣物-信息点击人数/次数
    UMCountType10033 = 10033,//个人中心-关注
    UMCountType10034 = 10034,//个人中心-取消关注
    UMCountType99999 = 99999,//页面统计
    
    UMCountType218003 = 218003,//商城支付失败
    UMCountType220000 = 220000,//极光删除绑定失败
    UMCountType220001 = 220001,//绑定别名失败
    
    UMCountType20000 = 20000,//商城首页页面访问人数/次数
    UMCountType20001 = 20001,//商城分类页面访问人数/次数
    UMCountType20002 = 20002,//商城进货单页面访问人数/次数
    UMCountType20003 = 20003,//商城查看供应商上新页面访问人数/次数
    UMCountType20004 = 20004,//商城品牌好店页面访问人数/次数
    UMCountType20005 = 20005,//商城商品-收藏点击人数/次数
    UMCountType20006 = 20006,//商城商品选择购买规格点击人数/次数
    UMCountType20007 = 20007,//商城确认订单页面访问人数/次数
    UMCountType20008 = 20008,//商城供应商-收藏点击人数/次数
    UMCountType20009 = 20009,//商城商家公司简介页面访问人数/次数
    UMCountType20010 = 20010,//商城升级金纪官页面访问人数/次数
    UMCountType20011 = 20011,//商城邀请好友分享点击人数/次数
    UMCountType20012 = 20012,//商城邀请成为金纪官分享点击人数/次数
    UMCountType20013 = 20013,//商城商品详情页面
    UMCountType20014 = 20014,//商城搜索商品次数
    UMCountType20015 = 20015,//商城搜索店铺次数
    
};

#endif /* Goal_h */
