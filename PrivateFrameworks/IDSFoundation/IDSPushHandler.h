//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"

@class APSConnection, IMMacNotificationCenterManager, NSData, NSMapTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface IDSPushHandler : NSObject <APSConnectionDelegate>
{
    APSConnection *_apsConnection;
    NSData *_cachedPushToken;
    Class _APSConnectionClass;
    NSMutableSet *_topicsCache;
    NSMapTable *_handlerMap;
    IMMacNotificationCenterManager *_ncHandler;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    BOOL _shouldWaitToSetTopics;
}

+ (id)sharedInstanceWithPortName:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) Class APSConnectionClass; // @synthesize APSConnectionClass=_APSConnectionClass;
@property(nonatomic) BOOL shouldWaitToSetTopics; // @synthesize shouldWaitToSetTopics=_shouldWaitToSetTopics;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)configureAsMacNotificationCenterObserver:(id)arg1;
- (void)configureAsMacNotificationCenterObserver:(id)arg1 withPushToWakeTopics:(id)arg2;
@property(readonly, nonatomic) NSData *pushToken;
- (id)_apsConnectionPushToken;
- (void)setCommands:(id)arg1 forListener:(id)arg2;
- (void)setTopics:(id)arg1 forListener:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4;
- (void)_recalculateTopicsCacheOnIvarQueue;
- (void)_updateTopicsOnIvarQueue;
- (BOOL)_validateHandler:(id)arg1 withSelector:(SEL)arg2 topic:(id)arg3 command:(id)arg4;
@property(readonly, nonatomic) BOOL isConnected;
- (void)dealloc;
- (id)initWithPort:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

