//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KHPhotoInfoProtocol.h"

@class CLPlacemark, KHPhotoLocationMetadata, NSArray, NSDate, NSDictionary, NSString, NSURL, NSValue;

@interface KHPhoto : NSObject <KHPhotoInfoProtocol>
{
    struct CGSize _imagePixelSize;
    NSValue *_imageLocation;
    KHPhotoLocationMetadata *_locationMetadata;
    CLPlacemark *_placemark;
    unsigned long long _imageOrientation;
    id _rawAsset;
}

+ (id)photoWithMediaObject:(id)arg1;
+ (id)photoWithItemProvider:(id)arg1 extensionContext:(id)arg2 extensionItem:(id)arg3;
+ (id)photoWithFileURL:(id)arg1;
+ (id)imageLoadingQueue;
@property(retain, nonatomic) KHPhotoLocationMetadata *locationMetadata; // @synthesize locationMetadata=_locationMetadata;
@property(readonly, nonatomic) id rawAsset; // @synthesize rawAsset=_rawAsset;
@property(nonatomic) unsigned long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
- (void).cxx_destruct;
@property(readonly) NSString *pageLayoutPhotoID;
- (id)pageLayoutImage;
@property(readonly) NSDate *pageLayoutPhotoModificationDate;
- (id)pageLayoutImageSuitableForSize:(struct CGSize)arg1 quality:(unsigned long long)arg2;
@property(readonly) NSString *pageLayoutFilename;
- (id)pageLayoutPhotoId;
- (id)pageLayoutImageSuitableForSize:(struct CGSize)arg1;
- (BOOL)pageLayoutImageExists;
- (void)cancelPageLayoutImageWithObserverTarget:(id)arg1;
- (id)pageLayoutImageSuitableForSize:(struct CGSize)arg1 quality:(unsigned long long)arg2 withObserverTarget:(id)arg3 selector:(SEL)arg4 object:(id)arg5;
- (id)pageLayoutImageWithObserverTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)cancelPageLayoutImageLoadingRequestWithIdentifier:(id)arg1;
- (id)loadPageLayoutImageSuitableForSize:(struct CGSize)arg1 quality:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_asyncLoadingMapTable;
@property(readonly, copy) NSString *debugDescription;
- (id)pageLayoutAspectRatioThumbnailImage;
- (id)pageLayoutThumbnailImage;
@property(readonly) double pageLayoutNormalizedRating;
- (id)pageLayoutRating;
@property(readonly) NSArray *pageLayoutKeywordInfos;
@property(readonly) NSArray *pageLayoutFaceInfos;
@property(readonly) NSDictionary *pageLayoutExifMetaData;
@property(readonly) id <MapPointOfInterestProtocol> pageLayoutLocationMetaData;
- (id)pageLayoutLocation;
@property(readonly) id <KHEventInfoProtocol> pageLayoutEventInfo;
@property(readonly) NSString *pageLayoutEventID;
@property(readonly) unsigned long long pageLayoutOrientation;
@property(readonly) double pageLayoutImageAspectRatio;
@property(readonly) struct CGSize pageLayoutImageSize;
- (BOOL)pageLayoutImageHasLightAdjustments;
- (BOOL)pageLayoutImageHasRedEyeAdjustments;
- (BOOL)pageLayoutImageHasColorAdjustments;
- (BOOL)pageLayoutImageHasBorderEffects;
- (BOOL)pageLayoutImageValidSuitableForSize:(struct CGSize)arg1;
- (BOOL)pageLayoutImageValid;
- (BOOL)pageLayoutImageExistsSuitableForSize:(struct CGSize)arg1;
- (void)pageLayoutEncodeWithDictionary:(id)arg1;
@property(readonly) NSString *pageLayoutAnnotation;
@property(retain, nonatomic) CLPlacemark *placemark;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly) id <NSCopying> pageLayoutPhotoAddress;
- (id)_init;
- (id)init;
- (id)initWithMediaObject:(id)arg1;
- (id)initWithItemProvider:(id)arg1 extensionContext:(id)arg2 extensionItem:(id)arg3;
- (id)initWithFileURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSDate *pageLayoutPhotoDate; // @dynamic pageLayoutPhotoDate;
@property(readonly) NSString *pageLayoutTitle; // @dynamic pageLayoutTitle;
@property(readonly) Class superclass;

@end
