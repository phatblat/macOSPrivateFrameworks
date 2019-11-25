//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCSecureCoding.h"
#import "RBSProcessMatching.h"

@class NSString, RBSProcessIdentity, RBSProcessPredicateImpl;

@interface RBSProcessPredicate : NSObject <BSXPCSecureCoding, RBSProcessMatching>
{
    RBSProcessPredicateImpl *_predicate;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)predicateMatchingPredicates:(id)arg1;
+ (id)predicateMatching:(id)arg1;
+ (id)predicate;
+ (id)predicatePowerLogProcesses;
+ (id)predicateMatchingEuid:(unsigned int)arg1;
+ (id)predicateMatchingExtensionPoint:(id)arg1;
+ (id)predicateMatchingBundleIdentifier:(id)arg1;
+ (id)predicateMatchingHandle:(id)arg1;
+ (id)predicateMatchingIdentifier:(id)arg1;
+ (id)predicateMatchingTarget:(id)arg1;
+ (id)predicateMatchingIdentity:(id)arg1;
+ (id)predicateMatchingServiceName:(id)arg1;
+ (id)predicateMatchingJobLabel:(id)arg1;
@property(readonly, nonatomic) RBSProcessPredicateImpl *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)arg1;
- (id)initWithPredicate:(id)arg1;
@property(readonly, nonatomic) unsigned int euid;
@property(readonly, copy, nonatomic) NSString *extensionPoint;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)processIdentifier;
@property(readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property(readonly, copy, nonatomic) NSString *serviceName;
@property(readonly, copy, nonatomic) NSString *jobLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

