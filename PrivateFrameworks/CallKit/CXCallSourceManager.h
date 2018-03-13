//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CXCallSourceDelegate.h"
#import "CXTransactionManagerDelegate.h"
#import "NSXPCListenerDelegate.h"

@class CXTransactionGroup, CXTransactionManager, NSArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface CXCallSourceManager : NSObject <NSXPCListenerDelegate, CXCallSourceDelegate, CXTransactionManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallSourceManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSXPCListener *_xpcListener;
    NSMutableSet *_mutableCallSources;
    CXTransactionGroup *_uncommittedTransactionGroup;
    CXTransactionManager *_transactionManager;
}

@property(retain, nonatomic) CXTransactionManager *transactionManager; // @synthesize transactionManager=_transactionManager;
@property(retain, nonatomic) CXTransactionGroup *uncommittedTransactionGroup; // @synthesize uncommittedTransactionGroup=_uncommittedTransactionGroup;
@property(retain, nonatomic) NSMutableSet *mutableCallSources; // @synthesize mutableCallSources=_mutableCallSources;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXCallSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)transactionManager:(id)arg1 transactionGroupCompleted:(id)arg2;
- (void)transactionManager:(id)arg1 actionTimedOut:(id)arg2 forCallSource:(id)arg3;
- (void)callSource:(id)arg1 actionCompleted:(id)arg2;
- (void)callSource:(id)arg1 requestedTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 crossDeviceIdentifier:(id)arg3 changedBytesOfDataUsed:(long long)arg4;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedFrequencyData:(id)arg3 forDirection:(long long)arg4;
- (void)callSource:(id)arg1 reportedAudioFinishedForCallWithUUID:(id)arg2;
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 connectedAtDate:(id)arg3;
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 sentInvitationAtDate:(id)arg3;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 endedAtDate:(id)arg3 privateReason:(long long)arg4 failureContext:(id)arg5;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 updated:(id)arg3;
- (void)callSource:(id)arg1 reportedNewIncomingCallWithUUID:(id)arg2 update:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)callSource:(id)arg1 registeredWithConfiguration:(id)arg2;
- (void)callSourceInvalidated:(id)arg1;
- (void)callSourceConnectionEnded:(id)arg1;
- (void)callSourceConnectionStarted:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)failOutstandingActionsForCallWithUUID:(id)arg1;
- (void)commitUncommittedTransactions;
- (void)addAction:(id)arg1 toUncommittedTransactionForCallSource:(id)arg2;
- (void)commitTransaction:(id)arg1 toCallSource:(id)arg2;
- (void)removeCallSource:(id)arg1;
- (void)addCallSource:(id)arg1;
- (id)callSourceWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *callSources;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

