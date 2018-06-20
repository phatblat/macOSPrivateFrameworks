//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLEngineComponent.h"
#import "CPLNetworkWatcherDelegate.h"
#import "_CPLScheduledOverrideDelegate.h"

@class CPLEngineLibrary, CPLNetworkWatcher, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, _CPLScheduledOverrideDelegate, CPLEngineComponent>
{
    BOOL _closed;
    NSURL *_volumeURL;
    NSObject<OS_dispatch_queue> *_queue;
    CPLNetworkWatcher *_watcher;
    BOOL _modifyingBudgetOverride;
    unsigned long long _newBudgetsToOverride;
    unsigned long long _newBudgetsToStopOverriding;
    NSMutableDictionary *_reasonsToOverrideSystemBudget;
    NSMutableDictionary *_scheduledOverrides;
    CPLEngineLibrary *_engineLibrary;
}

+ (void)enumerateSystemBudgets:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)descriptionForBudgets:(unsigned long long)arg1;
+ (id)descriptionForBudget:(unsigned long long)arg1;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
- (void).cxx_destruct;
- (void)networkStateDidChangeForNetworkWatcher:(id)arg1;
- (void)scheduledOverrideDidEnd:(id)arg1;
@property(readonly) BOOL isDataBudgetOverriden;
- (void)stopOverridingSystemBudgetsForClient:(unsigned long long)arg1;
- (void)startOverridingSystemBudgetsForClient:(unsigned long long)arg1;
- (void)stopOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2;
- (void)startOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2;
- (void)_withSystemBudgetOverride:(CDUnknownBlockType)arg1;
- (void)_stopOverridingBudget:(unsigned long long)arg1 reason:(id)arg2;
- (void)_startOverridingBudget:(unsigned long long)arg1 reason:(id)arg2;
@property(readonly) BOOL isOnCellularOrUnknown;
@property(readonly) BOOL isNetworkConnected;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long freeDiskSpaceSize;
@property(readonly) unsigned long long diskPressureState;
- (id)componentName;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

