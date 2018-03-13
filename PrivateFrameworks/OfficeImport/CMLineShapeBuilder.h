//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMShapeBuilder.h>

@class OADStroke;

__attribute__((visibility("hidden")))
@interface CMLineShapeBuilder : CMShapeBuilder
{
    OADStroke *_stroke;
}

- (void).cxx_destruct;
- (void)_renderLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 withOrientation:(float)arg3 inPath:(struct CGPath *)arg4;
- (struct CGRect)_boundingBoxForLineEnd:(id)arg1;
- (float)_getRotationFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 withBounds:(id)arg3;
- (void)_renderBentConnector3InPath:(struct CGPath *)arg1 withTransform:(struct CGAffineTransform)arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint *)arg4 headDst:(struct CGPoint *)arg5 tailSrc:(struct CGPoint *)arg6 tailDst:(struct CGPoint *)arg7;
- (float)_adjustedCoefAtIndex:(int)arg1;
- (void)_renderBentConnector2InPath:(struct CGPath *)arg1 withTransform:(struct CGAffineTransform)arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint *)arg4 headDst:(struct CGPoint *)arg5 tailSrc:(struct CGPoint *)arg6 tailDst:(struct CGPoint *)arg7;
- (void)_renderStraightConnector1InPath:(struct CGPath *)arg1 withTransform:(struct CGAffineTransform)arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint *)arg4 headDst:(struct CGPoint *)arg5 tailSrc:(struct CGPoint *)arg6 tailDst:(struct CGPoint *)arg7;
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg1;
- (void)setStroke:(id)arg1;

@end

