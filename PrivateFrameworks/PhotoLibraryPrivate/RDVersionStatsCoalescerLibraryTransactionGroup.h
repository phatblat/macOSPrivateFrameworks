//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LiLibrary, LiRidList, NSArray, NSMutableArray;

@interface RDVersionStatsCoalescerLibraryTransactionGroup : NSObject
{
    LiRidList *_versionIds;
    NSMutableArray *_transactions;
}

- (void).cxx_destruct;
- (id)fetchVersionsByModelId;
- (BOOL)addTransaction:(id)arg1;
@property(readonly, nonatomic) NSArray *transactions;
@property(readonly, nonatomic) LiLibrary *library;
- (id)init;

@end

