//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFilePresenter.h"

@class BrowserWindowController, DownloadFile, DownloadFileUnarchiver, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSProgress, NSSet, NSString, NSTimer, NSURL, NSURLDownload, NSURLRequest, NSURLResponse, WBSCoalescedAsynchronousWriter;

__attribute__((visibility("hidden")))
@interface DownloadProgressEntry : NSObject <NSFilePresenter>
{
    NSURL *_URL;
    long long _bytesLoaded;
    long long _lastReportedBytesLoaded;
    long long _bytesExpected;
    NSError *_error;
    BOOL _done;
    struct Download _wkDownload;
    NSURLRequest *_request;
    NSURLResponse *_response;
    DownloadFile *_downloadFile;
    NSMutableArray *_postDownloadFiles;
    NSMutableDictionary *_depthForNestedArchive;
    NSString *_identifier;
    NSDictionary *_resumeInformation;
    NSURLDownload *_download;
    DownloadFileUnarchiver *_fileUnarchiver;
    WBSCoalescedAsynchronousWriter *_plistWriter;
    NSDate *_startDate;
    BOOL _openWhenDone;
    BOOL _allowOverwrite;
    BOOL _shouldAvoidPersistingIdentifyingInformation;
    BOOL _observingWidgetInstallationNotification;
    int _downloadStage;
    long long _bytesLoadedAtStart;
    int _iconNumber;
    long long _lastBytesPerSecond;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> m_suddenTerminationDisabler;
    NSProgress *_progress;
    float _lastSavedFractionCompleted;
    struct CGPoint _hopOriginPoint;
    BrowserWindowController *_hopOriginWindowController;
    BOOL _observingFileLocation;
    NSObject<OS_dispatch_queue> *_cachedBundlePathAccessQueue;
    NSTimer *_reportUpdatedProgressTimer;
    id <SandboxExtensionToken> _sandboxTokenForContainingDirectory;
    NSObject<OS_dispatch_queue> *_downloadSandboxTokenQueue;
    BOOL _shouldUseRequestURLAsOriginURLIfNecessary;
    BOOL _didShowStorageManagerUI;
    NSArray *_tags;
    NSDate *_dateAdded;
    NSDate *_dateFinished;
    NSString *_directoryPath;
    id <DownloadProgressEntryDelegate> _delegate;
    id <WebDownloadDelegate> _webDownloadDelegate;
    NSString *_cachedBundlePath;
}

