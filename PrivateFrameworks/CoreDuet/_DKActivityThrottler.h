//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSCountedSet;

@interface _DKActivityThrottler : NSObject
{
    NSCountedSet *_minimumIntervalScheduledActions;
    NSCountedSet *_delayScheduledActions;
    NSCache *_cache;
    id <_DKSimpleKeyValueStore> _store;
}

@property(retain, nonatomic) id <_DKSimpleKeyValueStore> store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)description;
- (id)keyForName:(id)arg1;
- (void)clearDateForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (void)clearHistoryForName:(id)arg1;
- (void)_performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
- (void)_minimumIntervalScheduledActionsRemoveActionName:(id)arg1;
- (void)_minimumIntervalScheduledActionsAddActionName:(id)arg1;
- (BOOL)_minimumIntervalScheduledActionsContainsActionName:(id)arg1;
- (void)_performOrScheduleWithTimeInterval:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4 callDepth:(unsigned long long)arg5;
- (void)_performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3 throttleBlock:(CDUnknownBlockType)arg4;
- (id)initWithStore:(id)arg1;

@end

