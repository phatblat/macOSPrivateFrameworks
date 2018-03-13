//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPXObserver.h>

#import "NSFileProviderChangeObserver.h"

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FPXChangesObserver : FPXObserver <NSFileProviderChangeObserver>
{
    NSMutableArray *_changedItems;
    NSMutableArray *_deletedItemIDs;
    NSData *_originalSyncAnchor;
    CDUnknownBlockType _finishedBlock;
}

@property(copy) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
- (void).cxx_destruct;
- (void)finishEnumeratingWithError:(id)arg1;
- (void)finishEnumeratingChangesUpToSyncAnchor:(id)arg1 moreComing:(BOOL)arg2;
- (void)didUpdateItems:(id)arg1;
- (void)didDeleteItemsWithIdentifiers:(id)arg1;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 previousChangeToken:(id)arg3;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

