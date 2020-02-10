//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol KHPhotoLibraryProtocol
- (NSArray *)pageLayoutPhotosWithPhotoIDs:(NSArray *)arg1;
- (id <KHPhotoInfoProtocol>)pageLayoutPhotoWithPhotoID:(NSString *)arg1;

@optional
- (void)pageLayoutRequestAccessWithCompletion:(void (^)(BOOL))arg1;
- (unsigned long long)pageLayoutAuthorizationStatus;
- (NSArray *)pageLayoutPhotos;
- (NSArray *)pageLayoutPhotoIDsForLibraryFilterKey:(id)arg1 sort:(unsigned long long)arg2;
- (NSArray *)pageLayoutPhotoIDsForLibraryFilterKey:(id)arg1;
- (NSArray *)pageLayoutOrderedLibraryFilterKeys;
- (NSDictionary *)pageLayoutLibraryFilterKeys;
- (NSArray *)pageLayoutFlaggedPhotoIDs;
- (NSArray *)pageLayoutPhotosWithLocationsIntersectingSouthwest:(struct CGPoint)arg1 northeast:(struct CGPoint)arg2;
- (NSArray *)pageLayoutPhotosContainingAnyPersonIDsIn:(NSArray *)arg1;
- (NSString *)pageLayoutPersonNameForPersonID:(NSString *)arg1;
- (NSArray *)pageLayoutAlbumIDs;
- (id <KHAlbumInfoProtocol>)pageLayoutAlbumWithAlbumID:(NSString *)arg1;
- (id <KHEventInfoProtocol>)pageLayoutEventWithEventID:(NSString *)arg1;
- (NSArray *)pageLayoutEventIDs;
- (id <KHPhotoGroupProtocol>)pageLayoutPhotoGroupWithUID:(NSString *)arg1;
- (id <KHPhotoGroupCollectionProtocol>)pageLayoutPhotoGroupCollectionAtIndex:(long long)arg1;
- (long long)pageLayoutNumberOfPhotoGroupCollections;
- (void)prefetchPageLayoutThumbnailsForPhotoIDs:(NSArray *)arg1 usingBlock:(void (^)(NSString *, KHImage *, char *))arg2;
- (void)emptyPageLayoutCache;
@end
