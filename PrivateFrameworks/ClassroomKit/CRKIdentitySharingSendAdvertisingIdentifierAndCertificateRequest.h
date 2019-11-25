//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSData, NSSet, NSUUID;

@interface CRKIdentitySharingSendAdvertisingIdentifierAndCertificateRequest : CATTaskRequest
{
    NSSet *_recipients;
    NSUUID *_advertisingIdentifier;
    NSData *_activeCertificateData;
    NSData *_stagedCertificateData;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *stagedCertificateData; // @synthesize stagedCertificateData=_stagedCertificateData;
@property(retain, nonatomic) NSData *activeCertificateData; // @synthesize activeCertificateData=_activeCertificateData;
@property(retain, nonatomic) NSUUID *advertisingIdentifier; // @synthesize advertisingIdentifier=_advertisingIdentifier;
@property(retain, nonatomic) NSSet *recipients; // @synthesize recipients=_recipients;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

