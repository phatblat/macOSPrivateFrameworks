//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIImage, NSArray, NSNumber;

@interface DGBilateralConvolution : CIFilter
{
    CIImage *inputImage;
    NSArray *inputPoints;
    NSArray *inputWeights;
    NSNumber *inputEdgeDetail;
    NSNumber *inputVersion;
}

+ (id)filterWithName:(id)arg1;
+ (void)initialize;
- (id)outputImage;
- (id)doBilateralPass:(id)arg1 points:(id)arg2 weights:(id)arg3 sums:(id)arg4 slope:(id)arg5;
- (struct CGRect)bilateralAddROI:(long long)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (struct CGRect)bilateralInitROI:(long long)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (struct CGRect)enlargedBounds:(struct CGRect)arg1 withPoints:(id)arg2;
- (struct CGRect)boundsForPointArray:(id)arg1;
- (long long)samplesPerPass;
- (id)customAttributes;

@end

