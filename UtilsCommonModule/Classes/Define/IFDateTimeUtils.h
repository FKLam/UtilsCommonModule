//
//  IFDateTimeUtils.h
//  Pods
//
//  Created by infun on 2018/10/8.
//

#import <Foundation/Foundation.h>

@interface IFDateTimeUtils : NSObject

+ (instancetype)sharedInstance;

- (void)updateServerTime:(long long)timestamp;

@end
