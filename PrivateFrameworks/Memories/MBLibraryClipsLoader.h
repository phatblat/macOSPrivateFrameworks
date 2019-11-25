//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/MBClipsLoader.h>

#import "PHPhotoLibraryChangeObserver.h"

@class NSMutableDictionary, NSRecursiveLock, NSSet, NSString, PHAssetCollection, PHFetchResult;

__attribute__((visibility("hidden")))
@interface MBLibraryClipsLoader : MBClipsLoader <PHPhotoLibraryChangeObserver>
{
    PHAssetCollection *_assetCollection;
    NSMutableDictionary *_identifierURLsToClipsMap;
    NSSet *_insertedAssetURLs;
    NSSet *_assetURLs;
    PHFetchResult *_fetchResult;
    NSRecursiveLock *_updateLock;
}

@property(retain, nonatomic) NSRecursiveLock *updateLock; // @synthesize updateLock=_updateLock;
@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain) NSSet *assetURLs; // @synthesize assetURLs=_assetURLs;
@property(retain) NSSet *insertedAssetURLs; // @synthesize insertedAssetURLs=_insertedAssetURLs;
@property(retain) NSMutableDictionary *identifierURLsToClipsMap; // @synthesize identifierURLsToClipsMap=_identifierURLsToClipsMap;
@property(retain, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
- (void)addClipWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)clips;
- (long long)countForAllClips;
- (void)loadClipsFromURLs:(id)arg1;
- (void)load;
- (id)fetchAssetURLs;
- (id)fetchAssets;
- (void)photoLibraryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithAssetCollection:(id)arg1 showOnlyFavorites:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

