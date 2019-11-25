//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray;

@interface VCPHomeKitMotionAnalyzer : VCPVideoAnalyzer
{
    NSMutableArray *_regions;
    float *_diff;
    float *_ptrFirst;
    float *_ptrLast;
    struct Scaler _scaler;
    struct vector<__CVBuffer *, std::__1::allocator<__CVBuffer *>> _frameArray;
    int _frameWidth;
    int _frameHeight;
    int _width;
    int _height;
    int _stride;
    int _blockSize;
    int _widthBlockNum;
    int _heightBlockNum;
    float _actionScore;
}

@property(readonly) float actionScore; // @synthesize actionScore=_actionScore;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)regionsOfInterest;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)computeRegionsofInterest;
- (int)calculateFrameDifference:(struct __CVBuffer *)arg1;
- (int)setPixelBuffer:(struct __CVBuffer *)arg1;
- (void)dealloc;
- (id)init;

@end

