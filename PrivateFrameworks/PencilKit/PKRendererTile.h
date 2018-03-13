//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSArray, PKRendererController;

@interface PKRendererTile : CALayer
{
    // Error parsing type: Aq, name: _renderCount
    BOOL _outOfDate;
    PKRendererController *_rendererController;
    long long _level;
    long long _yOffset;
    NSArray *_renderedStrokes;
    struct CGRect _drawingFrame;
}

+ (struct CGRect)layerFrameForLevel:(long long)arg1 yOffset:(long long)arg2 frameScale:(double)arg3;
+ (double)tileHeightForLevel:(long long)arg1 scale:(double)arg2;
@property BOOL outOfDate; // @synthesize outOfDate=_outOfDate;
@property(retain, nonatomic) NSArray *renderedStrokes; // @synthesize renderedStrokes=_renderedStrokes;
@property(readonly, nonatomic) long long yOffset; // @synthesize yOffset=_yOffset;
@property(readonly, nonatomic) long long level; // @synthesize level=_level;
@property __weak PKRendererController *rendererController; // @synthesize rendererController=_rendererController;
@property(readonly, nonatomic) struct CGRect drawingFrame; // @synthesize drawingFrame=_drawingFrame;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
@property(readonly) long long renderCount;
- (void)cancel;
- (id)splitForScale:(double)arg1;
- (void)update;
- (void)updateFrameForScale:(double)arg1;
- (void)dealloc;
- (id)initWithLevel:(long long)arg1 yOffset:(long long)arg2 frameScale:(double)arg3;

@end

