//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, GEOLocation, GEORoute, GEORouteAttributes, NSString;

@interface MNRoutePlanningDetails : PBCodable <NSCopying>
{
    GEOComposedWaypoint *_destination;
    GEOLocation *_lastLocation;
    int _navigationType;
    GEOComposedWaypoint *_origin;
    GEODirectionsRequest *_request;
    NSString *_requestingAppIdentifier;
    GEODirectionsResponse *_response;
    GEORoute *_route;
    GEORouteAttributes *_routeAttributes;
    unsigned int _routeIndex;
    NSString *_traceFileName;
    int _transportType;
    BOOL _copyTracesToCrashReporterDirectory;
    BOOL _fullGuidance;
    BOOL _guidancePromptsEnabled;
    BOOL _isForReconnecting;
    BOOL _isTraceRecording;
    BOOL _shouldPrepare;
    struct {
        unsigned int navigationType:1;
        unsigned int routeIndex:1;
        unsigned int transportType:1;
        unsigned int copyTracesToCrashReporterDirectory:1;
        unsigned int fullGuidance:1;
        unsigned int guidancePromptsEnabled:1;
        unsigned int isForReconnecting:1;
        unsigned int isTraceRecording:1;
        unsigned int shouldPrepare:1;
    } _has;
}

@property(retain, nonatomic) NSString *requestingAppIdentifier; // @synthesize requestingAppIdentifier=_requestingAppIdentifier;
@property(nonatomic) BOOL copyTracesToCrashReporterDirectory; // @synthesize copyTracesToCrashReporterDirectory=_copyTracesToCrashReporterDirectory;
@property(retain, nonatomic) NSString *traceFileName; // @synthesize traceFileName=_traceFileName;
@property(retain, nonatomic) GEORoute *route; // @synthesize route=_route;
@property(retain, nonatomic) GEOLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(nonatomic) unsigned int routeIndex; // @synthesize routeIndex=_routeIndex;
@property(retain, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRequestingAppIdentifier;
@property(nonatomic) BOOL hasCopyTracesToCrashReporterDirectory;
@property(nonatomic) BOOL hasIsTraceRecording;
@property(nonatomic) BOOL isTraceRecording; // @synthesize isTraceRecording=_isTraceRecording;
@property(readonly, nonatomic) BOOL hasTraceFileName;
@property(nonatomic) BOOL hasFullGuidance;
@property(nonatomic) BOOL fullGuidance; // @synthesize fullGuidance=_fullGuidance;
@property(readonly, nonatomic) BOOL hasRoute;
@property(readonly, nonatomic) BOOL hasLastLocation;
@property(nonatomic) BOOL hasShouldPrepare;
@property(nonatomic) BOOL shouldPrepare; // @synthesize shouldPrepare=_shouldPrepare;
@property(nonatomic) BOOL hasIsForReconnecting;
@property(nonatomic) BOOL isForReconnecting; // @synthesize isForReconnecting=_isForReconnecting;
@property(nonatomic) BOOL hasGuidancePromptsEnabled;
@property(nonatomic) BOOL guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
- (int)StringAsNavigationType:(id)arg1;
- (id)navigationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasNavigationType;
@property(nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) BOOL hasRouteAttributes;
@property(nonatomic) BOOL hasRouteIndex;
@property(readonly, nonatomic) BOOL hasResponse;
@property(readonly, nonatomic) BOOL hasRequest;
@property(readonly, nonatomic) BOOL hasDestination;
@property(readonly, nonatomic) BOOL hasOrigin;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;

@end

