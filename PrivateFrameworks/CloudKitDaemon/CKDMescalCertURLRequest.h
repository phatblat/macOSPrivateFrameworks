//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDMescalCertURLRequest : CKDURLRequest
{
    NSData *_mescalCert;
}

@property(retain, nonatomic) NSData *mescalCert; // @synthesize mescalCert=_mescalCert;
- (void).cxx_destruct;
- (void)requestDidParse509CertObject:(id)arg1;
- (void)requestDidParsePlaintextObject:(id)arg1;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requiresDeviceID;
- (BOOL)requiresSignature;
- (id)requestOptions;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (BOOL)hasRequestBody;
- (id)httpMethod;

@end

