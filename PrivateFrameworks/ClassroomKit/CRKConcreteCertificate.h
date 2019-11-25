//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKCertificate.h"

@class NSArray, NSData, NSDateInterval, NSString;

@interface CRKConcreteCertificate : NSObject <CRKCertificate>
{
    struct __SecCertificate *_underlyingCertificate;
}

+ (id)certificateWithData:(id)arg1;
@property(readonly, nonatomic) struct __SecCertificate *underlyingCertificate; // @synthesize underlyingCertificate=_underlyingCertificate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long keySizeInBits;
@property(readonly, nonatomic) unsigned int hashingAlgorithm;
@property(readonly, nonatomic, getter=isCertificateAuthority) BOOL certificateAuthority;
@property(readonly, nonatomic, getter=isTemporallyValid) BOOL temporallyValid;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;
@property(readonly, nonatomic) NSDateInterval *validityDateInterval;
@property(readonly, copy, nonatomic) NSString *fingerprint;
@property(readonly, copy, nonatomic) NSArray *commonNames;
- (id)initWithCertificate:(struct __SecCertificate *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

