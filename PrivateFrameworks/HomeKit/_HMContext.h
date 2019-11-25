//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDelegateCaller, HMFMessageDispatcher, HMPendingRequests, HMXPCClient, NSObject<OS_dispatch_queue>, NSString;

@interface _HMContext : NSObject
{
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    HMPendingRequests *_pendingRequests;
    HMDelegateCaller *_delegateCaller;
    HMFMessageDispatcher *_messageDispatcher;
}

+ (id)contextWithName:(id)arg1 delegateCaller:(id)arg2;
+ (id)contextWithName:(id)arg1;
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(readonly, nonatomic) HMPendingRequests *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMXPCClient *messageTransport;
- (id)subcontextWithName:(id)arg1;
- (id)initWithName:(id)arg1 pendingRequests:(id)arg2 delegateCaller:(id)arg3 messageDispatcher:(id)arg4;
- (id)init;

@end