@property(copy, nonatomic) NSString *cachedBundlePath; // @synthesize cachedBundlePath=_cachedBundlePath;
@property(nonatomic) __weak id <WebDownloadDelegate> webDownloadDelegate; // @synthesize webDownloadDelegate=_webDownloadDelegate;
@property(nonatomic) __weak id <DownloadProgressEntryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL didShowStorageManagerUI; // @synthesize didShowStorageManagerUI=_didShowStorageManagerUI;
@property(nonatomic) BOOL shouldUseRequestURLAsOriginURLIfNecessary; // @synthesize shouldUseRequestURLAsOriginURLIfNecessary=_shouldUseRequestURLAsOriginURLIfNecessary;
@property(retain, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(readonly, nonatomic) NSDate *dateFinished; // @synthesize dateFinished=_dateFinished;
@property(readonly, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_stopObservingFileLocation;
- (void)_startObservingFileLocation;
- (void)_browserWindowWillClose:(id)arg1;
- (void)_clearHopOrigin;
- (void)_markDownloadBundleAsInProgress;
- (void)_markDownloadBundleAsInProgressIfNeeded;
- (void)_updateFractionCompletedExtendedAttributeIfNeededForPath:(id)arg1 minimumChange:(float)arg2;
- (void)_stopReportingProgress;
- (void)_startReportingProgress;
- (void)_reportUpdatedProgress;
- (void)_setProgressFileURL:(id)arg1;
- (void)_startPostProcessingIfDone;
- (void)_initializeResumeInformationForDownload;
- (void)_endWithPostDownloadError:(id)arg1;
- (id)_createDownloadBundleInDirectory:(id)arg1 withFilename:(id)arg2;
- (void)_obtainSandboxExtensionTokenForContainingDirectoryOfDownloadAtURL:(id)arg1;
- (id)_extensionTokenForContainingDirectoryOfDownloadAtURL:(id)arg1;
- (unsigned long long)_requiredAdditionalSpaceAtDirectoryPath:(id)arg1;
- (unsigned long long)_fileSystemFreeSizeAtDirectoryPath:(id)arg1;
- (BOOL)_notEnoughFreeDiskSpaceAtDirectoryPath:(id)arg1;
- (void)_setDownloadStage:(int)arg1 shouldSendNotifications:(BOOL)arg2;
- (void)_setStartDate:(id)arg1;
- (void)_setDownload:(id)arg1;
- (void)dealloc;
- (void)_forgetAllFiles;
- (void)_forgetAllPostDownloadFiles;
- (void)_forgetPostDownloadFile:(id)arg1;
- (id)_canceledError;
- (BOOL)_canFinishDownloadWithoutReloading;
- (void)_addPostDownloadFileWithPath:(id)arg1;
- (void)_addUnarchivedFiles:(id)arg1;
- (void)_addPostDownloadFiles:(id)arg1;
- (void)_saveStateToPListInBundle:(id)arg1;
- (id)_legalFilenameForDirectoryPath:(id)arg1 filename:(id)arg2;
- (id)_threadSafeCachedBundlePath;
- (void)_updateCachedBundlePath;
- (id)_bundlePath;
- (id)_downloadPath;
- (BOOL)_hasAnyFiles;
- (void)_postPathDidChangeNotification;
- (id)_allFiles;
- (void)_updatePath:(id)arg1 ofFile:(id)arg2;
- (id)_postDownloadPath;
- (id)_postDownloadFile;
- (void)_autoOpenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_moveFilesFromBundleWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_replaceExistingFile:(id)arg1 atURL:(id)arg2 withFileAtURL:(id)arg3 tags:(id)arg4;
- (BOOL)_open;
- (int)_openArchive;
- (BOOL)_addCertificateToKeyChain;
- (void)presentedItemDidMoveToURL:(id)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)setHopOriginPoint:(struct CGPoint)arg1 inWindowController:(id)arg2;
- (void)setDone:(BOOL)arg1;
- (unsigned long long)requiredAdditionalSpaceAtCurrentPath;
- (BOOL)notEnoughFreeDiskSpaceAtCurrentPath;
- (void)setDownloadStage:(int)arg1;
- (int)downloadStage;
- (long long)secondsRemaining;
- (long long)bytesPerSecond;
- (long long)bytesLoadedSinceStart;
- (long long)bytesExpected;
- (id)statusString;
- (id)busyStatus;
- (void)setError:(id)arg1;
- (void)setBytesExpected:(long long)arg1;
- (void)setBytesLoaded:(long long)arg1;
- (void)_reportUpdatedProgressNow;
- (void)_reportUpdatedProgressTimerFired:(id)arg1;
- (void)_reportUpdatedProgressSoon;
- (void)_cancelReportUpdatedProgressTimer;
- (BOOL)isBusy;
- (BOOL)isIdle;
- (BOOL)canResumeOrReload;
- (BOOL)canStop;
- (BOOL)canAttemptReveal;
- (BOOL)canAttemptResume;
- (BOOL)canAttemptOpen;
- (BOOL)allowOverwrite;
- (void)stop;
- (BOOL)reveal;
- (void)resume;
- (BOOL)open;
@property(readonly, copy, nonatomic) NSString *pathExtension;
- (id)filename;
- (id)currentPath;
- (BOOL)fileExists;
- (BOOL)aliasFileExists;
- (const struct Download *)wkDownload;
- (id)download;
- (id)error;
- (long long)bytesLoaded;
- (id)URL;
- (void)setResponse:(id)arg1 bytesLoaded:(long long)arg2;
- (void)setDownloadFileWithPath:(id)arg1 isUsingSavePanel:(BOOL)arg2;
- (void)setDownloadFileWithPath:(id)arg1;
- (void)_setDownloadFileWithPath:(id)arg1;
- (void)willRemove;
- (void)savePendingChangesBeforeTermination;
- (void)saveInitialStateToPList;
- (id)identifier;
- (id)downloadFile;
@property(readonly, nonatomic) BOOL shouldPromptForDownloadPath;
- (id)dictionaryRepresentation;
- (id)currentFile;
- (id)createDownloadBundleWithFilename:(id)arg1;
- (id)initWithDownload:(id)arg1 mayOpenWhenDone:(BOOL)arg2 allowOverwrite:(BOOL)arg3 shouldAvoidPersistingIdentifyingInformation:(BOOL)arg4;
- (id)initWithWKDownload:(const struct Download *)arg1 mayOpenWhenDone:(BOOL)arg2 allowOverwrite:(BOOL)arg3 shouldAvoidPersistingIdentifyingInformation:(BOOL)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)_initWithRequest:(id)arg1 bytesLoaded:(long long)arg2 bytesExpected:(long long)arg3 error:(id)arg4 download:(id)arg5 downloadFile:(id)arg6 postDownloadFile:(id)arg7 downloadStage:(int)arg8 identifier:(id)arg9 mayOpenWhenDone:(BOOL)arg10 allowOverwrite:(BOOL)arg11 shouldAvoidPersistingIdentifyingInformation:(BOOL)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end
