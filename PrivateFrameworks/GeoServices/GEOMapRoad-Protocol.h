//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GEOMapLine.h"

@class GEOMapRequest, NSString;

@protocol GEOMapRoad <GEOMapLine>
@property(readonly, nonatomic) NSString *internalRoadName;
@property(readonly, nonatomic) int rampType;
@property(readonly, nonatomic) BOOL isRail;
@property(readonly, nonatomic) BOOL isBridge;
@property(readonly, nonatomic) BOOL isTunnel;
@property(readonly, nonatomic) unsigned long long roadID;
@property(readonly, nonatomic) BOOL speedLimitIsMPH;
@property(readonly, nonatomic) unsigned long long speedLimit;
@property(readonly, nonatomic) double roadWidth;
@property(readonly, nonatomic) int travelDirection;
@property(readonly, nonatomic) int formOfWay;
@property(readonly, nonatomic) int roadClass;
- (GEOMapRequest *)findRoadsToNextIntersection:(void (^)(id <GEOMapRoad>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findRoadsFromNextIntersection:(void (^)(id <GEOMapRoad>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findRoadsToPreviousIntersection:(void (^)(id <GEOMapRoad>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findRoadsFromPreviousIntersection:(void (^)(id <GEOMapRoad>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findRoadsFrom:(void (^)(id <GEOMapRoad>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (void)roadEdgesWithHandler:(void (^)(struct *))arg1;
- (void)roadFeaturesWithHandler:(void (^)(struct *))arg1;
@end

