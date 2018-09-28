//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface MSAssetDownloadScheduler : NSObject
{
    NSString *_identifier;
    NSString *_lastFailureIntervalKey;
    CDUnknownBlockType _handler;
    long long _regularInterval;
    long long _failureInterval;
    long long _backOffFactor;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue;
@property(nonatomic) long long _backOffFactor; // @synthesize _backOffFactor;
@property(nonatomic) long long _failureInterval; // @synthesize _failureInterval;
@property(nonatomic) long long _regularInterval; // @synthesize _regularInterval;
@property(copy, nonatomic) CDUnknownBlockType _handler; // @synthesize _handler;
@property(copy, nonatomic) NSString *_lastFailureIntervalKey; // @synthesize _lastFailureIntervalKey;
@property(copy, nonatomic) NSString *_identifier; // @synthesize _identifier;
- (void).cxx_destruct;
- (long long)_nextFailureInterval;
- (void)_registerXPCActivity;
- (id)_xpcCriteriaForInterval:(long long)arg1;
- (void)_stopSchedulingActivity:(id)arg1;
- (void)_rescheduleAfterFailureActivity:(id)arg1;
- (void)_rescheduleAfterSuccessActivity:(id)arg1;
- (id)initWithIdentifier:(id)arg1 regularInterval:(long long)arg2 failureInterval:(long long)arg3 backOffFactor:(long long)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

