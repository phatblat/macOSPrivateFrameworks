//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BCUBookCoverEffectsFilter.h"
#import "BCUImageFilter.h"

@class BCULayerRenderer, NSString;

@interface _BCUCoverEffectsPDF : NSObject <BCUBookCoverEffectsFilter, BCUImageFilter>
{
    BCULayerRenderer *_renderer;
    BOOL _image;
    BOOL _shadow;
    BOOL _night;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)newOperationWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_layerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 minificationFilter:(id)arg4;
- (struct NSEdgeInsets)_roundedInsetsWithSize:(struct CGSize)arg1;
- (id)shadowLayerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3 kind:(unsigned long long)arg4;
- (id)coverLayerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3;
- (id)initWithIdentifier:(id)arg1 renderer:(id)arg2 image:(BOOL)arg3 shadow:(BOOL)arg4 night:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

