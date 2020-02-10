//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXSDataConsumerDelegate.h"

@class EXSAccount, EXSDataConsumerPlugin, EXSDataManager, NSObject<EXSDataConsumerInstanceDelegate>, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSString;

@interface EXSDataConsumerInstance : NSObject <EXSDataConsumerDelegate>
{
    BOOL _isRunning;
    id <EXSDataConsumer> _dataConsumer;
    EXSDataConsumerPlugin *_plugin;
    EXSAccount *_account;
    EXSDataManager *_dataManager;
    NSObject<EXSDataConsumerInstanceDelegate> *_delegate;
    NSObject<OS_os_log> *_log;
    NSString *_logCategory;
    NSObject<OS_dispatch_queue> *_dispatchWorkloop;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *dispatchWorkloop; // @synthesize dispatchWorkloop=_dispatchWorkloop;
@property(retain, nonatomic) NSString *logCategory; // @synthesize logCategory=_logCategory;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(nonatomic) __weak NSObject<EXSDataConsumerInstanceDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak EXSDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(readonly, nonatomic) __weak EXSAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) __weak EXSDataConsumerPlugin *plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) id <EXSDataConsumer> dataConsumer; // @synthesize dataConsumer=_dataConsumer;
- (void).cxx_destruct;
- (BOOL)waitForConsumerToBeReady;
- (void)shutdownInstance;
- (void)startupInstance;
- (void)dispatchOnWorkQueue:(CDUnknownBlockType)arg1;
- (void)dataConsumer:(id)arg1 hasItemChangesInFolder:(id)arg2;
- (void)dataConsumerHasFolderChanges:(id)arg1;
- (void)dataConsumerNeedsSync:(id)arg1;
- (void)processOutstandingChangeItems;
- (void)processChangesSinceLastSync;
- (void)checkSourceIntegrity;
- (void)accountRemoved;
- (void)accountChanged;
- (void)accountAdded;
- (void)shutdown;
- (void)startup;
- (id)initWithHandler:(id)arg1 forAccount:(id)arg2 withDataManager:(id)arg3 dispatchWorkloop:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
