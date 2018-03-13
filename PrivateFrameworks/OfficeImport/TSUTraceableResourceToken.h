//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSUTraceableResourceToken.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSUTraceableResourceToken : NSObject <TSUTraceableResourceToken>
{
    // Error parsing type: Ai, name: _timeoutPauseCount
    NSArray *_acquireCallStack;
    NSArray *_copiedAcquireCallStack;
    NSArray *_relinquishCallStack;
    NSArray *_copiedRelinquishCallStack;
    NSString *_intent;
    double _timeout;
    NSObject *_context;
}

+ (id)callStackDescriptionWithAction:(id)arg1 intent:(id)arg2 callStackSymbols:(id)arg3 index:(id)arg4 indentLevel:(unsigned long long)arg5;
@property(readonly, nonatomic) NSObject *context; // @synthesize context=_context;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSString *intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)acquireCallStackDescriptionWithIndex:(id)arg1 indentLevel:(unsigned long long)arg2;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)setRelinquishCallStackIfNeeded:(id)arg1;
@property(readonly, nonatomic) NSArray *relinquishCallStack;
@property(readonly, nonatomic) NSArray *acquireCallStack;
- (void)resumeTimeout;
- (void)pauseTimeout;
@property(readonly, nonatomic) BOOL isTimeoutPaused;
- (void)dealloc;
- (id)initWithIntent:(id)arg1 timeout:(double)arg2 context:(id)arg3 acquireCallStack:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

