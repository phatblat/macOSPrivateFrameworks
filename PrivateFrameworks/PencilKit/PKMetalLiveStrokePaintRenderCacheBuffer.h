//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PKMetalLiveStrokePaintRenderCacheBuffer : NSObject
{
    id <MTLBuffer> _strokePointBuffer;
    unsigned long long _strokePointBufferOffset;
    id <MTLBuffer> _liveStrokePointBuffer;
    unsigned long long _liveStrokePointBufferOffset;
    unsigned long long _numVertices;
    unsigned long long _numPoints;
}

@property(readonly, nonatomic) unsigned long long numPoints; // @synthesize numPoints=_numPoints;
@property(readonly, nonatomic) unsigned long long numVertices; // @synthesize numVertices=_numVertices;
@property(readonly, nonatomic) unsigned long long liveStrokePointBufferOffset; // @synthesize liveStrokePointBufferOffset=_liveStrokePointBufferOffset;
@property(readonly, nonatomic) id <MTLBuffer> liveStrokePointBuffer; // @synthesize liveStrokePointBuffer=_liveStrokePointBuffer;
@property(readonly, nonatomic) unsigned long long strokePointBufferOffset; // @synthesize strokePointBufferOffset=_strokePointBufferOffset;
@property(readonly, nonatomic) id <MTLBuffer> strokePointBuffer; // @synthesize strokePointBuffer=_strokePointBuffer;
- (void).cxx_destruct;
- (id)initWithPoints:(const struct PKMetalPaintStrokePoint *)arg1 liveStrokePoints:(const struct PKMetalLiveStrokePaintStrokePoint *)arg2 numPoints:(unsigned long long)arg3 numVertices:(unsigned long long)arg4 resourceHandler:(id)arg5;
- (id)init;

@end

