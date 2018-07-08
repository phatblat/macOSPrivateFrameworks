//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface CUNetInterfaceMonitor : NSObject
{
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct __SCDynamicStore *_scStore;
    struct LogCategory *_ucat;
    unsigned int _flags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _flagsChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType flagsChangedHandler; // @synthesize flagsChangedHandler=_flagsChangedHandler;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_networkInterfacesChanged:(BOOL)arg1;
- (void)_ensureStopped;
- (void)_ensureStarted;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
