//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBConfidenceScore.h"

@class NSArray, NSString;

@interface _INPBConfidenceScore : PBCodable <_INPBConfidenceScore, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int aggregateScore:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    float _aggregateScore;
    NSArray *_components;
}

+ (BOOL)supportsSecureCoding;
+ (Class)componentsType;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(nonatomic) float aggregateScore; // @synthesize aggregateScore=_aggregateScore;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)componentsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long componentsCount;
- (void)addComponents:(id)arg1;
- (void)clearComponents;
@property(nonatomic) BOOL hasAggregateScore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

