//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RBStateCaptureManaging.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, RBSStateCaptureSet;

@interface RBStateCaptureManager : NSObject <RBStateCaptureManaging>
{
    NSMutableDictionary *_itemsByIdentifier;
    RBSStateCaptureSet *_itemsWithoutIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)identifiers;
- (void)removeItem:(id)arg1;
- (void)removeItemWithIdentifier:(id)arg1;
- (void)addItemWithTitle:(id)arg1 identifier:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addItem:(id)arg1;
- (void)addItem:(id)arg1 withIdentifier:(id)arg2;
- (id)stateForSubsystem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
