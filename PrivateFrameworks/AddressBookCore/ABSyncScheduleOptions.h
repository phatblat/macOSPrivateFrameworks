//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ABSyncScheduleOptions : NSObject
{
    unsigned long long _retryCount;
    BOOL _standby;
    BOOL _resetStandby;
    BOOL _clearify;
}

@property BOOL clearify; // @synthesize clearify=_clearify;
@property BOOL resetStandby; // @synthesize resetStandby=_resetStandby;
@property BOOL standby; // @synthesize standby=_standby;
@property unsigned long long retryCount; // @synthesize retryCount=_retryCount;
- (id)commandArguments;
- (void)dealloc;
- (id)init;

@end

