//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSSearchableItemAttributeSet, NSArray, NSDictionary;

@protocol IMDCoreSpotlightIndexer <NSObject>
+ (NSArray *)auxiliaryItemsForPrimaryAttributes:(CSSearchableItemAttributeSet *)arg1 withItem:(NSDictionary *)arg2 chat:(NSDictionary *)arg3 isReindexing:(BOOL)arg4;
+ (void)indexItem:(NSDictionary *)arg1 withChat:(NSDictionary *)arg2 isReindexing:(BOOL)arg3 metadataToUpdate:(CSSearchableItemAttributeSet *)arg4;
+ (BOOL)cancelIndexingForItem:(NSDictionary *)arg1;
@end
