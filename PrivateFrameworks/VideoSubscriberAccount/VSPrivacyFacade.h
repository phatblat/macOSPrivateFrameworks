//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VSPrivacyServiceProtocol.h"

@class NSArray, NSOperationQueue, NSString, VSPrivacyVoucherLockbox;

@interface VSPrivacyFacade : NSObject <VSPrivacyServiceProtocol>
{
    VSPrivacyVoucherLockbox *_voucherLockbox;
    NSString *_service;
    NSOperationQueue *_privateQueue;
}

@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) VSPrivacyVoucherLockbox *voucherLockbox; // @synthesize voucherLockbox=_voucherLockbox;
- (void).cxx_destruct;
- (BOOL)reset;
@property(readonly, copy, nonatomic) NSArray *knownAppBundles;
- (BOOL)setAccessGranted:(BOOL)arg1 forBundle:(struct __CFBundle *)arg2;
- (BOOL)isAccessGrantedForBundle:(struct __CFBundle *)arg1;
- (void)_promptForAccessUsingAuditToken:(CDStruct_4c969caf)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestAccessForAuditToken:(CDStruct_4c969caf)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 identityProviderID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_voucherForProcess:(int)arg1 providerID:(id)arg2;
- (BOOL)setAccessGranted:(BOOL)arg1 forAuditToken:(CDStruct_4c969caf)arg2;
- (BOOL)isAccessGrantedForAuditToken:(CDStruct_4c969caf)arg1;
- (void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithVoucherLockbox:(id)arg1;
- (id)initWithService:(id)arg1 voucherLockbox:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

