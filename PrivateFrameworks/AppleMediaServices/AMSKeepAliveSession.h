//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSProcessDelegate.h"

@class BKSProcess, BKSProcessAssertion, NSCountedSet, NSObject<OS_os_transaction>, NSString;

__attribute__((visibility("hidden")))
@interface AMSKeepAliveSession : NSObject <BKSProcessDelegate>
{
    BOOL _interrupted;
    NSString *_assertionName;
    NSCountedSet *_activeNames;
    NSString *_logKey;
    BKSProcessAssertion *_taskAssertion;
    NSObject<OS_os_transaction> *_osTransaction;
    BKSProcess *_process;
    long long _timerId;
}

+ (id)_sharedSessionQueue;
+ (void)_reapplyAssertion;
+ (void)_deactivateSession;
+ (void)_afterDelay:(long long)arg1 coalesce:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)interrupt;
+ (void)removeKeepAliveForName:(id)arg1;
+ (void)addKeepAliveForName:(id)arg1;
@property long long timerId; // @synthesize timerId=_timerId;
@property(retain) BKSProcess *process; // @synthesize process=_process;
@property(retain) NSObject<OS_os_transaction> *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(retain) BKSProcessAssertion *taskAssertion; // @synthesize taskAssertion=_taskAssertion;
@property(readonly) NSString *logKey; // @synthesize logKey=_logKey;
@property BOOL interrupted; // @synthesize interrupted=_interrupted;
@property(retain) NSCountedSet *activeNames; // @synthesize activeNames=_activeNames;
@property(readonly) NSString *assertionName; // @synthesize assertionName=_assertionName;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)processWillExpire:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

