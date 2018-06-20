//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDABClientDatasetMetadata, NSMutableArray, PBUnknownFields;

@interface GEOABSecondPartyPlaceRequestClientMetaData : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_clientConfigs;
    GEOPDABClientDatasetMetadata *_clientDatasetMetadata;
    NSMutableArray *_serverAbAssignments;
}

+ (Class)clientConfigType;
+ (Class)serverAbAssignmentType;
@property(retain, nonatomic) GEOPDABClientDatasetMetadata *clientDatasetMetadata; // @synthesize clientDatasetMetadata=_clientDatasetMetadata;
@property(retain, nonatomic) NSMutableArray *clientConfigs; // @synthesize clientConfigs=_clientConfigs;
@property(retain, nonatomic) NSMutableArray *serverAbAssignments; // @synthesize serverAbAssignments=_serverAbAssignments;
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
@property(readonly, nonatomic) BOOL hasClientDatasetMetadata;
- (id)clientConfigAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientConfigsCount;
- (void)addClientConfig:(id)arg1;
- (void)clearClientConfigs;
- (id)serverAbAssignmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)serverAbAssignmentsCount;
- (void)addServerAbAssignment:(id)arg1;
- (void)clearServerAbAssignments;

@end

