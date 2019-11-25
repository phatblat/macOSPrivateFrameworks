//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSXPCConnection, NSXPCInterface;

@interface SPKernelExtensionPolicy : NSObject
{
    NSArray *_currentPolicy;
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (BOOL)isKernelExtensionMDMAllowed:(id)arg1 bundleID:(id)arg2 error:(id *)arg3;
- (BOOL)removeMDMPayload:(id)arg1 error:(id *)arg2;
- (BOOL)installMDMPayload:(id)arg1 withTeams:(id)arg2 andExtensions:(id)arg3 error:(id *)arg4;
- (BOOL)setUserApprovalAllowed:(BOOL)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSArray *pendingApprovals;
@property(readonly, copy, nonatomic) NSArray *currentPolicy;
- (BOOL)updatePolicyItems:(id)arg1 error:(id *)arg2;
- (BOOL)teamIdentifierIsAllowed:(id)arg1 error:(id *)arg2;
- (BOOL)canLoadKernelExtensionInCache:(id)arg1 error:(id *)arg2;
- (BOOL)canLoadKernelExtension:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

