//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import "PLPhotosHighlightData.h"

@class NSArray, NSDate, NSObject<NSCopying>, NSSet, NSString, PLManagedAsset;

@interface PLPhotosHighlight : PLManagedObject <PLPhotosHighlightData>
{
}

+ (id)sortByTimeSortDescriptors;
+ (id)batchFetchPhotosHighlightUUIDsByMomentUUIDsWithMomentUUIDs:(id)arg1 library:(id)arg2 error:(id *)arg3;
+ (id)batchFetchPhotosHighlightUUIDsByAssetUUIDsWithAssetUUIDs:(id)arg1 library:(id)arg2 error:(id *)arg3;
+ (id)predicateForInvalidMonthOrYearHighlights;
+ (id)predicateForInvalidDayGroupHighlights;
+ (id)predicateForInvalidDayHighlights;
+ (id)predicateForInvalidHighlightsOfAllKinds;
+ (id)predicateForEmptyHighlightsOfKind:(unsigned short)arg1;
+ (id)_predicateForHighlightsOfKind:(unsigned short)arg1;
+ (id)predicateForAllAssetsInPhotosHighlight:(id)arg1;
+ (id)allPhotosHighlightsInManagedObjectContext:(id)arg1 predicate:(id)arg2 keyPathsForPrefetching:(id)arg3 error:(id *)arg4;
+ (id)insertNewPhotosHighlightInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 title:(id)arg3;
+ (id)fetchRequest;
+ (id)_kindDescription:(unsigned short)arg1;
+ (id)baseSearchIndexPredicate;
@property(readonly, nonatomic) BOOL isPromoted;
@property(readonly, nonatomic) BOOL isRecent;
@property(readonly, nonatomic) unsigned long long numberOfAssetsInExtended;
@property(readonly, retain, nonatomic) NSDate *localEndDate;
@property(readonly, retain, nonatomic) NSDate *localStartDate;
@property(retain, nonatomic) PLManagedAsset *keyAssetForKind;
@property(readonly, retain, nonatomic) NSArray *momentsSortedByTime;
- (void)delete;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
- (void)refreshCuratedAssetsForCurationType:(unsigned short)arg1;
- (void)removeAssetData:(id)arg1;
- (void)refreshAssets;
- (id)diagnosticInformation;
- (BOOL)supportsDiagnosticInformation;
- (void)bumpHighlightVersion;
- (void)awakeFromInsert;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)_appendLocationsInfo:(id)arg1 toCollection:(id)arg2;
- (void)_appendWorkText:(id)arg1 toCollection:(id)arg2;
- (void)_appendHomeToCollection:(id)arg1;
- (void)_appendPublicEventCategories:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendPublicEventStrings:(id)arg1 toCollection:(id)arg2 forSearchIndexCategory:(unsigned long long)arg3;
- (void)_appendBusinessCategories:(id)arg1 toCollection:(id)arg2;
- (void)_appendBusinessNames:(id)arg1 toCollection:(id)arg2;
- (void)_appendROIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendPOIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendHolidays:(id)arg1 toCollection:(id)arg2;
- (void)_appendMeanings:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendScenesWithIdentifiers:(id)arg1 toCollection:(id)arg2 sceneTaxonomyProxy:(id)arg3;
- (void)_appendDates:(id)arg1 withDateFormatter:(id)arg2 withSynonyms:(id)arg3 toCollection:(id)arg4;
- (void)_appendSocialGroupIdentifiers:(id)arg1 toCollection:(id)arg2;
- (void)_appendPersonsWithUUIDs:(id)arg1 toCollection:(id)arg2;
- (void)getSearchIndexContentsForCollection:(id)arg1 fromDictionary:(id)arg2 withDateFormatter:(id)arg3 synonymsDictionaries:(id)arg4 sceneTaxonomyProxy:(id)arg5;
- (id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (id)bestAsset;
- (int)searchAssetsCountForKind;

// Remaining properties
@property(retain, nonatomic) NSSet *assets; // @dynamic assets;
@property(nonatomic) int assetsCount; // @dynamic assetsCount;
@property(nonatomic) unsigned short category; // @dynamic category;
@property(retain, nonatomic) NSSet *childDayGroupPhotosHighlights; // @dynamic childDayGroupPhotosHighlights;
@property(retain, nonatomic) NSSet *childPhotosHighlights; // @dynamic childPhotosHighlights;
@property(retain, nonatomic) NSSet *dayGroupAssets; // @dynamic dayGroupAssets;
@property(nonatomic) int dayGroupAssetsCount; // @dynamic dayGroupAssetsCount;
@property(retain, nonatomic) NSSet *dayGroupExtendedAssets; // @dynamic dayGroupExtendedAssets;
@property(nonatomic) int dayGroupExtendedAssetsCount; // @dynamic dayGroupExtendedAssetsCount;
@property(retain, nonatomic) PLManagedAsset *dayGroupKeyAsset; // @dynamic dayGroupKeyAsset;
@property(retain, nonatomic) NSSet *dayGroupSummaryAssets; // @dynamic dayGroupSummaryAssets;
@property(nonatomic) int dayGroupSummaryAssetsCount; // @dynamic dayGroupSummaryAssetsCount;
@property(retain, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(nonatomic) int endTimeZoneOffset; // @dynamic endTimeZoneOffset;
@property(nonatomic) unsigned short enrichmentState; // @dynamic enrichmentState;
@property(nonatomic) short enrichmentVersion; // @dynamic enrichmentVersion;
@property(retain, nonatomic) NSSet *extendedAssets; // @dynamic extendedAssets;
@property(nonatomic) int extendedCount; // @dynamic extendedCount;
@property(readonly) unsigned long long hash;
@property(nonatomic) short highlightVersion; // @dynamic highlightVersion;
@property(nonatomic) BOOL isCurated; // @dynamic isCurated;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @dynamic keyAsset;
@property(nonatomic) unsigned short kind; // @dynamic kind;
@property(retain, nonatomic) NSSet *moments; // @dynamic moments;
@property(retain, nonatomic) PLManagedAsset *monthFirstAsset; // @dynamic monthFirstAsset;
@property(retain, nonatomic) PLManagedAsset *monthKeyAsset; // @dynamic monthKeyAsset;
@property(nonatomic) unsigned long long mood; // @dynamic mood;
@property(retain, nonatomic) PLPhotosHighlight *parentDayGroupPhotosHighlight; // @dynamic parentDayGroupPhotosHighlight;
@property(retain, nonatomic) PLPhotosHighlight *parentPhotosHighlight; // @dynamic parentPhotosHighlight;
@property(nonatomic) double promotionScore; // @dynamic promotionScore;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(nonatomic) int startTimeZoneOffset; // @dynamic startTimeZoneOffset;
@property(retain, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) NSSet *summaryAssets; // @dynamic summaryAssets;
@property(nonatomic) int summaryCount; // @dynamic summaryCount;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned short type; // @dynamic type;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(retain, nonatomic) NSString *verboseSmartDescription; // @dynamic verboseSmartDescription;
@property(nonatomic) unsigned short visibilityState; // @dynamic visibilityState;
@property(retain, nonatomic) PLManagedAsset *yearKeyAsset; // @dynamic yearKeyAsset;

@end

