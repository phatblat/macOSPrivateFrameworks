//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _CDStats : NSObject
{
}

+ (id)hardwareModel;
+ (id)sharedInstance;
- (void)addToDictionary:(id)arg1 perfMetric:(id)arg2;
- (void)addToDictionary:(id)arg1 perfMetricFamily:(id)arg2;
- (id)dictionary;
- (void)addToStatsPrinter:(id)arg1 perfMetricFamily:(id)arg2;
- (id)string;
- (void)dealloc;
- (id)init;

@end

