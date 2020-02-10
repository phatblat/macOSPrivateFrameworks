//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PAImaging/PAImageItemViewDefaultMode.h>

@class PACropModeDrawingDelegate;

@interface PACropMode : PAImageItemViewDefaultMode
{
    PACropModeDrawingDelegate *_drawingDelegate;
    CDUnknownBlockType __cropImageReadyHandler;
    struct CGAffineTransform _inversePreviewTransform;
}

@property(copy) CDUnknownBlockType _cropImageReadyHandler; // @synthesize _cropImageReadyHandler=__cropImageReadyHandler;
@property struct CGAffineTransform inversePreviewTransform; // @synthesize inversePreviewTransform=_inversePreviewTransform;
@property(retain) PACropModeDrawingDelegate *drawingDelegate; // @synthesize drawingDelegate=_drawingDelegate;
- (void).cxx_destruct;
- (void)compositionForAssetType:(id)arg1 imageItemController:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)compositionReplacedFilter;
- (void)deactivateWithView:(id)arg1;
- (BOOL)cropImageReady:(CDUnknownBlockType)arg1;
- (void)updateImageView:(id)arg1 withImage:(id)arg2 forKey:(id)arg3;
- (void)activateWithView:(id)arg1;
- (void)updateAssetClient:(id)arg1 forKey:(id)arg2 withConfiguration:(id)arg3;
- (id)imageAssetTypeForKey:(id)arg1;
- (void)loadWithConfiguration:(id)arg1 display:(id)arg2 options:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (BOOL)isEqualToMode:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
