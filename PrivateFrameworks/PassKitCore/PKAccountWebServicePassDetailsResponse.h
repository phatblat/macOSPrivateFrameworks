//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray, NSString, NSURL, PKPaymentRemoteCredential;

@interface PKAccountWebServicePassDetailsResponse : PKAccountWebServiceResponse
{
    NSString *_provisioningIdentifier;
    long long _cardType;
    long long _status;
    NSURL *_passURL;
    NSString *_passTypeIdentifier;
    NSString *_passSerialNumber;
    NSString *_ownershipTokenIdentifier;
    NSArray *_postProvisioningContent;
    PKPaymentRemoteCredential *_remoteCredential;
}

@property(retain, nonatomic) PKPaymentRemoteCredential *remoteCredential; // @synthesize remoteCredential=_remoteCredential;
@property(readonly, nonatomic) NSArray *postProvisioningContent; // @synthesize postProvisioningContent=_postProvisioningContent;
@property(readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // @synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier;
@property(readonly, copy, nonatomic) NSString *passSerialNumber; // @synthesize passSerialNumber=_passSerialNumber;
@property(readonly, copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(readonly, copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(readonly, copy, nonatomic) NSString *provisioningIdentifier; // @synthesize provisioningIdentifier=_provisioningIdentifier;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

