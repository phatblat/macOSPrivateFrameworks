//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalTaskManager, NSError;

@protocol CalExecutableTask <NSObject>
- (void)cancelTaskWithReason:(int)arg1 underlyingError:(NSError *)arg2;
- (void)finishWithError:(NSError *)arg1;
- (void)performTask;

@optional
- (void)setTaskManager:(CalTaskManager *)arg1;
- (void)startModal;
@end

