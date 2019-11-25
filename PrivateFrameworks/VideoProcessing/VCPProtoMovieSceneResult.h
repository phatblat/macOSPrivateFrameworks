//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "VCPProtoResultLegacyConversionProtocol.h"

@class VCPProtoTimeRange;

@interface VCPProtoMovieSceneResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _distanceToPreviousScene;
    float _flickerScore;
    float _qualityScore;
    float _sceneprintDistanceToPreviousScene;
    VCPProtoTimeRange *_timeRange;
    struct {
        unsigned int distanceToPreviousScene:1;
        unsigned int flickerScore:1;
        unsigned int sceneprintDistanceToPreviousScene:1;
    } _has;
}

+ (id)resultFromLegacyDictionary:(id)arg1;
@property(nonatomic) float sceneprintDistanceToPreviousScene; // @synthesize sceneprintDistanceToPreviousScene=_sceneprintDistanceToPreviousScene;
@property(nonatomic) float flickerScore; // @synthesize flickerScore=_flickerScore;
@property(nonatomic) float distanceToPreviousScene; // @synthesize distanceToPreviousScene=_distanceToPreviousScene;
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
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
@property(nonatomic) BOOL hasSceneprintDistanceToPreviousScene;
@property(nonatomic) BOOL hasFlickerScore;
@property(nonatomic) BOOL hasDistanceToPreviousScene;
- (id)exportToLegacyDictionary;

@end

