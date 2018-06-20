//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOAlertNonRecommendedRouteText, GEOLaunchAndGoCardText, GEORouteInformation, NSData, NSMutableArray, NSString;

@interface GEORoute : PBCodable <NSCopying>
{
    CDStruct_95bda58d _advisorys;
    CDStruct_9f2792e4 _incidentEndOffsetsInRoutes;
    CDStruct_9f2792e4 _incidentIndices;
    CDStruct_9f2792e4 _trafficColorOffsets;
    CDStruct_9f2792e4 _trafficColors;
    NSMutableArray *_advisoryNotices;
    GEOAlertNonRecommendedRouteText *_alertNonRecommendedRouteText;
    NSData *_arrivalRouteID;
    unsigned int _arrivalStepID;
    NSData *_basicPoints;
    NSData *_departureRouteID;
    unsigned int _departureStepID;
    unsigned int _distance;
    int _drivingSide;
    NSMutableArray *_endingRouteInstructions;
    NSMutableArray *_enrouteNotices;
    unsigned int _expectedTime;
    NSMutableArray *_guidanceEvents;
    unsigned int _historicTravelTime;
    GEOLaunchAndGoCardText *_launchAndGoCardText;
    NSString *_name;
    NSString *_phoneticName;
    NSMutableArray *_routeDescriptions;
    NSData *_routeID;
    NSMutableArray *_routeNames;
    GEORouteInformation *_routePlanningDescription;
    int _routeType;
    NSMutableArray *_startingRouteInstructions;
    unsigned int _staticTravelTime;
    NSMutableArray *_steps;
    NSString *_trafficDescription;
    NSString *_trafficDescriptionLong;
    int _transportType;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    NSData *_unpackedLatLngVertices;
    NSData *_zilchPoints;
    BOOL _avoidsHighways;
    BOOL _avoidsTolls;
    BOOL _avoidsTraffic;
    BOOL _isOfflineResponse;
    struct {
        unsigned int arrivalStepID:1;
        unsigned int departureStepID:1;
        unsigned int distance:1;
        unsigned int drivingSide:1;
        unsigned int expectedTime:1;
        unsigned int historicTravelTime:1;
        unsigned int routeType:1;
        unsigned int staticTravelTime:1;
        unsigned int transportType:1;
        unsigned int travelTimeAggressiveEstimate:1;
        unsigned int travelTimeConservativeEstimate:1;
        unsigned int avoidsHighways:1;
        unsigned int avoidsTolls:1;
        unsigned int avoidsTraffic:1;
        unsigned int isOfflineResponse:1;
    } _has;
}

