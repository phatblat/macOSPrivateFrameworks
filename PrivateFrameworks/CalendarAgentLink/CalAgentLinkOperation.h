//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalStopwatch, NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface CalAgentLinkOperation : NSObject
{
    BOOL _isExecuting;
    BOOL _isCancelled;
    BOOL _isFinished;
    CDUnknownBlockType _completionBlock;
    NSError *_error;
    NSObject<OS_xpc_object> *_connection;
    CalStopwatch *_stopwatch;
    BOOL _isAllowedToBeRunOnAgent;
    NSObject<OS_dispatch_queue> *_messageQueue;
    unsigned long long _timeout;
}

+ (void)disableAgentLinkForTesting;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain, nonatomic) CalStopwatch *stopwatch; // @synthesize stopwatch=_stopwatch;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) BOOL isAllowedToBeRunOnAgent; // @synthesize isAllowedToBeRunOnAgent=_isAllowedToBeRunOnAgent;
@property(nonatomic) __weak NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)finish;
- (void)_finishWithTimeout;
- (void)willFinish;
- (void)responsePayloadReceived:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *inputPayload;
- (BOOL)eligibleForExecution;
- (void)prepare;
- (void)start;
- (void)setErrorWithCode:(int)arg1;
- (id)description;
- (id)init;

@end

