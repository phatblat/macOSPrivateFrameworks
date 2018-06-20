//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFTimerDelegate.h"

@class HAPWACScanFilter, HMFTimer, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface HAPWACScanInstance : HMFObject <HMFTimerDelegate>
{
    BOOL _shouldContinueScan;
    BOOL _waitingForScanResults;
    HAPWACScanFilter *_scanFilter;
    HMFTimer *_scanRepeatTimer;
    double _scanInterval;
    NSObject<OS_dispatch_semaphore> *_scanStopSemaphore;
    unsigned long long _filterMethod;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _ageOut;
}

@property(nonatomic) BOOL waitingForScanResults; // @synthesize waitingForScanResults=_waitingForScanResults;
@property(nonatomic) unsigned long long ageOut; // @synthesize ageOut=_ageOut;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long filterMethod; // @synthesize filterMethod=_filterMethod;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *scanStopSemaphore; // @synthesize scanStopSemaphore=_scanStopSemaphore;
@property(nonatomic) double scanInterval; // @synthesize scanInterval=_scanInterval;
@property(retain, nonatomic) HMFTimer *scanRepeatTimer; // @synthesize scanRepeatTimer=_scanRepeatTimer;
@property(nonatomic) BOOL shouldContinueScan; // @synthesize shouldContinueScan=_shouldContinueScan;
@property(retain, nonatomic) HAPWACScanFilter *scanFilter; // @synthesize scanFilter=_scanFilter;
- (void).cxx_destruct;
- (void)_addScanRequest;
- (void)timerDidFire:(id)arg1;
- (void)_handleAgeOutChange;
- (void)stopWACScan;
- (void)startWACScan;
- (void)dealloc;
- (id)initWithFilter:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
