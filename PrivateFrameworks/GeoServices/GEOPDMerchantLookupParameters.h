//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocation, NSString, PBUnknownFields;

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _transactionLocationAge;
    double _transactionTimestamp;
    NSString *_merchantCode;
    NSString *_paymentNetwork;
    NSString *_rawMerchantCode;
    GEOLocation *_transactionLocation;
    struct {
        unsigned int transactionLocationAge:1;
        unsigned int transactionTimestamp:1;
    } _has;
}

@property(retain, nonatomic) NSString *rawMerchantCode; // @synthesize rawMerchantCode=_rawMerchantCode;
@property(nonatomic) double transactionLocationAge; // @synthesize transactionLocationAge=_transactionLocationAge;
@property(retain, nonatomic) GEOLocation *transactionLocation; // @synthesize transactionLocation=_transactionLocation;
@property(nonatomic) double transactionTimestamp; // @synthesize transactionTimestamp=_transactionTimestamp;
@property(retain, nonatomic) NSString *merchantCode; // @synthesize merchantCode=_merchantCode;
@property(retain, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
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
@property(readonly, nonatomic) BOOL hasRawMerchantCode;
@property(nonatomic) BOOL hasTransactionLocationAge;
@property(readonly, nonatomic) BOOL hasTransactionLocation;
@property(nonatomic) BOOL hasTransactionTimestamp;
@property(readonly, nonatomic) BOOL hasMerchantCode;
@property(readonly, nonatomic) BOOL hasPaymentNetwork;

@end

