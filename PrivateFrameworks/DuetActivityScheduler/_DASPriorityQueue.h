//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber;

@interface _DASPriorityQueue : NSObject
{
    unsigned long long _count;
    NSMutableDictionary *_objects;
    NSNumber *_lowestPriority;
    NSNumber *_highestPriority;
}

+ (id)priorityQueue;
@property(retain, nonatomic) NSNumber *highestPriority; // @synthesize highestPriority=_highestPriority;
@property(retain, nonatomic) NSNumber *lowestPriority; // @synthesize lowestPriority=_lowestPriority;
@property(retain, nonatomic) NSMutableDictionary *objects; // @synthesize objects=_objects;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)description;
- (id)allObjects;
- (void)removeObject:(id)arg1 atPriority:(unsigned long long)arg2;
- (id)popLast;
- (id)popFirst;
- (void)addObject:(id)arg1 withPriority:(unsigned long long)arg2;
- (id)init;

@end

