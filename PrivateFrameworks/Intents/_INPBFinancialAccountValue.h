//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields, _INPBBalanceAmountValue, _INPBDataString, _INPBValueMetadata;

@interface _INPBFinancialAccountValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBDataString *_accountNickname;
    NSString *_accountNumber;
    int _accountType;
    _INPBBalanceAmountValue *_balance;
    _INPBDataString *_organizationName;
    _INPBBalanceAmountValue *_secondaryBalance;
    _INPBValueMetadata *_valueMetadata;
    struct {
        unsigned int accountType:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBBalanceAmountValue *secondaryBalance; // @synthesize secondaryBalance=_secondaryBalance;
@property(retain, nonatomic) _INPBBalanceAmountValue *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) _INPBDataString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(retain, nonatomic) _INPBDataString *accountNickname; // @synthesize accountNickname=_accountNickname;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSecondaryBalance;
@property(readonly, nonatomic) BOOL hasBalance;
@property(readonly, nonatomic) BOOL hasOrganizationName;
- (int)StringAsAccountType:(id)arg1;
- (id)accountTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasAccountType;
@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(readonly, nonatomic) BOOL hasAccountNumber;
@property(readonly, nonatomic) BOOL hasAccountNickname;
@property(readonly, nonatomic) BOOL hasValueMetadata;

@end

