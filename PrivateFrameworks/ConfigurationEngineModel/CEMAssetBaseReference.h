//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMAssetBaseReference : CEMPayloadBase
{
    NSString *_payloadDataURL;
    NSString *_payloadContentType;
    NSNumber *_payloadSize;
    NSString *_payloadHashSHA256;
    NSArray *_payloadCertificatePinningIdentifiers;
}

+ (id)buildWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4 withCertificatePinningIdentifiers:(id)arg5;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSArray *payloadCertificatePinningIdentifiers; // @synthesize payloadCertificatePinningIdentifiers=_payloadCertificatePinningIdentifiers;
@property(copy, nonatomic) NSString *payloadHashSHA256; // @synthesize payloadHashSHA256=_payloadHashSHA256;
@property(copy, nonatomic) NSNumber *payloadSize; // @synthesize payloadSize=_payloadSize;
@property(copy, nonatomic) NSString *payloadContentType; // @synthesize payloadContentType=_payloadContentType;
@property(copy, nonatomic) NSString *payloadDataURL; // @synthesize payloadDataURL=_payloadDataURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

