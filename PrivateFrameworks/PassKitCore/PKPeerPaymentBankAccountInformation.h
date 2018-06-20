//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface PKPeerPaymentBankAccountInformation : NSObject <NSSecureCoding>
{
    NSString *_accountNumber;
    NSString *_routingNumber;
    NSString *_bankName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *routingNumber; // @synthesize routingNumber=_routingNumber;
@property(copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
- (void).cxx_destruct;
- (void)_deleteBankAccountKeychainData;
- (id)_bankAccountInformationInKeychain;
- (void)_writeBankAccountInformationToKeychain;
- (id)_wrapperWithType:(unsigned long long)arg1;
- (id)description;
- (void)updateToLatestKeychainData;
- (BOOL)isValid;
- (void)deleteAllBankInformation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

