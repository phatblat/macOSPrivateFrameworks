//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionStreamDelegate.h"

@class NSInputStream, NSOutputStream, NSString, NSURLSession, NSURLSessionStreamTask;

__attribute__((visibility("hidden")))
@interface RPStream : NSObject <NSURLSessionStreamDelegate>
{
    NSURLSession *_session;
    NSURLSessionStreamTask *_task;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    CDUnknownFunctionPointerType _cb;
    void *_cbUserContext;
}

@property void *cbUserContext; // @synthesize cbUserContext=_cbUserContext;
@property CDUnknownFunctionPointerType cb; // @synthesize cb=_cb;
@property(retain) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain) NSURLSessionStreamTask *task; // @synthesize task=_task;
@property(retain) NSURLSession *session; // @synthesize session=_session;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)cancel;
- (id)initWithHost:(id)arg1 port:(id)arg2 cb:(CDUnknownFunctionPointerType)arg3 userContext:(void *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
