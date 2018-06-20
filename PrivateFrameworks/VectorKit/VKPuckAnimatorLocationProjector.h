//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEORouteMatch;

__attribute__((visibility("hidden")))
@interface VKPuckAnimatorLocationProjector : NSObject
{
    GEORouteMatch *_routeMatch;
    GEORouteMatch *_projectedRouteMatch;
    Matrix_6e1d3589 _projectedPosition;
    double _projectedCourse;
}

@property(readonly, nonatomic) double projectedCourse; // @synthesize projectedCourse=_projectedCourse;
@property(readonly, nonatomic) Matrix_6e1d3589 projectedPosition; // @synthesize projectedPosition=_projectedPosition;
@property(retain, nonatomic) GEORouteMatch *projectedRouteMatch; // @synthesize projectedRouteMatch=_projectedRouteMatch;
@property(retain, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
- (id).cxx_construct;
- (id)detailedDescription;
@property(readonly, nonatomic) BOOL projectedLocationOnRoute;
@property(readonly, nonatomic) CDStruct_c3b9c2ee projectedLocation;
- (void)projectFromLocation:(id)arg1 routeMatch:(id)arg2 speedMultiplier:(double)arg3;
- (void)_updateCourseAndPositionFromRouteMatch;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

