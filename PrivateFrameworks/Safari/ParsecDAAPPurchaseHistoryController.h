//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKDAAPPurchaseHistoryObserver.h"

@class CKDAAPPurchaseHistory, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface ParsecDAAPPurchaseHistoryController : NSObject <CKDAAPPurchaseHistoryObserver>
{
    CKDAAPPurchaseHistory *_daapPurchaseHistory;
    NSMutableSet *_ownedItemIdentifiers;
    NSObject<OS_dispatch_queue> *_ownedItemIdentifiersAccessQueue;
    BOOL _finishedLoading;
}

+ (id)sharedController;
@property(getter=isFinishedLoading) BOOL finishedLoading; // @synthesize finishedLoading=_finishedLoading;
- (void).cxx_destruct;
- (void)_removeOwnedItem:(id)arg1;
- (void)_addOwnedItem:(id)arg1;
- (void)_populateOwnedItemIdentifiers;
- (id)_init;
- (void)daapPurchaseHistory:(id)arg1 didChangeWithItemsAdded:(id)arg2 changed:(id)arg3 removed:(id)arg4;
- (BOOL)purchaseHistoryContainsContentWithIdentifier:(id)arg1;
- (void)addHistoryLoadingCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
