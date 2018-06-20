//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class ABCAdministrator, DiagnosticExtensionController, NSObject<OS_dispatch_queue>, NSString;

@interface DiagCollectionServiceImpl : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *queue;
    DiagnosticExtensionController *deController;
    ABCAdministrator *_administrator;
}

@property(nonatomic) __weak ABCAdministrator *administrator; // @synthesize administrator=_administrator;
- (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)diagnosticExtensionController;
- (void)shutdown;
- (BOOL)assertEntitlement:(id)arg1 entitlement:(id)arg2;
- (void)collectPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)collectPayloadsWithIdentifier:(id)arg1 diagnosticExtensions:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

