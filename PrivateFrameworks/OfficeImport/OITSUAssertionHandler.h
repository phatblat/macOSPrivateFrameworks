//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OITSUAssertionHandler : NSObject
{
}

+ (int)_atomicIncrementAssertCount;
+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(BOOL)arg4 description:(const char *)arg5;
+ (void)simulateCrashWithMessage:(id)arg1;
+ (void)logBacktraceThrottled;
+ (void)logBacktrace;
+ (id)p_performBlockIgnoringAssertions:(CDUnknownBlockType)arg1 onlyFatal:(BOOL)arg2;
+ (id)performBlockIgnoringFatalAssertions:(CDUnknownBlockType)arg1;
+ (id)performBlockIgnoringAssertions:(CDUnknownBlockType)arg1;

@end

