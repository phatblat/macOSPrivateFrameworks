//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, _DKEventQuery;

@protocol _DKContentProvider <NSObject>
- (void)executeQuery:(_DKEventQuery *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)executeQuery:(_DKEventQuery *)arg1 error:(id *)arg2;
@end

