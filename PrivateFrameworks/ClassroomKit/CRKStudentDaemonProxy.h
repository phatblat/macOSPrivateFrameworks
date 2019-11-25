//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CATTaskClientDelegate.h"
#import "CRKRequestPerformingProtocol.h"

@class CATOperationQueue, CATTaskClient, NSHashTable, NSString;

@interface CRKStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol>
{
    CATTaskClient *mTaskClient;
    CATOperationQueue *mOperationQueue;
    NSHashTable *mObservers;
    long long mConnectionAttempt;
    BOOL mConnecting;
    BOOL _connected;
    BOOL _userExpectsReconnect;
    long long _maxConnectionAttempts;
}

+ (void)fetchResourceFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)studentDidAuthenticate:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)setActiveStudentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)studentDaemonConnection;
@property(nonatomic) BOOL userExpectsReconnect; // @synthesize userExpectsReconnect=_userExpectsReconnect;
@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property(nonatomic) long long maxConnectionAttempts; // @synthesize maxConnectionAttempts=_maxConnectionAttempts;
- (void).cxx_destruct;
- (void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)clientDidDisconnect:(id)arg1;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidConnect:(id)arg1;
- (void)enqueueOperation:(id)arg1;
- (id)enqueuedOperationForRequest:(id)arg1;
- (id)operationForRequest:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)disconnect;
- (void)connect;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

