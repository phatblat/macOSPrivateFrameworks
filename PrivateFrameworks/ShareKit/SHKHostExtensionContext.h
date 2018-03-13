//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "SHKHostExtensionContextProtocol.h"

@class NSString, SHKSharingService;

@interface SHKHostExtensionContext : NSExtensionContext <SHKHostExtensionContextProtocol>
{
    id <NSSharingExtensionContextProtocol> _remote;
    SHKSharingService *_service;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property __weak SHKSharingService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)invalidateRemoteWindowControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startSessionTeardownByCallingContinuationBlock:(CDUnknownBlockType)arg1;
- (void)animateRemoteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendOptionsDictionaryToRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelServiceUI;
- (id)remote;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

