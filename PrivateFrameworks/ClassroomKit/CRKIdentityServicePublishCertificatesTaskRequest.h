//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class CRKIdentityMarkedCertificate;

@interface CRKIdentityServicePublishCertificatesTaskRequest : CATTaskRequest
{
    CRKIdentityMarkedCertificate *_activeMarkedCertificate;
    CRKIdentityMarkedCertificate *_stagedMarkedCertificate;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) CRKIdentityMarkedCertificate *stagedMarkedCertificate; // @synthesize stagedMarkedCertificate=_stagedMarkedCertificate;
@property(retain, nonatomic) CRKIdentityMarkedCertificate *activeMarkedCertificate; // @synthesize activeMarkedCertificate=_activeMarkedCertificate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

