//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLPhotoLibraryBundle.h>

#import "NSFilePresenter.h"

@class NSOperationQueue, NSSet, NSString, NSURL, PLBackgroundJobService;

@interface PLServerPhotoLibraryBundle : PLPhotoLibraryBundle <NSFilePresenter>
{
    Class _libraryServicesDelegateClass;
    PLBackgroundJobService *_backgroundJobService;
    NSOperationQueue *_presentedItemOperationQueue;
}

- (void).cxx_destruct;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (BOOL)shouldRelinquishToWriterOfSubitemAtURL:(id)arg1;
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)unbindAssetsdService:(id)arg1;
- (BOOL)bindAssetsdService:(id)arg1 error:(id *)arg2;
- (id)boundAssetsdServices;
- (void)shutdownWithReason:(id)arg1;
- (void)clearShutdownReason;
- (void)invalidateClientConnectionsWithReason:(id)arg1;
- (void)close;
- (id)newBoundAssetsdServicesTable;
- (id)newLibraryServicesManager;
- (id)newChangePublisher;
- (id)newAssetsdClient;
- (id)initWithLibraryURL:(id)arg1 bundleController:(id)arg2 backgroundJobService:(id)arg3 libraryServicesDelegateClass:(Class)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end
