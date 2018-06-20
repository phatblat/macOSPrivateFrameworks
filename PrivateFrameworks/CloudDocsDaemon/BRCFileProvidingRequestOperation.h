//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import "BRCDownloadTracking.h"
#import "BRCOperationSubclass.h"
#import "BRCReachabilityDelegate.h"

@class BRCAccountSession, BRCDirectoryItem, BRCTreeEnumerator, BRCXPCClient, NSError, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCOperationSubclass>
{
    BRCAccountSession *_session;
    BRCXPCClient *_client;
    NSURL *_url;
    BRCDirectoryItem *_directoryItem;
    BRCTreeEnumerator *_treeEnumerator;
    NSMutableSet *_trackedDocIDs;
    NSSet *_docIDsToCancel;
    NSMutableArray *_callbacks;
    NSError *_lastDownloadError;
    BOOL _isStillEnumeratingDirectory;
    BOOL _isFinished;
    BOOL _isMonitoringReachability;
    NSMutableSet *_appLibrariesMonitored;
    BOOL _isRecursive;
    BOOL _isForBackup;
    BOOL _wantsCurrentVersion;
}

@property(nonatomic) BOOL wantsCurrentVersion; // @synthesize wantsCurrentVersion=_wantsCurrentVersion;
@property(nonatomic) BOOL isForBackup; // @synthesize isForBackup=_isForBackup;
@property(nonatomic) BOOL isRecursive; // @synthesize isRecursive=_isRecursive;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)_finishAfterWaitingForDocumentsWithID:(id)arg1 error:(id)arg2;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (void)main;
- (void)_provideItem;
- (void)_provideURL;
- (void)_provideDirectoryRecursively:(id)arg1;
- (void)_provideDocument:(id)arg1;
- (void)downloadTrackedForItemWithDocID:(id)arg1 didFinishWithError:(id)arg2;
- (void)_detachAllTrackedDocID:(id)arg1 error:(id)arg2;
- (void)cancel;
- (id)initWithDirectoryItem:(id)arg1;
- (id)initWithURL:(id)arg1 readingOptions:(unsigned long long)arg2 client:(id)arg3 session:(id)arg4;
- (id)initWithName:(id)arg1 session:(id)arg2 readingOptions:(unsigned long long)arg3;
@property(readonly, nonatomic) NSSet *trackedDocIDs;
- (void)addCompletionCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

