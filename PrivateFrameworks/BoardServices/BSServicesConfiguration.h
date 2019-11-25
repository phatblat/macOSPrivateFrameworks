//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSDictionary, NSOrderedSet, NSSet, NSString;

@interface BSServicesConfiguration : NSObject <BSDescriptionProviding>
{
    NSDictionary *_domainsByIdentifier;
    NSOrderedSet *_orderedDomains;
}

+ (id)defaultConfiguration;
@property(readonly, copy, nonatomic) NSOrderedSet *_orderedDomains; // @synthesize _orderedDomains;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_initWithDomainsByIdentifier:(id)arg1;
- (id)domainsContainingServiceIdentifier:(id)arg1;
- (id)domainForMachName:(id)arg1;
- (id)domainForIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *domains;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

