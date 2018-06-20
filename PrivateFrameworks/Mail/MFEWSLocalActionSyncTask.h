//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSTask.h>

#import "MFEWSGetNewMessageActionsOperationDelegate.h"
#import "MFEWSMessageActionSyncOperationDelegate.h"
#import "MFEWSPersistActionResultsOperationDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MFEWSLocalActionSyncTask : MFEWSTask <MFEWSGetNewMessageActionsOperationDelegate, MFEWSMessageActionSyncOperationDelegate, MFEWSPersistActionResultsOperationDelegate>
{
    NSMutableArray *_messageActions;
    NSMutableDictionary *_progressesByActionIDs;
    BOOL _actionOperationRunning;
    BOOL _needToCheckForActions;
    BOOL _needToPersistResults;
}

@property(nonatomic) BOOL needToPersistResults; // @synthesize needToPersistResults=_needToPersistResults;
@property(nonatomic) BOOL needToCheckForActions; // @synthesize needToCheckForActions=_needToCheckForActions;
@property(nonatomic) BOOL actionOperationRunning; // @synthesize actionOperationRunning=_actionOperationRunning;
- (void).cxx_destruct;
- (void)_createProgressForAction:(id)arg1;
- (void)persistActionResultsOperationCompleted:(id)arg1;
- (void)messageActionSyncOperationCompleted:(id)arg1;
- (void)getNewMessageActionsOperation:(id)arg1 didFetchActions:(id)arg2;
- (void)end;
- (id)nextPersistenceOperation;
- (id)nextNetworkOperation;
- (void)recalculatePriorities;
- (void)checkForNewMessageActions;
- (id)init;
- (id)initWithAccountName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

