//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<RDLibrarySearchResultChangeDelegate>, RDAlbum, RDDatabase, RDLibrarySearch, RDMemory;

@interface RDLibrarySearchResult : NSObject
{
    NSMutableArray *_assets;
    NSArray *_immutableAssetsCache;
    struct _opaque_pthread_mutex_t _assetsLock;
    unsigned long long _cachedHash;
    BOOL _reported;
    BOOL _containsSceneResults;
    NSArray *_userTokens;
    NSArray *_categoryData;
    RDAlbum *_album;
    RDMemory *_memory;
    NSObject<RDLibrarySearchResultChangeDelegate> *_delegate;
    RDLibrarySearch *_sourceSearch;
    RDDatabase *_database;
}

+ (id)matchTypeDescription:(int)arg1;
@property(readonly) BOOL containsSceneResults; // @synthesize containsSceneResults=_containsSceneResults;
@property(readonly) RDDatabase *database; // @synthesize database=_database;
@property(readonly) __weak RDLibrarySearch *sourceSearch; // @synthesize sourceSearch=_sourceSearch;
@property BOOL reported; // @synthesize reported=_reported;
@property(nonatomic) __weak NSObject<RDLibrarySearchResultChangeDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RDMemory *memory; // @synthesize memory=_memory;
@property(retain, nonatomic) RDAlbum *album; // @synthesize album=_album;
@property(retain) NSArray *categoryData; // @synthesize categoryData=_categoryData;
@property(retain) NSArray *userTokens; // @synthesize userTokens=_userTokens;
- (void).cxx_destruct;
- (unsigned long long)resultCount;
@property(retain, nonatomic) NSArray *assets;
- (void)setAssets_locked:(id)arg1;
- (id)description;
- (BOOL)isEqualInUI:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)addVersion:(id)arg1;
- (void)addVersion_locked:(id)arg1;
- (void)_lock:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 sourceSearch:(id)arg2 userTokens:(id)arg3 categoryData:(id)arg4;
- (id)initWithDatabase:(id)arg1;
- (id)init;

@end
