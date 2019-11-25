//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

@interface GEOFareOptions : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _paymentType;
    int _preferredSurchargeType;
    struct {
        unsigned int has_paymentType:1;
        unsigned int has_preferredSurchargeType:1;
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
- (int)StringAsPaymentType:(id)arg1;
- (id)paymentTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPaymentType;
@property(nonatomic) int paymentType;
@property(nonatomic) BOOL hasPreferredSurchargeType;
@property(nonatomic) int preferredSurchargeType;

@end

