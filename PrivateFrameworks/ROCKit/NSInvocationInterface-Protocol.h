//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMethodSignature, NSObject<OS_dispatch_queue>;

@protocol NSInvocationInterface <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *invocationQueue;
@property(readonly, nonatomic) BOOL argumentsRetained;
@property(nonatomic) SEL selector;
@property(nonatomic) id target;
@property(readonly, nonatomic) NSMethodSignature *methodSignature;
- (void)retainArguments;
- (void)invokeWithTarget:(id)arg1;
- (void)invoke;
- (void)setArgument:(void *)arg1 atIndex:(long long)arg2;
- (void)getArgument:(void *)arg1 atIndex:(long long)arg2;
- (void)setReturnValue:(void *)arg1;
- (void)getReturnValue:(void *)arg1;
@end

