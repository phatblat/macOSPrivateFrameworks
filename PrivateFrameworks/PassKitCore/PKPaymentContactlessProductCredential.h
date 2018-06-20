//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class NSDictionary, NSString, PKPaymentSetupProduct;

@interface PKPaymentContactlessProductCredential : PKPaymentCredential
{
    NSString *_productIdentifier;
    NSDictionary *_readerModeMetadata;
    NSString *_cardSessionToken;
    PKPaymentSetupProduct *_product;
}

@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
@property(copy, nonatomic) NSString *cardSessionToken; // @synthesize cardSessionToken=_cardSessionToken;
@property(copy, nonatomic) NSDictionary *readerModeMetadata; // @synthesize readerModeMetadata=_readerModeMetadata;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void).cxx_destruct;
- (void)setRequirementsResponse:(id)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1 cardSessionToken:(id)arg2;
- (id)initWithPaymentSetupProduct:(id)arg1;
- (id)init;

@end

