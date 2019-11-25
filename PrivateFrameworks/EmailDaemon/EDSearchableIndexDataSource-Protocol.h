//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDSearchableIndex, EDSearchableIndexUpdates, EFCancelationToken, NSArray, NSDictionary, NSString;

@protocol EDSearchableIndexDataSource <NSObject>
- (NSDictionary *)verificationDataSamplesForSearchableIndex:(EDSearchableIndex *)arg1 count:(unsigned long long)arg2;
- (NSArray *)searchableIndex:(EDSearchableIndex *)arg1 invalidateItemsInTransactions:(NSArray *)arg2;
- (void)searchableIndex:(EDSearchableIndex *)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
- (NSArray *)searchableIndex:(EDSearchableIndex *)arg1 assignTransaction:(long long)arg2 updates:(EDSearchableIndexUpdates *)arg3;
- (NSArray *)childIdentifiersToRemoveFromSearchableIndex:(EDSearchableIndex *)arg1 whenRemovingParentIdentifiers:(NSArray *)arg2;
- (void)searchableIndex:(EDSearchableIndex *)arg1 willRemoveIdentifiers:(NSArray *)arg2 type:(long long)arg3;
- (void)searchableIndex:(EDSearchableIndex *)arg1 assignIndexingType:(long long)arg2 forIdentifiers:(NSArray *)arg3;
- (long long)indexingTypeForSearchableIndex:(EDSearchableIndex *)arg1 item:(id <EDIndexableItem>)arg2;
- (EDSearchableIndexUpdates *)updatesForSearchableIndex:(EDSearchableIndex *)arg1 excludingIdentifiers:(NSArray *)arg2 count:(unsigned long long)arg3 cancelationToken:(EFCancelationToken *)arg4;

@optional
- (void)searchableIndex:(EDSearchableIndex *)arg1 prepareToIndexAttachmentsForMessageWithIdentifier:(NSString *)arg2;
- (void)searchableIndex:(EDSearchableIndex *)arg1 foundAttachmentPaths:(NSArray *)arg2 forMessagePersistentID:(NSString *)arg3;
@end

