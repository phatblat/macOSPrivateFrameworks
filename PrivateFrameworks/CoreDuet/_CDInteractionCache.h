//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableOrderedSet, NSPredicate, _CDInteractionStore;

@interface _CDInteractionCache : NSObject
{
    struct os_unfair_lock_s _lock;
    _CDInteractionStore *_interactionStore;
    unsigned long long _size;
    NSPredicate *_predicate;
    CDUnknownBlockType _filterBlock;
    NSMutableOrderedSet *_mutableInteractions;
}

@property(readonly, nonatomic) NSMutableOrderedSet *mutableInteractions; // @synthesize mutableInteractions=_mutableInteractions;
@property(readonly, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *interactions;
- (void)_cacheInteractions:(id)arg1;
- (void)interactionsRecorded:(id)arg1;
- (void)_refetch;
- (void)refetch;
- (id)initWithInteractionStore:(id)arg1 size:(unsigned long long)arg2 queryPredicate:(id)arg3 filterBlock:(CDUnknownBlockType)arg4;

@end
