//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSObject<OS_dispatch_queue>;

@interface JXOperation : NSOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
@property BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
- (void).cxx_destruct;
- (void)startAndWaitUntilFinished;
- (void)finish;
- (void)willFinish;
- (void)cancel;
- (BOOL)isConcurrent;
- (void)start;
- (id)init;
- (void)dealloc;

@end

