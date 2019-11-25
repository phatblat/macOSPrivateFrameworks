//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSURL;

@interface SUOSUNetworkReachabilityMonitor : NSObject
{
    BOOL _active;
    NSURL *_targetURL;
    struct __SCNetworkReachability *_target;
    id <SUOSUNetworkReachabilityMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)_isReachableWithFlags:(unsigned int)arg1;
@property BOOL active; // @synthesize active=_active;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <SUOSUNetworkReachabilityMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property struct __SCNetworkReachability *target; // @synthesize target=_target;
@property(retain) NSURL *targetURL; // @synthesize targetURL=_targetURL;
- (void).cxx_destruct;
- (void)_reachabilityChangedWithTarget:(struct __SCNetworkReachability *)arg1 flags:(unsigned int)arg2;
- (BOOL)_sendHTTPHeadRequestToTargetURL;
- (void)stopMonitoring;
- (BOOL)startMonitoring;
@property(readonly) BOOL isReachable;
- (void)dealloc;
- (id)initWithTargetURL:(id)arg1 delegate:(id)arg2;

@end

