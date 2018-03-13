//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "PHPhotoLibraryChangeObserver.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString, PHAManager, PHFetchResult;

@interface PHALibraryChangeListener : NSOperation <PHPhotoLibraryChangeObserver>
{
    PHAManager *_photoAnalysisManager;
    NSObject<OS_dispatch_queue> *_changeObservationQueue;
    NSHashTable *_changeObservers;
    PHFetchResult *_momentFetchResult;
    PHFetchResult *_personsFetchResult;
}

- (void).cxx_destruct;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)_publishRawChange:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (id)personsChangeDetailsForChanges:(id)arg1;
- (id)momentChangeDetailsForChanges:(id)arg1;
- (id)libraryChangeDetailsForFetchResult:(id *)arg1 changes:(id)arg2;
- (void)beginListeningForChanges;
- (id)initWithPhotoAnalysisManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

