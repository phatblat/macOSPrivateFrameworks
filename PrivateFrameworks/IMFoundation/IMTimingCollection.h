//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IMTimingCollection : NSObject
{
    NSMutableDictionary *_timings;
    NSObject<OS_dispatch_queue> *_queue;
}

- (BOOL)hasKey:(id)arg1;
- (id)description;
- (void)removeTimingForKey:(id)arg1;
- (double)totalTimeForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

