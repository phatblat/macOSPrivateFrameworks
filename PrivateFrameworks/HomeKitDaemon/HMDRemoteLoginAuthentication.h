//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMDDevice, HMDRemoteLoginMessageSender, NSObject<OS_dispatch_queue>, NSString;

@interface HMDRemoteLoginAuthentication : HMFObject <HMFLogging>
{
    NSString *_sessionID;
    HMDDevice *_remoteDevice;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDRemoteLoginMessageSender *_remoteMessageSender;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)authenticate;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

