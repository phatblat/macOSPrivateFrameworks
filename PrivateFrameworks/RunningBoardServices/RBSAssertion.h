//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSArray, NSHashTable, NSString, RBSAssertionDescriptor, RBSAssertionIdentifier, RBSTarget;

@interface RBSAssertion : NSObject <BSDescriptionProviding>
{
    NSHashTable *_observers;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _warningHandler;
    struct os_unfair_lock_s _lock;
    RBSAssertionDescriptor *_descriptor;
    unsigned long long _state;
    id <RBSServiceLocalProtocol> _service;
}

- (void).cxx_destruct;
- (id)_observers;
- (void)_serverDidChangeIdentifier:(id)arg1;
- (void)_serverWillInvalidate;
- (void)_serverInvalidateWithError:(id)arg1;
- (BOOL)_clientInvalidateWithError:(out id *)arg1;
@property(readonly, copy, nonatomic) RBSAssertionDescriptor *descriptor;
@property(readonly, copy, nonatomic) RBSAssertionIdentifier *identifier;
@property(readonly, nonatomic) unsigned long long state;
- (id)_initWithDescriptor:(id)arg1 service:(id)arg2;
- (id)_initWithServerValidatedDescriptor:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)setExpirationWarningHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *attributes;
@property(readonly, nonatomic) RBSTarget *target;
@property(readonly, copy, nonatomic) NSString *explanation;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (oneway void)invalidate;
- (BOOL)invalidateWithError:(out id *)arg1;
- (oneway void)acquireWithInvalidationHandler:(CDUnknownBlockType)arg1;
- (BOOL)acquireWithError:(out id *)arg1;
- (id)initWithExplanation:(id)arg1 target:(id)arg2 attributes:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
