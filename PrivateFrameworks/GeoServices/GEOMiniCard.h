//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOFormattedString, NSString, PBDataReader, PBUnknownFields;

@interface GEOMiniCard : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_buttonText;
    GEOFormattedString *_detail;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _shouldEmphasize;
    struct {
        unsigned int has_shouldEmphasize:1;
        unsigned int read_unknownFields:1;
        unsigned int read_buttonText:1;
        unsigned int read_detail:1;
        unsigned int read_title:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_buttonText:1;
        unsigned int wrote_detail:1;
        unsigned int wrote_title:1;
        unsigned int wrote_shouldEmphasize:1;
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
@property(nonatomic) BOOL hasShouldEmphasize;
@property(nonatomic) BOOL shouldEmphasize;
@property(retain, nonatomic) NSString *buttonText;
@property(readonly, nonatomic) BOOL hasButtonText;
- (void)_readButtonText;
@property(retain, nonatomic) GEOFormattedString *detail;
@property(readonly, nonatomic) BOOL hasDetail;
- (void)_readDetail;
@property(retain, nonatomic) GEOFormattedString *title;
@property(readonly, nonatomic) BOOL hasTitle;
- (void)_readTitle;
- (id)initWithData:(id)arg1;
- (id)init;

@end

