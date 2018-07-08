//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface CNCache : NSObject
{
    NSArray *_boundingStrategies;
    id <CNScheduler> _resourceScheduler;
    NSMutableDictionary *_storage;
}

+ (id)boundingStrategyWithTTL:(double)arg1 timeProvider:(id)arg2;
+ (id)boundingStrategyWithTTL:(double)arg1;
+ (id)boundingStrategyWithCapacity:(unsigned long long)arg1;
+ (id)atomicCacheScheduler;
+ (id)atomicCache;
+ (id)cache;
@property(readonly, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) id <CNScheduler> resourceScheduler; // @synthesize resourceScheduler=_resourceScheduler;
@property(readonly, copy, nonatomic) NSArray *boundingStrategies; // @synthesize boundingStrategies=_boundingStrategies;
- (void).cxx_destruct;
- (void)resourceLock_validateAllKeys;
- (void)resourceLock_validateKey:(id)arg1;
- (void)resourceLock_willAccessKey:(id)arg1;
- (void)resourceLock_willSetObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
@property(readonly, copy) NSArray *allObjects;
@property(readonly, copy) NSArray *allKeys;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)resourceLock_setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1 onCacheMiss:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (id)resultWithResourceLock:(CDUnknownBlockType)arg1;
- (void)performWithResourceLock:(CDUnknownBlockType)arg1;
- (id)initWithBoundingStrategies:(id)arg1 resourceScheduler:(id)arg2;
- (id)initWithResourceScheduler:(id)arg1;
- (id)init;

@end

