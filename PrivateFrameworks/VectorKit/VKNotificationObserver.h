//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface VKNotificationObserver : NSObject
{
    struct _geo_weak_ptr<id<VKNotificationObserverDelegate>> {
        id <VKNotificationObserverDelegate> _p;
    } _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_receivedLocalChangedNotification;
- (void)_receivedFlushTileCachesNotification;
- (void)_receivedMemoryNotification;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 taskContext:(const struct TaskContext *)arg2;

@end
