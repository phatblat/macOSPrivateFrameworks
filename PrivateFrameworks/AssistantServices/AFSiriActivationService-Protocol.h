//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFRequestInfo;

@protocol AFSiriActivationService <NSObject>
- (oneway void)activateWithRequestInfo:(AFRequestInfo *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)prewarmForRequestInfo:(AFRequestInfo *)arg1 completion:(void (^)(NSError *))arg2;
@end

