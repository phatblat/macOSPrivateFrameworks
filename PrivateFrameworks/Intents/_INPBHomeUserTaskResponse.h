//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBHomeUserTaskResponse.h"

@class NSString, _INPBHomeUserTask;

@interface _INPBHomeUserTaskResponse : PBCodable <_INPBHomeUserTaskResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int taskOutcome:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _taskOutcome;
    _INPBHomeUserTask *_userTask;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBHomeUserTask *userTask; // @synthesize userTask=_userTask;
@property(nonatomic) int taskOutcome; // @synthesize taskOutcome=_taskOutcome;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasUserTask;
- (int)StringAsTaskOutcome:(id)arg1;
- (id)taskOutcomeAsString:(int)arg1;
@property(nonatomic) BOOL hasTaskOutcome;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
