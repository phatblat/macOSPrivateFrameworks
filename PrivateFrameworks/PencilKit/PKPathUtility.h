//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PKPathUtility : NSObject
{
}

+ (BOOL)vector:(const vector_93009049 *)arg1 containsEdge:(struct Edge)arg2;
+ (BOOL)vector:(const vector_e1abc270 *)arg1 containsPoint:(struct CGPoint)arg2;
+ (BOOL)edge:(struct Edge)arg1 intersectsEdge:(struct Edge)arg2;
+ (BOOL)newEdgeWithPoint:(struct CGPoint)arg1 betweenEdge:(struct Edge)arg2 intersectsOtherEdgesInHull:(const vector_e1abc270 *)arg3;
+ (void)openConvexHullToConcave:(vector_e1abc270 *)arg1 points:(const vector_e1abc270 *)arg2;
+ (struct Edge)longestEdgeInHull:(const vector_e1abc270 *)arg1 atIndex:(int *)arg2 visitedEdges:(const vector_93009049 *)arg3;
+ (struct CGPoint)pointWithMinAngleForEdge:(struct Edge)arg1 fromPoints:(const vector_e1abc270 *)arg2 minAngle:(double *)arg3;
+ (double)averageDistanceForEdge:(struct Edge)arg1 withPoints:(const vector_e1abc270 *)arg2;
+ (void)convexHull:(vector_e1abc270 *)arg1 forPoints:(vector_e1abc270)arg2;

@end
