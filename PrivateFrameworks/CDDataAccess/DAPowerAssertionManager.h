//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMapTable, NSMutableSet;

@interface DAPowerAssertionManager : NSObject
{
    NSCountedSet *_contexts;
    NSMapTable *_groupIdentifierToContexts;
    NSMapTable *_contextToGroupIdentifier;
    NSMutableSet *_heldAsideGroupIdentifiers;
    NSCountedSet *_heldAsideContexts;
    NSMapTable *_contextToPowerAssertionRef;
}

+ (id)sharedPowerAssertionManager;
+ (void)vendDaemons:(Class)arg1;
@property(retain, nonatomic) NSMapTable *contextToPowerAssertionRef; // @synthesize contextToPowerAssertionRef=_contextToPowerAssertionRef;
@property(retain, nonatomic) NSCountedSet *heldAsideContexts; // @synthesize heldAsideContexts=_heldAsideContexts;
@property(retain, nonatomic) NSMutableSet *heldAsideGroupIdentifiers; // @synthesize heldAsideGroupIdentifiers=_heldAsideGroupIdentifiers;
@property(retain, nonatomic) NSMapTable *contextToGroupIdentifier; // @synthesize contextToGroupIdentifier=_contextToGroupIdentifier;
@property(retain, nonatomic) NSMapTable *groupIdentifierToContexts; // @synthesize groupIdentifierToContexts=_groupIdentifierToContexts;
@property(retain, nonatomic) NSCountedSet *contexts; // @synthesize contexts=_contexts;
- (void).cxx_destruct;
- (BOOL)_releaseAssertionForContext:(id)arg1;
- (BOOL)_retainAssertionForContext:(id)arg1;
- (void)reattainPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)dropPowerAssertionsForGroupIdentifier:(id)arg1;
- (id)stateString;
- (void)releasePowerAssertion:(id)arg1;
- (void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2;
- (unsigned long long)powerAssertionRetainCount:(id)arg1;
- (id)init;

@end