+ (Class)guidanceEventType;
+ (Class)endingRouteInstructionType;
+ (Class)startingRouteInstructionType;
+ (Class)routeDescriptionType;
+ (Class)enrouteNoticeType;
+ (Class)routeNameType;
+ (Class)advisoryNoticeType;
+ (Class)stepType;
@property(retain, nonatomic) GEOLaunchAndGoCardText *launchAndGoCardText; // @synthesize launchAndGoCardText=_launchAndGoCardText;
@property(retain, nonatomic) NSMutableArray *guidanceEvents; // @synthesize guidanceEvents=_guidanceEvents;
@property(retain, nonatomic) GEOAlertNonRecommendedRouteText *alertNonRecommendedRouteText; // @synthesize alertNonRecommendedRouteText=_alertNonRecommendedRouteText;
@property(retain, nonatomic) NSString *trafficDescriptionLong; // @synthesize trafficDescriptionLong=_trafficDescriptionLong;
@property(retain, nonatomic) NSString *trafficDescription; // @synthesize trafficDescription=_trafficDescription;
@property(retain, nonatomic) NSMutableArray *endingRouteInstructions; // @synthesize endingRouteInstructions=_endingRouteInstructions;
@property(retain, nonatomic) NSMutableArray *startingRouteInstructions; // @synthesize startingRouteInstructions=_startingRouteInstructions;
@property(retain, nonatomic) NSMutableArray *routeDescriptions; // @synthesize routeDescriptions=_routeDescriptions;
@property(retain, nonatomic) GEORouteInformation *routePlanningDescription; // @synthesize routePlanningDescription=_routePlanningDescription;
@property(retain, nonatomic) NSData *unpackedLatLngVertices; // @synthesize unpackedLatLngVertices=_unpackedLatLngVertices;
@property(retain, nonatomic) NSMutableArray *enrouteNotices; // @synthesize enrouteNotices=_enrouteNotices;
@property(nonatomic) BOOL avoidsTraffic; // @synthesize avoidsTraffic=_avoidsTraffic;
@property(nonatomic) BOOL avoidsHighways; // @synthesize avoidsHighways=_avoidsHighways;
@property(nonatomic) BOOL avoidsTolls; // @synthesize avoidsTolls=_avoidsTolls;
@property(nonatomic) unsigned int staticTravelTime; // @synthesize staticTravelTime=_staticTravelTime;
@property(nonatomic) unsigned int travelTimeConservativeEstimate; // @synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate;
@property(nonatomic) unsigned int travelTimeAggressiveEstimate; // @synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate;
@property(nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property(retain, nonatomic) NSMutableArray *routeNames; // @synthesize routeNames=_routeNames;
@property(retain, nonatomic) NSMutableArray *advisoryNotices; // @synthesize advisoryNotices=_advisoryNotices;
@property(retain, nonatomic) NSData *basicPoints; // @synthesize basicPoints=_basicPoints;
@property(nonatomic) unsigned int arrivalStepID; // @synthesize arrivalStepID=_arrivalStepID;
@property(retain, nonatomic) NSData *arrivalRouteID; // @synthesize arrivalRouteID=_arrivalRouteID;
@property(nonatomic) unsigned int departureStepID; // @synthesize departureStepID=_departureStepID;
@property(retain, nonatomic) NSData *departureRouteID; // @synthesize departureRouteID=_departureRouteID;
@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
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
@property(readonly, nonatomic) BOOL hasLaunchAndGoCardText;
- (id)guidanceEventAtIndex:(unsigned long long)arg1;
- (unsigned long long)guidanceEventsCount;
- (void)addGuidanceEvent:(id)arg1;
- (void)clearGuidanceEvents;
@property(readonly, nonatomic) BOOL hasAlertNonRecommendedRouteText;
@property(readonly, nonatomic) BOOL hasTrafficDescriptionLong;
@property(readonly, nonatomic) BOOL hasTrafficDescription;
- (id)endingRouteInstructionAtIndex:(unsigned long long)arg1;
- (unsigned long long)endingRouteInstructionsCount;
- (void)addEndingRouteInstruction:(id)arg1;
- (void)clearEndingRouteInstructions;
- (id)startingRouteInstructionAtIndex:(unsigned long long)arg1;
- (unsigned long long)startingRouteInstructionsCount;
- (void)addStartingRouteInstruction:(id)arg1;
- (void)clearStartingRouteInstructions;
- (id)routeDescriptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)routeDescriptionsCount;
- (void)addRouteDescription:(id)arg1;
- (void)clearRouteDescriptions;
@property(readonly, nonatomic) BOOL hasRoutePlanningDescription;
- (void)setIncidentEndOffsetsInRoutes:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)incidentEndOffsetsInRouteAtIndex:(unsigned long long)arg1;
- (void)addIncidentEndOffsetsInRoute:(unsigned int)arg1;
- (void)clearIncidentEndOffsetsInRoutes;
@property(readonly, nonatomic) unsigned int *incidentEndOffsetsInRoutes;
@property(readonly, nonatomic) unsigned long long incidentEndOffsetsInRoutesCount;
- (void)setIncidentIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)incidentIndicesAtIndex:(unsigned long long)arg1;
- (void)addIncidentIndices:(unsigned int)arg1;
- (void)clearIncidentIndices;
@property(readonly, nonatomic) unsigned int *incidentIndices;
@property(readonly, nonatomic) unsigned long long incidentIndicesCount;
@property(readonly, nonatomic) BOOL hasUnpackedLatLngVertices;
- (id)enrouteNoticeAtIndex:(unsigned long long)arg1;
- (unsigned long long)enrouteNoticesCount;
- (void)addEnrouteNotice:(id)arg1;
- (void)clearEnrouteNotices;
@property(nonatomic) BOOL hasAvoidsTraffic;
@property(nonatomic) BOOL hasAvoidsHighways;
@property(nonatomic) BOOL hasAvoidsTolls;
@property(nonatomic) BOOL hasStaticTravelTime;
@property(nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property(nonatomic) BOOL hasTravelTimeAggressiveEstimate;
- (int)StringAsAdvisorys:(id)arg1;
- (id)advisorysAsString:(int)arg1;
- (void)setAdvisorys:(int *)arg1 count:(unsigned long long)arg2;
- (int)advisoryAtIndex:(unsigned long long)arg1;
- (void)addAdvisory:(int)arg1;
- (void)clearAdvisorys;
@property(readonly, nonatomic) int *advisorys;
@property(readonly, nonatomic) unsigned long long advisorysCount;
@property(nonatomic) BOOL hasHistoricTravelTime;
- (id)routeNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)routeNamesCount;
- (void)addRouteName:(id)arg1;
- (void)clearRouteNames;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (void)clearTrafficColorOffsets;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)clearTrafficColors;
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned long long trafficColorsCount;
- (id)advisoryNoticeAtIndex:(unsigned long long)arg1;
- (unsigned long long)advisoryNoticesCount;
- (void)addAdvisoryNotice:(id)arg1;
- (void)clearAdvisoryNotices;
@property(readonly, nonatomic) BOOL hasBasicPoints;
@property(nonatomic) BOOL hasArrivalStepID;
@property(readonly, nonatomic) BOOL hasArrivalRouteID;
@property(nonatomic) BOOL hasDepartureStepID;
@property(readonly, nonatomic) BOOL hasDepartureRouteID;
- (int)StringAsDrivingSide:(id)arg1;
- (id)drivingSideAsString:(int)arg1;
@property(nonatomic) BOOL hasDrivingSide;
@property(nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property(readonly, nonatomic) BOOL hasZilchPoints;
- (int)StringAsRouteType:(id)arg1;
- (id)routeTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRouteType;
@property(nonatomic) int routeType; // @synthesize routeType=_routeType;
@property(readonly, nonatomic) BOOL hasRouteID;
@property(nonatomic) BOOL hasExpectedTime;
@property(nonatomic) BOOL hasDistance;
@property(readonly, nonatomic) BOOL hasPhoneticName;
@property(readonly, nonatomic) BOOL hasName;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (void)addStep:(id)arg1;
- (void)clearSteps;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void)dealloc;
@property(nonatomic) BOOL hasIsOfflineResponse;
@property(nonatomic) BOOL isOfflineResponse;
- (int)transportTypeForStep:(id)arg1;
- (BOOL)isContingentRoute;
- (BOOL)isMainOrAlternateRoute;
- (BOOL)isContingentRouteFor:(id)arg1 afterPoint:(unsigned int)arg2 mainRoutes:(id)arg3;
- (id)newETARouteFromStepIndex:(unsigned long long)arg1 stepPercentRemaining:(double)arg2;
- (id)newETARoute;
- (id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(BOOL)arg2 uniquePointRange:(struct _NSRange *)arg3;
- (unsigned long long)indexForStepID:(unsigned long long)arg1;
- (id)simplifiedDescription;
- (id)debugDescription;
- (unsigned long long)stepIndexForPointIndex:(unsigned int)arg1;
- (unsigned long long)distanceFromStepIndex:(unsigned long long)arg1 toStepIndex:(unsigned long long)arg2;
- (BOOL)unpackBasicPoints;
- (BOOL)unpackZilchPoints;
- (BOOL)unpackLatLngVertices;
@property(readonly) unsigned int pointCount;
- (CDStruct_c3b9c2ee)pointAt:(unsigned int)arg1;
- (void *)controlPoints;

@end

