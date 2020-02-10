//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RBAssertionCollection, RBProcessIndex, RBProcessMap;

@interface RBAssertionStateResolver : NSObject
{
    RBAssertionCollection *_assertionCollection;
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    id <RBDomainAttributeManaging> _domainAttributeManager;
    id <RBBundlePropertiesManaging> _bundlePropertiesManager;
    id <RBEntitlementManaging> _entitlementManager;
}

@property(retain, nonatomic) id <RBEntitlementManaging> entitlementManager; // @synthesize entitlementManager=_entitlementManager;
@property(retain, nonatomic) id <RBBundlePropertiesManaging> bundlePropertiesManager; // @synthesize bundlePropertiesManager=_bundlePropertiesManager;
@property(retain, nonatomic) id <RBDomainAttributeManaging> domainAttributeManager; // @synthesize domainAttributeManager=_domainAttributeManager;
@property(retain, nonatomic) RBProcessMap *stateMap; // @synthesize stateMap=_stateMap;
@property(retain, nonatomic) RBProcessIndex *processIndex; // @synthesize processIndex=_processIndex;
@property(retain, nonatomic) RBAssertionCollection *assertionCollection; // @synthesize assertionCollection=_assertionCollection;
- (void).cxx_destruct;
- (id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg1;
- (id)resolveForAssertions:(id)arg1;

@end
