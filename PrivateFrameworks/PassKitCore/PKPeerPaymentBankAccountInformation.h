//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKBankAccountInformation.h>

@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation
{
}

- (void)setRoutingNumber:(id)arg1;
- (void)setAccountNumber:(id)arg1;
- (void)setBankName:(id)arg1;
- (id)_bankAccountInformationInKeychain;
- (void)_writeBankAccountInformationToKeychain;
- (id)_wrapperWithType:(unsigned long long)arg1;
- (void)updateToLatestKeychainData;
- (void)deleteAllLocalBankInformation;
- (void)deleteAllBankInformation;
- (id)init;

@end

