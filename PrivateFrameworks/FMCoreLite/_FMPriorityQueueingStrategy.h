//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMQueueingStrategy.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _FMPriorityQueueingStrategy : NSObject <FMQueueingStrategy>
{
    CDUnknownBlockType _priorityComparator;
}

- (void).cxx_destruct;
- (unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (id)initWithComparator:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

