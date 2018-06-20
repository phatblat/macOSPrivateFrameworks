//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSThread, OITSUPointerKeyDictionary, OITSURetainedPointerKeyDictionary;

@interface OITSUFlushingManager : NSObject
{
    OITSURetainedPointerKeyDictionary *_objects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *>> *_sortedObjects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *>> *_sortedNewObjects;
    OITSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    BOOL _alwaysFlushing;
    BOOL _stopFlushing;
    BOOL _stopFlushingWhenQueueEmpty;
    BOOL _isFlushing;
    id <TSUiOSMemoryWarningFlushable> _flushingObject;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    NSThread *_bgThread;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
+ (id)_singletonAlloc;
- (void)_bgThreadInactive;
- (void)_bgThreadActive;
- (void)_bgTaskFinished;
- (void)_bgTaskStarted;
- (void)_didUseObject:(id)arg1;
- (BOOL)controlsInactiveObject:(id)arg1;
- (BOOL)controlsActiveObject:(id)arg1;
- (void)advanceClock;
- (void)transferNewObjects;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo *)arg1;
- (struct TSUFlushableObjectInfo *)eraseInfoForObject:(id)arg1;
- (BOOL)isNewObject:(struct TSUFlushableObjectInfo *)arg1;
- (void)_backgroundThread:(id)arg1;
- (void)_stopFlushingObjects;
- (void)_startFlushingObjects;
- (void)_flushAllEligible;
- (void)didReceiveMemoryWarning;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)safeToFlush:(id)arg1 wasAccessed:(BOOL)arg2;
- (void)unsafeToFlush:(id)arg1;
- (void)doneWithObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

