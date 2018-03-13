//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSProgress, NSString, PMRActivity;

@interface RDLibraryUpgraderLogger : NSObject
{
    NSString *_name;
    NSDate *_date;
    NSString *_key;
    PMRActivity *_activity;
    struct {
        double virtualSize;
        double residentSize;
        double residentSizeMax;
    } _memoryInfo;
    NSProgress *_progress;
}

+ (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4;
+ (void)tearDown;
+ (void)setup;
- (void).cxx_destruct;
- (void)stop;
- (id)memoryUsage;
- (id)initWithName:(id)arg1 PMRKey:(id)arg2 progress:(id)arg3;

@end

