//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamBFBlurPassOneOpt : TDreamProgramWrapperTwoInput
{
    float oneOverSize[2];
    int oneOverSizeUniform;
    double _sigma;
    double _sigmaColor;
}

@property(nonatomic) double sigmaColor; // @synthesize sigmaColor=_sigmaColor;
@property(nonatomic) double sigma; // @synthesize sigma=_sigma;
- (void)setUniforms;
- (id)init;
- (void)setOneOverSize:(const float *)arg1;

@end

