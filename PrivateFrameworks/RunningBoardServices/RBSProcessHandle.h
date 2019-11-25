//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSXPCSecureCoding.h"
#import "NSSecureCoding.h"
#import "RBSProcessIdentifier.h"

@class BSAuditToken, BSMachPortTaskNameRight, BSProcessHandle, NSObject<OS_xpc_object>, NSString, RBSProcessBundle, RBSProcessExitContext, RBSProcessIdentity, RBSProcessInstance, RBSProcessLimitations, RBSProcessMonitor, RBSProcessState;

@interface RBSProcessHandle : NSObject <BSDescriptionProviding, BSXPCSecureCoding, RBSProcessIdentifier, NSSecureCoding>
{
    unsigned long long _ipcID;
    BSMachPortTaskNameRight *_lifePort;
    RBSProcessIdentity *_identity;
    RBSProcessMonitor *_monitor;
    BSProcessHandle *_legacyHandle;
    NSObject<OS_xpc_object> *_codedHandle;
    BOOL _reported;
    RBSProcessBundle *_bundle;
    RBSProcessInstance *_instance;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (BOOL)supportsSecureCoding;
+ (id)observeForImminentAssertionsExpiration:(CDUnknownBlockType)arg1;
+ (id)handleForLegacyHandle:(id)arg1 error:(out id *)arg2;
+ (void)clearAllHandles;
+ (id)_cacheHandle:(id)arg1;
+ (id)_cachedHandleForKey:(id)arg1;
+ (id)handleForKey:(unsigned long long)arg1 fetchIfNeeded:(BOOL)arg2;
+ (id)handleForPredicate:(id)arg1 error:(out id *)arg2;
+ (id)handleForIdentifier:(id)arg1 error:(out id *)arg2;
+ (id)currentProcess;
@property(readonly, nonatomic) BSMachPortTaskNameRight *lifePort; // @synthesize lifePort=_lifePort;
@property(readonly, copy, nonatomic) RBSProcessInstance *instance; // @synthesize instance=_instance;
@property(readonly, nonatomic) RBSProcessBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic, getter=isReported) BOOL reported; // @synthesize reported=_reported;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)_fullEncode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)arg1;
- (int)rbs_pid;
- (void)plugInHandshakeComplete;
- (id)legacyHandle;
@property(readonly, copy, nonatomic) BSAuditToken *auditToken;
- (void)fullEncode:(id)arg1 forKey:(id)arg2;
- (void)_keepAlive;
- (id)currentStateMatchingDescriptor:(id)arg1;
- (id)initWithIdentity:(id)arg1;
- (id)initWithInstance:(id)arg1 lifePort:(id)arg2 bundleData:(id)arg3 reported:(BOOL)arg4;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)intendToExitWith:(id)arg1;
- (void)monitorForDeath:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) RBSProcessHandle *hostProcess;
@property(readonly, nonatomic) RBSProcessLimitations *activeLimitations;
@property(readonly, nonatomic) RBSProcessExitContext *lastExitContext;
@property(readonly, nonatomic) RBSProcessState *currentState;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property(readonly, nonatomic) int pid;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

