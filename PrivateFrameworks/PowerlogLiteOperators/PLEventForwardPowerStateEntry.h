//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLEntry.h"

@class NSArray;

@interface PLEventForwardPowerStateEntry : PLEntry
{
}

+ (id)entryKey;
+ (void)load;
@property(readonly) BOOL isBasebandWake;
@property(readonly) NSArray *reason;
@property(readonly) short event;
@property(readonly) short state;
- (id)initEntryWithIOMessage:(unsigned int)arg1;
- (id)initEntryWithState:(short)arg1 withEvent:(short)arg2 withReason:(id)arg3 withCurrentKernelWakeTime:(unsigned long long)arg4 withCapabilities:(unsigned int)arg5 withDate:(id)arg6;
- (id)initEntryWithState:(short)arg1 withEvent:(short)arg2 withReason:(id)arg3 withKernelSleepDate:(id)arg4 withDate:(id)arg5;
- (id)initEntryWithState:(short)arg1 withEvent:(short)arg2 withReason:(id)arg3 withDate:(id)arg4;

@end

