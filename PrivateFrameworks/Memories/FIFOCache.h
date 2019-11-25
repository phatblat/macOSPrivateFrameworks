//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FIFOCache : NSObject
{
    NSMutableDictionary *m_cache;
    NSMutableArray *m_FIFO;
    int m_capacity;
}

+ (void)noteApplicationDidReceiveMemoryWarning;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)count;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)addObjectsFromDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithCapacity:(int)arg1;

@end

