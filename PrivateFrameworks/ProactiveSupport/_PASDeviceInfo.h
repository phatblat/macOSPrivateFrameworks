//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _PASDeviceInfo : NSObject
{
    int _batterySaverModeToken;
}

+ (BOOL)shouldIncludePredictionLogs;
+ (BOOL)isBetaBuild;
+ (BOOL)isInternalBuild;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isBatterySaverEnabled;
+ (BOOL)isLowEndHardware;
+ (id)sharedInstance;
- (void)dealloc;
- (id)init;

@end

