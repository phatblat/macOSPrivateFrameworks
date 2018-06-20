//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CUIPSDImageRef.h"

@class NSArray;

@interface CTDPSDPreviewRef : CUIPSDImageRef
{
    struct _PSDImageInfo _imageInfo;
    long long _layerCount;
    long long _sliceCount;
    long long _columnWidth;
    long long _rowHeight;
    NSArray *_layerIndexLayout;
    long long _sliceRowCount;
    long long _sliceColumnCount;
    NSArray *_sliceRects;
}

- (long long)indexOfDrawingLayerType:(long long)arg1;
- (id)createImageFromVerticalSlices:(id)arg1 horizontalSliceCount:(unsigned int)arg2 atLayer:(unsigned int)arg3;
- (id)createImageOfGradientAtLayer:(unsigned int)arg1;
- (id)createSlicedImageAtLayer:(unsigned int)arg1 overlayAlphaChannel:(long long)arg2;
- (id)createSlicedImageAtLayer:(unsigned int)arg1;
- (id)imagePreviewAtLayer:(unsigned int)arg1 overlayAlphaChannel:(long long)arg2;
- (long long)numberOfAlphaChannels;
- (long long)numberOfGradientLayers;
- (BOOL)hasGradient;
- (BOOL)hasRegularSliceGrid;
- (void)evaluateSliceGrid;
- (long long)sliceColumnCount;
- (long long)sliceRowCount;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

