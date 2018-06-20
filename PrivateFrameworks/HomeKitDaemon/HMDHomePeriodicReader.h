//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMDBackgroundTaskAgentTimer, HMDHome, NSObject<OS_dispatch_queue>, NSString;

@interface HMDHomePeriodicReader : HMFObject <HMFLogging>
{
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDBackgroundTaskAgentTimer *_btaReadTimer;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaReadTimer; // @synthesize btaReadTimer=_btaReadTimer;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (void)_startTimer;
- (void)_issueCharacteristicRequests:(id)arg1;
- (void)_checkToIssueRead;
- (void)checkToIssueRead;
- (void)startReadTimer;
- (id)_characteristicsToRead;
- (void)residentUpdated;
- (void)timerFired:(id)arg1;
- (void)handleCharacteristicBasedEventAdded:(id)arg1;
- (id)logIdentifier;
- (void)dealloc;
- (void)configure:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
