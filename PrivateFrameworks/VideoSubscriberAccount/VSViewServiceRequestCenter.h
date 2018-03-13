//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface VSViewServiceRequestCenter : NSObject
{
    NSOperationQueue *_requestQueue;
    NSOperationQueue *_completionQueue;
}

+ (id)sharedViewServiceRequestCenter;
@property(retain, nonatomic) NSOperationQueue *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSOperationQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void).cxx_destruct;
- (id)enqueueRequest:(id)arg1 withAccountManagerDelegate:(id)arg2 operationDelegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)enqueueCompletionHandlerBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

