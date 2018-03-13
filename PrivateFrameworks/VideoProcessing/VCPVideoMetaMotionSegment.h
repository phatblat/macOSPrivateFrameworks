//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPMetaSegment.h>

@interface VCPVideoMetaMotionSegment : VCPMetaSegment
{
    float _absMotion;
    float _stabilityScore;
}

@property float stabilityScore; // @synthesize stabilityScore=_stabilityScore;
@property float absMotion; // @synthesize absMotion=_absMotion;
- (void)mergeSegment:(id)arg1;
- (void)finalizeAtTime:(CDStruct_1b6d18a9)arg1;
- (void)updateSegment:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)resetSegment:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithAbsMotion:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;

@end

