//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface VKTriangulator : NSObject
{
    void *_opaque_triangulator;
    unsigned long long _segments_capacity;
    void *_opaque_segments;
    unsigned long long _mesh_capacity;
    unsigned long long *_mesh;
    NSMutableData *_scratch;
}

- (id)triangulateIndicesForPoints:(Matrix_443f5d51 *)arg1 pointCount:(unsigned long long)arg2;
- (BOOL)_triangulateIndicesInto:(id)arg1;
- (void)dealloc;
- (id)init;

@end

