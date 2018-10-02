//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface VCPVideoFaceMeshAnalyzer : NSObject
{
    BOOL _bufferRotated;
    NSDictionary *_blendShapes;
    unsigned long long _vertexCount;
    // Error parsing type: r^, name: _vertices
    // Error parsing type: {?="columns"[4]}, name: _pose
}

@property(readonly, nonatomic) BOOL bufferRotated; // @synthesize bufferRotated=_bufferRotated;
// Error parsing type for property vertices:
// Property attributes: Tr^,R,N,V_vertices

@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(readonly, nonatomic) NSDictionary *blendShapes; // @synthesize blendShapes=_blendShapes;
// Error parsing type for property pose:
// Property attributes: T{?=[4]},R,N,V_pose

- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withFaceRect:(struct CGRect)arg2 withRotation:(int)arg3 withTimestamp:(CDStruct_1b6d18a9)arg4;
- (BOOL)isTracked;
- (BOOL)updateFocalLengthInPixels:(float)arg1;
- (id)initWithFocalLengthInPixels:(float)arg1 offline:(BOOL)arg2;

@end

