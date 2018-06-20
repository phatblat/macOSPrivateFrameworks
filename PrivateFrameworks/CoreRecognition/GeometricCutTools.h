//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GeometricCutTools : NSObject
{
}

+ (id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer)arg2 withPadding:(struct CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(struct CGSize)arg5 withCodeMap:(const int *)arg6 activations:(vector_00ef371e)arg7 invert:(BOOL)arg8;
+ (id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer)arg2 withPadding:(struct CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(struct CGSize)arg5 withNetwork:(struct CHNeuralNetwork *)arg6 activations:(vector_00ef371e)arg7 invert:(BOOL)arg8;
+ (id)stringByInjectingSpaces:(id)arg1 textFeatures:(id)arg2;
+ (BOOL)derotateContentsOf:(id)arg1 inImage:(struct vImage_Buffer)arg2 andOutputTo:(struct vImage_Buffer *)arg3 withPadding:(struct CGPoint)arg4;
+ (id)boxInNormalizedSpace:(id)arg1 toImageSpaceWithSize:(struct CGSize)arg2 plusPadding:(struct CGPoint)arg3 destSize:(struct CGSize *)arg4;
+ (id)widestVersionOfRect:(id)arg1 insideImageWithSize:(struct CGSize)arg2;
+ (BOOL)lineThroughPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2 andImageWithSize:(struct CGSize)arg3 intersectAtPoint:(struct CGPoint *)arg4 andPoint:(struct CGPoint *)arg5;
+ (BOOL)lineThroughPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2 andRectangle:(struct CGRect)arg3 intersectAtPoint:(struct CGPoint *)arg4 andPoint:(struct CGPoint *)arg5;
+ (BOOL)lineThroughPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2 andSegmentStartingAt:(struct CGPoint)arg3 andEndingAt:(struct CGPoint)arg4 intersectAt:(struct CGPoint *)arg5;
+ (BOOL)lineThroughPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2 andLineThroughPoint:(struct CGPoint)arg3 andPoint:(struct CGPoint)arg4 intersectAt:(struct CGPoint *)arg5;
+ (BOOL)isPointArrayARectangle:(id)arg1;
+ (id)findCorrectedBoundingBoxOfTextFeature:(id)arg1 inImageWithSize:(struct CGSize)arg2;
+ (id)cleanTextDetectorOutput:(id)arg1;

@end

