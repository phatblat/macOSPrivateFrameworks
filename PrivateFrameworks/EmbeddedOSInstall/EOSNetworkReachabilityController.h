//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface EOSNetworkReachabilityController : NSObject
{
    BOOL _reachable;
    NSString *_host;
    struct __SCNetworkReachability *_target;
    NSObject<OS_dispatch_queue> *_reachabilityCallbacksQueue;
    NSObject<OS_dispatch_semaphore> *_hostBecameReachable;
}

+ (BOOL)_isReachableWithFlags:(unsigned int)arg1;
+ (BOOL)networkReachable;
@property BOOL reachable; // @synthesize reachable=_reachable;
@property(retain) NSObject<OS_dispatch_semaphore> *hostBecameReachable; // @synthesize hostBecameReachable=_hostBecameReachable;
@property(retain) NSObject<OS_dispatch_queue> *reachabilityCallbacksQueue; // @synthesize reachabilityCallbacksQueue=_reachabilityCallbacksQueue;
@property struct __SCNetworkReachability *target; // @synthesize target=_target;
@property(retain) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)_reachabilityChangedWithTarget:(struct __SCNetworkReachability *)arg1 flags:(unsigned int)arg2;
- (BOOL)waitForNetworkReachabilityWithTimeout:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTargetURL:(id)arg1;

@end

