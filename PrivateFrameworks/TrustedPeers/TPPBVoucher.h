//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface TPPBVoucher : PBCodable <NSCopying>
{
    NSString *_beneficiary;
    int _reason;
    NSString *_sponsor;
    struct {
        unsigned int reason:1;
    } _has;
}

@property(retain, nonatomic) NSString *sponsor; // @synthesize sponsor=_sponsor;
@property(retain, nonatomic) NSString *beneficiary; // @synthesize beneficiary=_beneficiary;
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
@property(readonly, nonatomic) BOOL hasSponsor;
@property(readonly, nonatomic) BOOL hasBeneficiary;
- (int)StringAsReason:(id)arg1;
- (id)reasonAsString:(int)arg1;
@property(nonatomic) BOOL hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;

@end

