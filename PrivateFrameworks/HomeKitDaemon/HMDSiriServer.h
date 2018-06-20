//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDDataStreamBulkSendListener.h"
#import "HMDSiriSessionDelegate.h"
#import "HMFLogging.h"

@class HMDNotificationRegistration, HMDSiriRemoteInputServer, HMDSiriServerSessionInfo, HMDSiriSession, NSObject<OS_dispatch_queue>, NSString;

@interface HMDSiriServer : NSObject <HMDDataStreamBulkSendListener, HMDSiriSessionDelegate, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_queue;
    HMDNotificationRegistration *_notificationRegistration;
    HMDSiriRemoteInputServer *_siriInputServer;
    HMDSiriSession *_siriUISession;
    HMDSiriServerSessionInfo *_activeSiriUISessionInfo;
}

+ (id)logCategory;
+ (id)sharedSiriServer;
@property(retain, nonatomic) HMDSiriServerSessionInfo *activeSiriUISessionInfo; // @synthesize activeSiriUISessionInfo=_activeSiriUISessionInfo;
@property(retain, nonatomic) HMDSiriSession *siriUISession; // @synthesize siriUISession=_siriUISession;
@property(retain, nonatomic) HMDSiriRemoteInputServer *siriInputServer; // @synthesize siriInputServer=_siriInputServer;
@property(readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)siriSession:(id)arg1 willStartAudioWithCompletion:(CDUnknownBlockType)arg2;
- (void)siriSession:(id)arg1 didStopAudioWithCompletion:(CDUnknownBlockType)arg2;
- (void)_startAudioStreamForSiriSession:(id)arg1 sessionInfo:(id)arg2;
- (void)accessoryDidCloseDataStream:(id)arg1;
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2;
- (void)_removeSiriSession:(id)arg1 sessionInfo:(id)arg2;
- (id)_getSessionInfoForSiriSession:(id)arg1;
- (void)_siriSessionPluginDidStop:(id)arg1 sessionInfo:(id)arg2;
- (void)_siriSessionDidReceiveAllAudio:(id)arg1 sessionInfo:(id)arg2;
- (void)_siriSession:(id)arg1 sendDidFailWithReason:(unsigned char)arg2 sessionInfo:(id)arg3;
- (void)_siriSession:(id)arg1 bulkSendDidFail:(id)arg2 sessionInfo:(id)arg3;
- (BOOL)_siriSession:(id)arg1 didReceiveFrame:(id)arg2 sessionInfo:(id)arg3;
- (void)_stopSiriUI;
- (BOOL)_startSiriUI;
- (void)_setupSiriUIContext;
- (void)_setupSiriPlugin;
- (void)handleAccessoryHasBulkSendDataStream:(id)arg1;
- (void)registerForMessages;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
