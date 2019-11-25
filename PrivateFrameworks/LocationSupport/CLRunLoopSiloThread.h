//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRunLoop, NSThread;

@interface CLRunLoopSiloThread : NSObject
{
    struct _opaque_pthread_t *_threadId;
    NSRunLoop *_underlyingRunLoop;
    NSThread *_underlyingThread;
    BOOL _shouldCancelThread;
}

@property(readonly, nonatomic) BOOL shouldCancelThread; // @synthesize shouldCancelThread=_shouldCancelThread;
@property(readonly, nonatomic) NSThread *underlyingThread; // @synthesize underlyingThread=_underlyingThread;
@property(readonly, nonatomic) NSRunLoop *underlyingRunLoop; // @synthesize underlyingRunLoop=_underlyingRunLoop;
@property(readonly, nonatomic) struct _opaque_pthread_t *threadId; // @synthesize threadId=_threadId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCurrentThread;
- (id)initWithRunLoop:(struct __CFRunLoop *)arg1;
- (id)init;

@end

