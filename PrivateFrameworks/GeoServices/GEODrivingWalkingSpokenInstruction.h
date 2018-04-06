//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOFormattedString, NSMutableArray;

@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying>
{
    GEOFormattedString *_continueStage;
    NSMutableArray *_executionStages;
    GEOFormattedString *_initialStage;
    GEOFormattedString *_preparationStage;
    GEOFormattedString *_proceedStage;
    unsigned int _shortChainedInstructionIndex;
    struct {
        unsigned int shortChainedInstructionIndex:1;
    } _has;
}

+ (Class)executionStageType;
@property(nonatomic) unsigned int shortChainedInstructionIndex; // @synthesize shortChainedInstructionIndex=_shortChainedInstructionIndex;
@property(retain, nonatomic) NSMutableArray *executionStages; // @synthesize executionStages=_executionStages;
@property(retain, nonatomic) GEOFormattedString *preparationStage; // @synthesize preparationStage=_preparationStage;
@property(retain, nonatomic) GEOFormattedString *initialStage; // @synthesize initialStage=_initialStage;
@property(retain, nonatomic) GEOFormattedString *continueStage; // @synthesize continueStage=_continueStage;
@property(retain, nonatomic) GEOFormattedString *proceedStage; // @synthesize proceedStage=_proceedStage;
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
@property(nonatomic) BOOL hasShortChainedInstructionIndex;
- (id)executionStageAtIndex:(unsigned long long)arg1;
- (unsigned long long)executionStagesCount;
- (void)addExecutionStage:(id)arg1;
- (void)clearExecutionStages;
@property(readonly, nonatomic) BOOL hasPreparationStage;
@property(readonly, nonatomic) BOOL hasInitialStage;
@property(readonly, nonatomic) BOOL hasContinueStage;
@property(readonly, nonatomic) BOOL hasProceedStage;

@end
