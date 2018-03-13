//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDFeatureBuilding, GEOPDFeaturePOI, GEOPDFeatureVenue, PBUnknownFields;

@interface GEOPDVenueFeatureValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDFeatureBuilding *_featureBuilding;
    GEOPDFeaturePOI *_featurePoi;
    GEOPDFeatureVenue *_featureVenue;
}

@property(retain, nonatomic) GEOPDFeaturePOI *featurePoi; // @synthesize featurePoi=_featurePoi;
@property(retain, nonatomic) GEOPDFeatureBuilding *featureBuilding; // @synthesize featureBuilding=_featureBuilding;
@property(retain, nonatomic) GEOPDFeatureVenue *featureVenue; // @synthesize featureVenue=_featureVenue;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasFeaturePoi;
@property(readonly, nonatomic) BOOL hasFeatureBuilding;
@property(readonly, nonatomic) BOOL hasFeatureVenue;

@end

