//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentRecipientRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_recipientAddress;
    NSString *_senderAddress;
    unsigned long long _recipientAddressSource;
}

@property(nonatomic) unsigned long long recipientAddressSource; // @synthesize recipientAddressSource=_recipientAddressSource;
@property(copy, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(copy, nonatomic) NSString *recipientAddress; // @synthesize recipientAddress=_recipientAddress;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3;

@end
