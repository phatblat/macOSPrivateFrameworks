//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASDAppEvent;

@protocol ASDCrossfireServiceProtocol <NSObject>
- (void)sendMetricsWithCompletionBlock:(void (^)(BOOL, NSError *))arg1;
- (void)resetMetricsWithCompletionBlock:(void (^)(BOOL, NSError *))arg1;
- (void)reportAppEvent:(ASDAppEvent *)arg1 completionBlock:(void (^)(BOOL, NSError *))arg2;
- (void)recordMetricsWithCompletionBlock:(void (^)(BOOL, NSError *))arg1;
- (void)recordLaunchesWithCompletionBlock:(void (^)(BOOL, NSError *))arg1;
- (void)getAppEventsWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)flushMetricsWithCompletionBlock:(void (^)(BOOL, NSError *))arg1;
@end
