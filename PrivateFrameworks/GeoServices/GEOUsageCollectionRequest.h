//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class GEOABExperimentAssignment, NSMutableArray;

@interface GEOUsageCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_abExperimentAssignments;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
    NSMutableArray *_timeToLeaveHypothesisFeedbackCollections;
    NSMutableArray *_timeToLeaveInitialTravelTimeFeedbackCollections;
}

+ (Class)timeToLeaveInitialTravelTimeFeedbackCollectionType;
+ (Class)timeToLeaveHypothesisFeedbackCollectionType;
+ (Class)abExperimentAssignmentType;
@property(retain, nonatomic) GEOABExperimentAssignment *tilesAbExperimentAssignment; // @synthesize tilesAbExperimentAssignment=_tilesAbExperimentAssignment;
@property(retain, nonatomic) NSMutableArray *timeToLeaveInitialTravelTimeFeedbackCollections; // @synthesize timeToLeaveInitialTravelTimeFeedbackCollections=_timeToLeaveInitialTravelTimeFeedbackCollections;
@property(retain, nonatomic) NSMutableArray *timeToLeaveHypothesisFeedbackCollections; // @synthesize timeToLeaveHypothesisFeedbackCollections=_timeToLeaveHypothesisFeedbackCollections;
@property(retain, nonatomic) NSMutableArray *abExperimentAssignments; // @synthesize abExperimentAssignments=_abExperimentAssignments;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTilesAbExperimentAssignment;
- (id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
- (void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1;
- (void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
- (id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeToLeaveHypothesisFeedbackCollectionsCount;
- (void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1;
- (void)clearTimeToLeaveHypothesisFeedbackCollections;
- (id)abExperimentAssignmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)abExperimentAssignmentsCount;
- (void)addAbExperimentAssignment:(id)arg1;
- (void)clearAbExperimentAssignments;

@end

