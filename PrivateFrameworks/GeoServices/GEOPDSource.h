//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSource : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_sourceId;
    NSString *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _resultProviderId;
    struct {
        unsigned int has_resultProviderId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_sourceId:1;
        unsigned int read_version:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_sourceId:1;
        unsigned int wrote_version:1;
        unsigned int wrote_resultProviderId:1;
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
@property(retain, nonatomic) NSString *version;
@property(readonly, nonatomic) BOOL hasVersion;
- (void)_readVersion;
@property(retain, nonatomic) NSString *sourceId;
@property(readonly, nonatomic) BOOL hasSourceId;
- (void)_readSourceId;
@property(nonatomic) BOOL hasResultProviderId;
@property(nonatomic) int resultProviderId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

