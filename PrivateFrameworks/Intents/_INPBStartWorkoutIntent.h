//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBDataString, _INPBDouble, _INPBIntentMetadata;

@interface _INPBStartWorkoutIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBDouble *_goalValue;
    _INPBIntentMetadata *_intentMetadata;
    int _workoutGoalUnitType;
    int _workoutLocationType;
    _INPBDataString *_workoutName;
    BOOL _isOpenEnded;
    struct {
        unsigned int workoutGoalUnitType:1;
        unsigned int workoutLocationType:1;
        unsigned int isOpenEnded:1;
    } _has;
}

+ (id)options;
@property(nonatomic) BOOL isOpenEnded; // @synthesize isOpenEnded=_isOpenEnded;
@property(retain, nonatomic) _INPBDouble *goalValue; // @synthesize goalValue=_goalValue;
@property(retain, nonatomic) _INPBDataString *workoutName; // @synthesize workoutName=_workoutName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsOpenEnded;
- (int)StringAsWorkoutLocationType:(id)arg1;
- (id)workoutLocationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasWorkoutLocationType;
@property(nonatomic) int workoutLocationType; // @synthesize workoutLocationType=_workoutLocationType;
- (int)StringAsWorkoutGoalUnitType:(id)arg1;
- (id)workoutGoalUnitTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasWorkoutGoalUnitType;
@property(nonatomic) int workoutGoalUnitType; // @synthesize workoutGoalUnitType=_workoutGoalUnitType;
@property(readonly, nonatomic) BOOL hasGoalValue;
@property(readonly, nonatomic) BOOL hasWorkoutName;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

@end

