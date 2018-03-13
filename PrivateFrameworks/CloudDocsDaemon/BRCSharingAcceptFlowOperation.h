//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import "BRCForegroundClient.h"
#import "BRCOperationSubclass.h"
#import "LSOpenResourceOperationDelegate.h"

@class BRCAccountSession, BRCAppLibrary, BRCClientZone, BRCItemID, BRCXPCClient, CKRecordID, CKShare, CKShareMetadata, NSArray, NSObject<OS_dispatch_queue>, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BRCSharingAcceptFlowOperation : _BRCOperation <LSOpenResourceOperationDelegate, BRCForegroundClient, BRCOperationSubclass>
{
    id <BRCUserNotifier> _userNotification;
    BRCAccountSession *_session;
    NSArray *_acceptationFlow;
    unsigned long long _stepIndex;
    NSURL *_shareURL;
    CKRecordID *_shareID;
    CKShareMetadata *_shareMetadata;
    CKShare *_share;
    BRCItemID *_sharedItemID;
    NSString *_unsaltedBookmarkData;
    BRCClientZone *_clientZone;
    BRCAppLibrary *_appLibrary;
    BOOL _needsZoneAndAppLibraryActivation;
    NSURL *_shareDocumentURL;
    NSString *_documentName;
    NSURL *_appBundleURL;
    BRCXPCClient *_xpcClient;
    BOOL _shouldWaitUntilDownloadCompletion;
    BOOL _hasAlreadyDocumentOpened;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)_openShareURLInWebBrowser:(id)arg1 withReason:(id)arg2;
+ (id)_runningShareIDs;
+ (Class)userNotificationClass;
- (void).cxx_destruct;
- (void)_endAcceptationFlow;
- (void)_openSharedItemIfStillNeeded;
- (void)_prepareToDownloadSharedDocument;
- (void)_locateSharedItemOnDisk;
- (void)_waitForSharedItemToBeOnDiskOnRecipient;
- (void)_waitForSharedItemToSyncDownOnRecipient;
- (void)_acceptShareURL;
- (void)_openSharedSideFaultFile;
- (void)_checkIfShouldWaitUntilDownloadCompletion;
- (void)_createSideFaultOnDisk;
- (void)_waitForSharedItemToBeOnDiskOnOwner;
- (void)_waitForSharedItemToSyncDownOnOwner;
- (void)_openiWorkAppPreemptively;
- (void)_parseShareMetadata;
- (void)_showSharingJoinDialog;
- (void)_isAccountRestricted;
- (void)_isUserSignedInToiCloudDrive;
- (void)_isAppInstalled;
- (void)_isURLWellFormed;
- (void)_isFolderSharingSupported;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperationDidComplete:(id)arg1;
- (void)_activateSharedZoneIfNeeded;
- (BOOL)_openSharedItemAtURL:(id)arg1 error:(id *)arg2;
- (void)_captureOpenInfoFromDocument:(id)arg1;
- (BOOL)_isiWorkShare;
- (BOOL)_isFolderShare;
- (BOOL)_isOwnerOrShareAlreadyAccepted;
- (BOOL)_isOwner;
- (void)_showGenericErrorAndFinish:(id)arg1;
- (void)_jumpToSelector:(SEL)arg1;
- (void)_jumpToSelectorInQueue:(SEL)arg1;
- (void)_performNextStep;
- (void)_performNextStepInQueue;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)subclassableDescriptionWithContext:(id)arg1;
- (id)_stepNameAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2;
- (BOOL)shouldRetryForError:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)createActivity;
- (void)moveDialogToFront;
- (id)initWithShareMetadata:(id)arg1 client:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

