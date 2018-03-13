//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface CLPMicroLocationModelEntry : PBCodable <NSCopying>
{
    double _generationTimestamp;
    NSData *_modelProtobuf;
    int _modelType;
    NSString *_modelUUID;
    NSString *_rtLOI;
    BOOL _hasAnonymizedMeasurements;
    struct {
        unsigned int generationTimestamp:1;
        unsigned int modelType:1;
        unsigned int hasAnonymizedMeasurements:1;
    } _has;
}

@property(nonatomic) BOOL hasAnonymizedMeasurements; // @synthesize hasAnonymizedMeasurements=_hasAnonymizedMeasurements;
@property(retain, nonatomic) NSData *modelProtobuf; // @synthesize modelProtobuf=_modelProtobuf;
@property(retain, nonatomic) NSString *rtLOI; // @synthesize rtLOI=_rtLOI;
@property(nonatomic) double generationTimestamp; // @synthesize generationTimestamp=_generationTimestamp;
@property(retain, nonatomic) NSString *modelUUID; // @synthesize modelUUID=_modelUUID;
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
- (int)StringAsModelType:(id)arg1;
- (id)modelTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasModelType;
@property(nonatomic) int modelType; // @synthesize modelType=_modelType;
@property(nonatomic) BOOL hasHasAnonymizedMeasurements;
@property(readonly, nonatomic) BOOL hasModelProtobuf;
@property(readonly, nonatomic) BOOL hasRtLOI;
@property(nonatomic) BOOL hasGenerationTimestamp;
@property(readonly, nonatomic) BOOL hasModelUUID;

@end

