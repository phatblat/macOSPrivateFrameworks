//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSLocale, WFAirQualityConditions, WFLocation;

@protocol WFAirQualityDataParser <NSObject>
+ (WFAirQualityConditions *)parseAirQualityData:(NSData *)arg1 location:(WFLocation *)arg2 locale:(NSLocale *)arg3 error:(id *)arg4;
@end
