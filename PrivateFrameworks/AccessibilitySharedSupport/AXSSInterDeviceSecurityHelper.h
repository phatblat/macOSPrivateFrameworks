//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface AXSSInterDeviceSecurityHelper : NSObject
{
    struct __SecIdentity *_cachedAppleIDIdentity;
    NSArray *_cachedCertificateChain;
    NSArray *_cachedSecurityIdentity;
}

- (void).cxx_destruct;
- (BOOL)shouldTrustCertificate:(id)arg1;
- (id)securityIdentity;
- (id)_certificateChain;
- (struct __SecIdentity *)_appleIDIdentity;
- (void)_appleIDsDidChange;
- (void)dealloc;
- (id)init;

@end

