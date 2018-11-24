//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface MSVTaskAssertion : NSObject
{
    NSString *_uuid;
    NSString *_bundleID;
    int _pid;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    BOOL _acquired;
    long long _type;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_cancelInvalidationTimerWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidateOnDate:(id)arg1;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1 bundleID:(id)arg2 name:(id)arg3 subsystem:(id)arg4;
- (id)initWithType:(long long)arg1 pid:(int)arg2 name:(id)arg3 subsystem:(id)arg4;
- (id)_initWithType:(long long)arg1 bundleID:(id)arg2 orPID:(int)arg3 name:(id)arg4 subsystem:(id)arg5;

@end

