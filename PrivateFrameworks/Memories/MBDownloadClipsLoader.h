//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/MBClipsLoader.h>

#import "PHAssetRepresentationDownloadObserver.h"

@class NSMutableDictionary, NSRecursiveLock, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface MBDownloadClipsLoader : MBClipsLoader <PHAssetRepresentationDownloadObserver>
{
    NSSet *_assetURLs;
    NSSet *_insertedAssetURLs;
    NSMutableDictionary *_identifierURLsToClipsMap;
    NSRecursiveLock *_updateLock;
}

@property(retain, nonatomic) NSRecursiveLock *updateLock; // @synthesize updateLock=_updateLock;
@property(retain) NSMutableDictionary *identifierURLsToClipsMap; // @synthesize identifierURLsToClipsMap=_identifierURLsToClipsMap;
@property(retain, nonatomic) NSSet *insertedAssetURLs; // @synthesize insertedAssetURLs=_insertedAssetURLs;
@property(retain, nonatomic) NSSet *assetURLs; // @synthesize assetURLs=_assetURLs;
- (void).cxx_destruct;
- (void)loadClipsFromURLs:(id)arg1;
- (void)load;
- (id)fetchAssetURLs;
- (void)downloadStateOfAssetRepresentationDidChange:(id)arg1 previousState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

