//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamGaussBlurExpressOpt9 : TDreamProgramWrapper
{
    float kernel[3];
    int kernelUniform;
    float offsets[3];
    int offsetsUniform;
}

- (void)setUniforms;
- (id)init;
- (void)setOffsets:(const double *)arg1;
- (void)setKernel:(const double *)arg1;

@end

