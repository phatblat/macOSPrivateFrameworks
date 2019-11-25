//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSObject<OS_dispatch_queue>, PHMomentShare, PXAssetsDataSource, PXCMMContext, PXCMMSendBackSuggestion;

@interface PXCMMSendBackSuggestionSource : PXObservable
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    unsigned long long _sourceType;
    BOOL _hasInitiatedFetchRequest;
    BOOL _shouldShowBanner;
    PXAssetsDataSource *_assetsDataSource;
    PHMomentShare *_originatingMomentShare;
    PXCMMSendBackSuggestion *_suggestion;
    PXCMMContext *_sendBackContext;
}

+ (id)_filterAssets:(id)arg1 byLocations:(id)arg2 maxDistanceMeters:(double)arg3;
+ (id)_assetsInDateRanges:(id)arg1;
+ (id)_sendBackFetchResultUsingTimeLocationMatching:(id)arg1;
+ (id)_sendBackFetchResultUsingOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2;
+ (id)sendBackContextTimeLocationMatching:(id)arg1 sourceType:(unsigned long long)arg2;
+ (id)sendBackContextOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2 sourceType:(unsigned long long)arg3;
+ (id)new;
@property(readonly, nonatomic) BOOL shouldShowBanner; // @synthesize shouldShowBanner=_shouldShowBanner;
@property(readonly, nonatomic) PXCMMContext *sendBackContext; // @synthesize sendBackContext=_sendBackContext;
@property(readonly, nonatomic) PXCMMSendBackSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(readonly, nonatomic) PHMomentShare *originatingMomentShare; // @synthesize originatingMomentShare=_originatingMomentShare;
@property(readonly, nonatomic) PXAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
- (void).cxx_destruct;
- (id)_sendBackFetchResultUsingPhotosGraph;
- (id)sendBackContextPhotosGraphBasedWithSourceType:(unsigned long long)arg1;
- (id)_createSendBackContext;
- (id)_allMetadataAssets;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setShouldShowBanner:(BOOL)arg1;
- (void)setSendBackContext:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (void)_fetchQueue_fetchSuggestedSendBackContext;
- (void)_fetchSuggestedSendBackContext;
- (id)_fetchSuggestedParticipantsForAssetCollection:(id)arg1;
- (BOOL)_existingOverlappingMomentSharesFromOwnerForAssetCollection:(id)arg1;
- (void)startLoading;
- (id)initWithAssetsDataSource:(id)arg1 sourceType:(unsigned long long)arg2 originatingMomentShare:(id)arg3;
- (id)init;

@end

