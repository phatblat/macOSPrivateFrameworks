//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpeech/CSPolicy.h>

@class NSObject<OS_dispatch_queue>;

@interface CSSmartSiriVolumeEnablePolicy : CSPolicy
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_addSmartSiriVolumeEnabledConditions;
- (void)_subscribeEventMonitors;
- (id)init;

@end

