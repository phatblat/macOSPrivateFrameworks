//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface QLThumbnailQueue : NSObject
{
    struct __QLThumbnailQueue *_wrapperStruct;
    const void *_client;
    CDUnknownFunctionPointerType _callback;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completionHandler;
    NSOperationQueue *_operationQueue;
}

@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property CDUnknownFunctionPointerType callback; // @synthesize callback=_callback;
@property const void *client; // @synthesize client=_client;
@property struct __QLThumbnailQueue *wrapperStruct; // @synthesize wrapperStruct=_wrapperStruct;
- (void).cxx_destruct;
- (void)waitForCompletion;
- (void)setMaxConcurrentThumbnails:(long long)arg1;
- (void)cancelAll;
- (void)cancelThumbnails:(id)arg1;
- (void)invalidate;
- (long long)operationCount;
- (BOOL)isProcessing;
- (void)addThumbnailsFromArray:(id)arg1;
- (void)addThumbnail:(struct __QLThumbnail *)arg1;
- (void)dealloc;
- (id)init;

@end
