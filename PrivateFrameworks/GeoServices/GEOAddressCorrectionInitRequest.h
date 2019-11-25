//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSString, PBDataReader;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    NSString *_personID;
    NSString *_token;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _supportsMultipleAddresses;
    struct {
        unsigned int has_supportsMultipleAddresses:1;
        unsigned int read_personID:1;
        unsigned int read_token:1;
        unsigned int wrote_personID:1;
        unsigned int wrote_token:1;
        unsigned int wrote_supportsMultipleAddresses:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSupportsMultipleAddresses;
@property(nonatomic) BOOL supportsMultipleAddresses;
@property(retain, nonatomic) NSString *personID;
@property(readonly, nonatomic) BOOL hasPersonID;
- (void)_readPersonID;
@property(retain, nonatomic) NSString *token;
@property(readonly, nonatomic) BOOL hasToken;
- (void)_readToken;
- (id)initWithData:(id)arg1;
- (id)init;

@end

