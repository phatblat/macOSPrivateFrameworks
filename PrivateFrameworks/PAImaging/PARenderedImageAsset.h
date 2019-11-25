//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PAImaging/PAImageAsset.h>

@class NUComposition;

@interface PARenderedImageAsset : PAImageAsset
{
    long long _updateNumber;
    BOOL _isInteractive;
    NUComposition *_composition;
}

@property(retain) NUComposition *composition; // @synthesize composition=_composition;
- (void).cxx_destruct;
- (void)assetDidChange:(id)arg1;
- (CDStruct_19170857)orientationForComposition:(id)arg1;
- (void)_addImageAssetClient:(id)arg1;
- (long long)_imageOrientation;
- (struct PFIntSize_st)_originalImageSize;
- (long long)previewOrientation;
- (struct CGSize)previewSize;
- (void)compositionChanged:(id)arg1 key:(id)arg2;
- (void)composition:(id)arg1 endInteractiveForKey:(id)arg2;
- (void)composition:(id)arg1 beginInteractiveForKey:(id)arg2;
- (void)_compositionChanged:(id)arg1;
- (void)_notifyClientsRenderNeeded:(id)arg1 orientation:(CDStruct_19170857)arg2 updateNumber:(long long)arg3 isInteractive:(BOOL)arg4;

@end

