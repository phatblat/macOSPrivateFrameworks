//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PHCollectionList, PHFetchResult;

@interface PXNavigationListDataSectionConfiguration : NSObject
{
    BOOL _emptyCollectionsHidden;
    BOOL _includeKeyAssetFetches;
    BOOL _includeUserSmartAlbums;
    BOOL _skipKeyAssetFetchesForSmartAlbums;
    BOOL _skipAssetFetches;
    PHCollectionList *_collectionList;
    PHFetchResult *_collectionsFetchResult;
}

+ (id)configurationWithCollectionsFetchResult:(id)arg1;
+ (id)configurationWithCollectionList:(id)arg1;
@property(nonatomic) BOOL skipAssetFetches; // @synthesize skipAssetFetches=_skipAssetFetches;
@property(nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums; // @synthesize skipKeyAssetFetchesForSmartAlbums=_skipKeyAssetFetchesForSmartAlbums;
@property(nonatomic) BOOL includeUserSmartAlbums; // @synthesize includeUserSmartAlbums=_includeUserSmartAlbums;
@property(nonatomic) BOOL includeKeyAssetFetches; // @synthesize includeKeyAssetFetches=_includeKeyAssetFetches;
@property(nonatomic) BOOL emptyCollectionsHidden; // @synthesize emptyCollectionsHidden=_emptyCollectionsHidden;
@property(readonly, nonatomic) PHFetchResult *collectionsFetchResult; // @synthesize collectionsFetchResult=_collectionsFetchResult;
@property(readonly, nonatomic) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCollectionsFetchResult:(id)arg1;
- (id)initWithCollectionList:(id)arg1;

@end
