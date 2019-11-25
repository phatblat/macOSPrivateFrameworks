//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKInvalidatable.h"

@class NSString, PKNotifyRegistration;

@interface PKNotifySubregistration : NSObject <PKInvalidatable>
{
    struct os_unfair_lock_s _lock;
    PKNotifyRegistration *_parent;
    CDUnknownBlockType _handler;
    _Bool _invalidated;
}

- (void).cxx_destruct;
- (void)invokeHandler;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)_invalidateFromParent:(_Bool)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithParent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

