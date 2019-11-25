//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXIDCManagerSecurityDelegate.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface AXHASecurityHelper : NSObject <AXIDCManagerSecurityDelegate>
{
    struct __SecIdentity *_appleIDIdentity;
    NSObject<OS_dispatch_queue> *_securityQueue;
    NSArray *_certificateDescription;
}

+ (id)sharedHelper;
@property(retain, nonatomic) NSArray *certificateDescription; // @synthesize certificateDescription=_certificateDescription;
- (void).cxx_destruct;
- (BOOL)shouldTrustStream:(id)arg1;
- (id)certificateChainFromTrust:(struct __SecTrust *)arg1;
- (id)certificateChainForIdentity:(struct __SecIdentity *)arg1;
- (id)trustChain;
- (id)securityTrustChainForStream:(id)arg1;
- (BOOL)trustChainAvailable;
- (void)prepareHelper;
- (void)appleIDDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

