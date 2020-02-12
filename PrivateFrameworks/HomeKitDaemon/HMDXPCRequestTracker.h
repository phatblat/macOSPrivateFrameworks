//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFTimerDelegate.h"

@class HMFTimer, NSMutableDictionary, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface HMDXPCRequestTracker : HMFObject <HMFTimerDelegate>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMFTimer *_timer;
    NSString *_clientName;
    NSObject<OS_dispatch_group> *_activeMessageTracker;
    NSMutableDictionary *_pendingRequests;
}

@property(readonly, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *activeMessageTracker; // @synthesize activeMessageTracker=_activeMessageTracker;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)clear;
- (void)setClientName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy) NSSet *requestIdentifiers;
- (BOOL)containsMessageWithIdentifier:(id)arg1;
- (void)removeRequestWithIdentifier:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)addRequestWithIdentifier:(id)arg1 messageName:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)__sendReponseForRequest:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)initWithGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

