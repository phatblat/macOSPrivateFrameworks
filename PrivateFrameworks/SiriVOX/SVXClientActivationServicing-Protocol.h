//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, SVXButtonEvent, SVXSystemEvent;

@protocol SVXClientActivationServicing <NSObject>
@property(nonatomic) __weak id <SVXClientActivationServiceDelegate> delegate;
- (void)deactivateWithUserInfo:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
- (void)activateWithSystemEvent:(SVXSystemEvent *)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)prewarmForSystemEvent:(SVXSystemEvent *)arg1 completion:(void (^)(void))arg2;
- (void)activateWithButtonEvent:(SVXButtonEvent *)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)activateWithUserInfo:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)enqueueButtonEvent:(SVXButtonEvent *)arg1;
- (void)handleButtonEvent:(SVXButtonEvent *)arg1;
@end

