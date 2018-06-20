//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface SGLongRunningTaskManager : NSObject
{
    NSHashTable *_tasks;
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)tellCurrentTasksToDefer;
- (void)unregister:(id)arg1;
- (id)taskWithDeadline:(double)arg1;
- (id)task;
- (void)dealloc;
- (id)init;

@end

