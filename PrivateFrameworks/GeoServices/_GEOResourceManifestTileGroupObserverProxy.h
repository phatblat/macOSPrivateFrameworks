//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface _GEOResourceManifestTileGroupObserverProxy : NSObject
{
    NSHashTable *_observers;
    struct os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (unsigned long long)observersCount;
- (void)forEachObserver:(CDUnknownBlockType)arg1 finished:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)init;

@end

