//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface CPLNetworkWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct __SCNetworkReachability *_reachability;
    unsigned int _reachabilityFlags;
    unsigned long long _networkState;
    id <CPLNetworkWatcherDelegate> _delegate;
}

+ (id)_descriptionForNetworkState:(unsigned long long)arg1;
@property(nonatomic) __weak id <CPLNetworkWatcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long networkState; // @synthesize networkState=_networkState;
- (void).cxx_destruct;
- (void)_initialReachabilityTestFailed;
- (void)_reachabilityFlagsDidChange:(unsigned int)arg1;
- (void)stop;
- (void)start;
- (void)_setupReachability;
- (void)_teardownReachability;
- (void)_updateState:(unsigned long long)arg1;
- (id)initWithQueue:(id)arg1;

@end

