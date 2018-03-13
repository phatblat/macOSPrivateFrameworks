//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface NUObservatory : NSObject
{
    NSObject<OS_dispatch_queue> *_serializer;
    NSMutableArray *_observations;
}

- (void).cxx_destruct;
- (void)_notifyAllObserversForKey:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)notifyAllObserversForKey:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_removeObserver:(id)arg1 forKey:(long long)arg2;
- (void)removeObserver:(id)arg1 forKey:(long long)arg2;
- (void)_addObservation:(id)arg1;
- (void)addObserver:(id)arg1 forKey:(long long)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)init;

@end

