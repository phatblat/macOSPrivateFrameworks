//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ViewBridge/NSCFRunLoopSemaphore.h>

@class NSObject<OS_os_activity>;

__attribute__((visibility("hidden")))
@interface NSRemoteViewSemaphore : NSCFRunLoopSemaphore
{
    NSObject<OS_os_activity> *_activity;
}

+ (id)semaphoreWithActivity:(id)arg1;
- (BOOL)wait:(double)arg1;
- (void)applyActivity:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithActivity:(id)arg1;
- (void)dealloc;

@end
