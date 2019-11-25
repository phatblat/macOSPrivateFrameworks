//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSMutableDictionary;

@interface RBProcessStateChangeSet : NSObject <NSFastEnumeration>
{
    NSMutableDictionary *_stateChangesByIdentity;
}

- (void).cxx_destruct;
- (void)_diffOriginalStatesByIdentity:(id)arg1 withUpdatedStatesByIdentity:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)processIdentities;
- (id)processStateChangeForIdentity:(id)arg1;
- (void)applyChanges:(id)arg1;
@property(readonly, nonatomic) BOOL hasChanges;
- (id)initWithOriginalStatesByIdentity:(id)arg1 updatedStatesByIdentity:(id)arg2;
- (id)initWithChanges:(id)arg1;

@end

