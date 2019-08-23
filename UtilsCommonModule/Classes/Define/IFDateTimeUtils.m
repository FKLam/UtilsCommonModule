//
//  IFDateTimeUtils.m
//  Pods
//
//  Created by infun on 2018/10/8.
//

#import "IFDateTimeUtils.h"

@interface IFDateTimeUtils()
@property (nonatomic, assign) NSTimeInterval timeIntevalDifference;//时间差异
@end

@implementation IFDateTimeUtils

+ (instancetype)sharedInstance
{
    static IFDateTimeUtils *utilsInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        utilsInstance = [[IFDateTimeUtils alloc] init];
        utilsInstance.timeIntevalDifference = 0.0f;
    });
    return utilsInstance;
}

- (void)updateServerTime:(long long)timestamp
{
    NSTimeInterval timeInteval = timestamp / 1000.0 - [[NSDate date] timeIntervalSince1970];
    NSLog(@"时间戳差异 === timeInteval  == %lf",timeInteval);
    [IFDateTimeUtils sharedInstance].timeIntevalDifference = timeInteval;
}

+ (NSDate*)currentTime
{
     NSDate *serverDate = [NSDate dateWithTimeIntervalSinceNow:[IFDateTimeUtils sharedInstance].timeIntevalDifference];
    return serverDate;
}

+ (long long)currentTimeStamp
{
    
    NSTimeInterval localTime = [[NSDate date] timeIntervalSince1970];
    
    NSTimeInterval timeDifference = [IFDateTimeUtils sharedInstance].timeIntevalDifference;
    

    return (long long)((localTime+ timeDifference) * 1000);
    
}

@end
