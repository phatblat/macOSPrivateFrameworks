//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABDebugPanelExperimentBranch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_branchLabel;
    NSString *_branchName;
    NSString *_experimentId;
    NSString *_experimentName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_branchLabel:1;
        unsigned int read_branchName:1;
        unsigned int read_experimentId:1;
        unsigned int read_experimentName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_branchLabel:1;
        unsigned int wrote_branchName:1;
        unsigned int wrote_experimentId:1;
        unsigned int wrote_experimentName:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *branchName;
@property(readonly, nonatomic) BOOL hasBranchName;
- (void)_readBranchName;
@property(retain, nonatomic) NSString *branchLabel;
@property(readonly, nonatomic) BOOL hasBranchLabel;
- (void)_readBranchLabel;
@property(retain, nonatomic) NSString *experimentName;
@property(readonly, nonatomic) BOOL hasExperimentName;
- (void)_readExperimentName;
@property(retain, nonatomic) NSString *experimentId;
@property(readonly, nonatomic) BOOL hasExperimentId;
- (void)_readExperimentId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

