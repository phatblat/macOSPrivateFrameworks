//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXAssetReference, PXCoordinatedRect, PXRegionOfInterest;

@interface PXAssetImageContainer : NSObject
{
    PXAssetReference *_assetReference;
    PXCoordinatedRect *_frame;
    PXRegionOfInterest *_regionOfInterest;
    struct CGImage *_imageRef;
    struct CGRect _contentsRect;
}

+ (id)imageContainersForSelectionSnapshot:(id)arg1 gridView:(id)arg2 fallbackMediaProvider:(id)arg3 includeAllAssets:(BOOL)arg4;
@property(readonly, nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(readonly, nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
@property(readonly, nonatomic) PXRegionOfInterest *regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property(readonly, nonatomic) PXCoordinatedRect *frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) PXAssetReference *assetReference; // @synthesize assetReference=_assetReference;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithAssetReference:(id)arg1 frame:(id)arg2 imageRef:(struct CGImage *)arg3 contentsRect:(struct CGRect)arg4 regionOfInterest:(id)arg5;
- (id)init;

@end
