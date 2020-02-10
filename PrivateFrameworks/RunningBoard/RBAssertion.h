//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "RBStateCapturing.h"

@class NSArray, NSSet, NSString, RBAssertionIntransientState, RBAssertionTransientState, RBConcreteTarget, RBInheritanceCollection, RBProcessState, RBSAssertionIdentifier, RBSProcessAssertionInfo, RBSProcessIdentifier, RBSystemState;

@interface RBAssertion : NSObject <BSDescriptionProviding, RBStateCapturing>
{
    struct os_unfair_lock_s _lock;
    RBConcreteTarget *_target;
    RBSAssertionIdentifier *_identifier;
    NSString *_explanation;
    NSArray *_attributes;
    RBSystemState *_systemState;
    RBProcessState *_processState;
    RBAssertionTransientState *_transientState;
    RBAssertionIntransientState *_intransientState;
    double _creationTime;
    unsigned long long _invalidationReason;
    unsigned long long _acquisitionCompletionPolicy;
    NSSet *_originatorInheritances;
    RBSProcessAssertionInfo *_assertionInfo;
    BOOL _suspended;
    BOOL _persistent;
    BOOL _active;
    BOOL _resolvedState;
    RBSProcessIdentifier *_originator;
    NSString *_description;
    id _plugInHoldToken;
}

+ (id)assertionWithIdentifier:(id)arg1 target:(id)arg2 explanation:(id)arg3 attributes:(id)arg4 originator:(id)arg5 context:(id)arg6;
+ (id)assertionWithDescriptor:(id)arg1 target:(id)arg2 originator:(id)arg3 context:(id)arg4;
@property(retain, nonatomic) id plugInHoldToken; // @synthesize plugInHoldToken=_plugInHoldToken;
@property(readonly, copy, nonatomic) RBAssertionIntransientState *intransientState; // @synthesize intransientState=_intransientState;
@property(readonly, copy) NSString *description; // @synthesize description=_description;
@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, copy, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(readonly, copy, nonatomic) RBSAssertionIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) RBSProcessIdentifier *originator; // @synthesize originator=_originator;
@property(readonly, copy, nonatomic) RBConcreteTarget *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)_initWithTarget:(id)arg1 identifier:(id)arg2 explanation:(id)arg3 attributes:(id)arg4 originator:(id)arg5 context:(id)arg6;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (BOOL)_lock_resolveStateWithContext:(id)arg1;
- (void)applyToSystemState:(id)arg1 withAttributeContext:(id)arg2;
- (void)applyToAssertionTransientState:(id)arg1 withAttributeContext:(id)arg2;
- (void)applyToProcessState:(id)arg1 withAttributeContext:(id)arg2;
- (id)updateProcessStateWithAttributeContext:(id)arg1;
- (BOOL)resolveStateWithContext:(id)arg1;
@property(readonly, nonatomic, getter=isPersistent) BOOL persistent; // @synthesize persistent=_persistent;
@property(readonly, nonatomic) BOOL suspendsOnOriginatorSuspension;
@property(readonly, nonatomic) NSSet *sourceEnvironments;
@property(readonly, nonatomic) BOOL hasDomainAttribute;
@property(readonly, nonatomic) BOOL hasHereditaryGrant;
@property(readonly, nonatomic) BOOL definesRelativeStartTime;
@property(readonly, copy, nonatomic) RBProcessState *processState;
@property(readonly, copy, nonatomic) RBInheritanceCollection *inheritances;
@property(readonly, nonatomic) BOOL invalidatesSynchronously;
@property(readonly, nonatomic) BOOL terminateTargetOnOriginatorExit;
@property(readonly, nonatomic) double warningDuration;
@property(readonly, nonatomic) unsigned long long legacyReason;
@property(readonly, nonatomic) double invalidationDuration;
@property(readonly, nonatomic) unsigned long long endPolicy;
@property(readonly, nonatomic) unsigned long long startPolicy;
- (unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)arg1;
@property(nonatomic) unsigned long long invalidationReason;
@property(readonly, nonatomic, getter=isValid) BOOL invalid;
@property(readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property(readonly, nonatomic, getter=isActive) BOOL active;
- (void)resume;
- (void)suspend;
- (void)deactivate;
- (void)activate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
