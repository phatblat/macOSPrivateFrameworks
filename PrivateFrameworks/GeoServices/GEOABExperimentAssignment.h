//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOABDebugPanelExperimentBranch, NSString, PBUnknownFields;

@interface GEOABExperimentAssignment : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;
    int _placeRequestType;
    NSString *_querySubstring;
    int _serviceType;
    struct {
        unsigned int placeRequestType:1;
        unsigned int serviceType:1;
    } _has;
}

@property(retain, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch; // @synthesize debugExperimentBranch=_debugExperimentBranch;
@property(retain, nonatomic) NSString *querySubstring; // @synthesize querySubstring=_querySubstring;
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
@property(readonly, nonatomic) BOOL hasDebugExperimentBranch;
@property(readonly, nonatomic) BOOL hasQuerySubstring;
- (int)StringAsPlaceRequestType:(id)arg1;
- (id)placeRequestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceRequestType;
@property(nonatomic) int placeRequestType; // @synthesize placeRequestType=_placeRequestType;
- (int)StringAsServiceType:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasServiceType;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;

@end

