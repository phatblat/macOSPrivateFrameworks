//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNDescriptionBuilder, NSDate, NSError;

@protocol CNFutureImpl <NSObject>
- (void)updateDescriptionWithBuilder:(CNDescriptionBuilder *)arg1;
- (void)addFailureBlock:(void (^)(NSError *))arg1;
- (void)addSuccessBlock:(void (^)(id))arg1;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id *)arg2;

@optional
- (void)_flushCompletionBlocks;
- (BOOL)cancel;
- (BOOL)finishWithResult:(id)arg1 error:(NSError *)arg2;
@end

