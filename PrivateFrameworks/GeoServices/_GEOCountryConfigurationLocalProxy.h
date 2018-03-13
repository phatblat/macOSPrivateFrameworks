//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_GEOCountryConfigurationServerProxy.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

__attribute__((visibility("hidden")))
@interface _GEOCountryConfigurationLocalProxy : NSObject <_GEOCountryConfigurationServerProxy>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <_GEOCountryConfigurationServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_source> *_scheduledUpdateTimer;
}

@property(nonatomic) __weak id <_GEOCountryConfigurationServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCountryCode:(CDUnknownBlockType)arg1;
- (void)_updateCountryCode:(CDUnknownBlockType)arg1;
- (void)_determineCurrentCountryCode:(CDUnknownBlockType)arg1;
- (void)_scheduleUpdate;
- (void)_reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

