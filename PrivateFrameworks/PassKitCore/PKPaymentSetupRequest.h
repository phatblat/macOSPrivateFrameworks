//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, PKPaymentSetupConfiguration;

@interface PKPaymentSetupRequest : NSObject <NSSecureCoding>
{
    PKPaymentSetupConfiguration *_configuration;
    NSArray *_paymentSetupFeatures;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *paymentSetupFeatures; // @synthesize paymentSetupFeatures=_paymentSetupFeatures;
@property(retain, nonatomic) PKPaymentSetupConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

