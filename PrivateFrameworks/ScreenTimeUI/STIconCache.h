//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSImage, NSMutableSet, NSObject<OS_dispatch_queue>, NSURLSession;

__attribute__((visibility("hidden")))
@interface STIconCache : NSObject
{
    NSCache *_iconByKeyCache;
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSURLSession *_urlSession;
    NSMutableSet *_bundleIdentifiersWithPendingRequests;
}

+ (id)sharedCache;
@property(readonly, nonatomic) NSMutableSet *bundleIdentifiersWithPendingRequests; // @synthesize bundleIdentifiersWithPendingRequests=_bundleIdentifiersWithPendingRequests;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue; // @synthesize lookupQueue=_lookupQueue;
- (void).cxx_destruct;
- (void)_fetchFamilyPhotoWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_personImageWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 forceFetch:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchPersonImageWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 forceFetch:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)personImageWithDSID:(id)arg1 fullName:(id)arg2;
- (void)_updateCacheWithImage:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_updateCacheWithImage:(id)arg1 dsid:(id)arg2;
- (id)blankSpaceImageWithSize:(struct CGSize)arg1;
- (void)removeObserver:(id)arg1 bundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 bundleIdentifier:(id)arg3;
- (id)imageForCategoryIdentifier:(id)arg1;
- (void)_handleiTunesResponseForAppInfo:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4;
- (void)_fetchImageForAppInfoIfNeeded:(id)arg1;
- (id)imageForBundleIdentifier:(id)arg1;
@property(readonly) NSImage *imageForBlankApplicationIcon;
- (void)dealloc;
- (id)init;

@end
