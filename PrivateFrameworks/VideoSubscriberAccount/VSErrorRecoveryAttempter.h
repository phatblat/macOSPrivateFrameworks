//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface VSErrorRecoveryAttempter : NSObject
{
    NSArray *_options;
    NSOperationQueue *_recoveryAttemptingQueue;
}

@property(retain, nonatomic) NSOperationQueue *recoveryAttemptingQueue; // @synthesize recoveryAttemptingQueue=_recoveryAttemptingQueue;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)init;

@end

