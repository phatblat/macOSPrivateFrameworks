//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKAdaptiveService, NSXPCListenerEndpoint;

@interface AKAuthorizationNotificationService : NSObject
{
    AKAdaptiveService *_service;
    NSXPCListenerEndpoint *_daemonEndpoint;
}

+ (void)startServiceWithNotificationHandler:(id)arg1;
+ (id)_sharedService;
- (void).cxx_destruct;
- (void)_configureNotificationService;
- (void)startWithNotificationHandler:(id)arg1;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)init;

@end

