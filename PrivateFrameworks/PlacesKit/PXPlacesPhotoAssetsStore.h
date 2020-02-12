//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHPhotoLibraryChangeObserver.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, PHPhotoLibrary, PXPlacesStore;

@interface PXPlacesPhotoAssetsStore : NSObject <PHPhotoLibraryChangeObserver>
{
    BOOL _didInitiateLoad;
    BOOL _didCompleteLoad;
    NSArray *_fetchResults;
    PHPhotoLibrary *_photoLibrary;
    PXPlacesStore *_store;
    NSMutableArray *_completions;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(nonatomic) BOOL didCompleteLoad; // @synthesize didCompleteLoad=_didCompleteLoad;
@property(nonatomic) BOOL didInitiateLoad; // @synthesize didInitiateLoad=_didInitiateLoad;
@property(retain, nonatomic) PXPlacesStore *store; // @synthesize store=_store;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) NSArray *fetchResults; // @synthesize fetchResults=_fetchResults;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)arg1;
@property(readonly) id <PXPlacesGeotaggedItemDataSource> dataSource;
- (void)_addItems:(id)arg1 intoStore:(id)arg2;
- (void)_handleAssetsImport;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFetchResults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
