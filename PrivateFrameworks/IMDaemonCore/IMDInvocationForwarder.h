//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray;

@interface IMDInvocationForwarder : NSObject
{
    NSMutableArray *_targets;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *_lock; // @synthesize _lock;
@property(retain, nonatomic) NSMutableArray *_targets; // @synthesize _targets;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)dealloc;
- (id)initWithTargets:(id)arg1;

@end

