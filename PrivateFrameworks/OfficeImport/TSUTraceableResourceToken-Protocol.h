//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject, NSString;

@protocol TSUTraceableResourceToken <NSObject>
@property(readonly, nonatomic) NSObject *context;
@property(readonly, nonatomic) NSArray *relinquishCallStack;
@property(readonly, nonatomic) NSArray *acquireCallStack;
@property(readonly, nonatomic) double timeout;
@property(readonly, nonatomic) NSString *intent;
- (void)resumeTimeout;
- (void)pauseTimeout;
@end

