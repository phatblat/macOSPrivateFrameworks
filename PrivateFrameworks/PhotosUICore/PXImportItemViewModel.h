//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import "NSCopying.h"
#import "PXDisplayAsset.h"

@class NSDate, NSDictionary, NSError, NSMutableDictionary, NSString, PHImportAsset, PHImportAssetDataRequest, PXImportAssetCollection;

@interface PXImportItemViewModel : PXObservable <PXDisplayAsset, NSCopying>
{
    NSString *_collectionIdentifier;
    BOOL _selected;
    BOOL _selectable;
    BOOL _duplicate;
    BOOL _isDeleted;
    id <PXImportDisplayDelegate> _displayDelegate;
    PHImportAsset *_importAsset;
    PXImportAssetCollection *_assetCollection;
    NSString *_kind;
    PHImportAssetDataRequest *_thumbnailRequest;
    NSError *_thumbnailError;
    double _imageProcessingStartTime;
    double _imageProcessingEndTime;
    long long _state;
    long long _thumbnailIndex;
    NSDate *_importDate;
    NSString *_deleteSession;
    NSMutableDictionary *_imageRepresentationsBySize;
    NSMutableDictionary *_assetRequestsBySize;
    NSMutableDictionary *_thumbnailRequestsBySize;
    struct CGSize _largeThumbnailSize;
    struct CGSize _thumbnailSize;
}

+ (id)alreadyImportedGroupIdentifier;
+ (id)dateFormatter;
+ (BOOL)hasPanoramaImageDimensions:(struct CGSize)arg1;
+ (id)importAssetsFromModels:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *thumbnailRequestsBySize; // @synthesize thumbnailRequestsBySize=_thumbnailRequestsBySize;
@property(retain, nonatomic) NSMutableDictionary *assetRequestsBySize; // @synthesize assetRequestsBySize=_assetRequestsBySize;
@property(retain, nonatomic) NSMutableDictionary *imageRepresentationsBySize; // @synthesize imageRepresentationsBySize=_imageRepresentationsBySize;
@property(readonly, nonatomic) BOOL isDeleted; // @synthesize isDeleted=_isDeleted;
@property(readonly, nonatomic) NSString *deleteSession; // @synthesize deleteSession=_deleteSession;
@property(readonly, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
@property(readonly, nonatomic) long long thumbnailIndex; // @synthesize thumbnailIndex=_thumbnailIndex;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isDuplicate) BOOL duplicate; // @synthesize duplicate=_duplicate;
@property(readonly, nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property(readonly, nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) double imageProcessingEndTime; // @synthesize imageProcessingEndTime=_imageProcessingEndTime;
@property(nonatomic) double imageProcessingStartTime; // @synthesize imageProcessingStartTime=_imageProcessingStartTime;
@property(retain, nonatomic) NSError *thumbnailError; // @synthesize thumbnailError=_thumbnailError;
@property(nonatomic) __weak PHImportAssetDataRequest *thumbnailRequest; // @synthesize thumbnailRequest=_thumbnailRequest;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) struct CGSize largeThumbnailSize; // @synthesize largeThumbnailSize=_largeThumbnailSize;
@property(readonly, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(nonatomic) __weak PXImportAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) PHImportAsset *importAsset; // @synthesize importAsset=_importAsset;
@property(nonatomic) __weak id <PXImportDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)groupIdentifier;
@property(readonly, nonatomic) NSDate *fileCreationDate;
@property(readonly, nonatomic) NSString *fileName;
- (void)removeThumbnailRequest:(id)arg1;
- (void)addThumbnailRequest:(id)arg1;
- (id)thumbnailRequestsForRequestSize:(unsigned long long)arg1;
- (void)removeAssetDataRequestForRequestSize:(unsigned long long)arg1;
- (void)setAssetDataRequest:(id)arg1 forRequestSize:(unsigned long long)arg2;
- (id)assetDataRequestForRequestSize:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDictionary *imageRepresentations;
- (void)setIsDeleted:(BOOL)arg1;
- (void)setDeleteSession:(id)arg1;
- (void)setImportDate:(id)arg1;
- (void)addImageRepresentation:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setDuplicate:(BOOL)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isPanoramicImage;
@property(readonly, nonatomic) long long badgeType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *debugDisplayName;
@property(readonly, nonatomic) BOOL isNotYetImported;
@property(readonly, nonatomic) BOOL isMediaAsset;
@property(readonly, nonatomic) id uuid;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToImportItemViewModel:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithKind:(id)arg1 selectable:(BOOL)arg2;
- (id)initWithImportAsset:(id)arg1;
- (id)init;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) double duration;
- (long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) BOOL isInCloud;
@property(readonly, nonatomic) BOOL representsBurst;
@property(readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;

// Remaining properties
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) float hdrGain;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long thumbnailVersion;

@end

