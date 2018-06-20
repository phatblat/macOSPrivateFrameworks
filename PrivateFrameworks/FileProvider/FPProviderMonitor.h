//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface FPProviderMonitor : NSObject
{
    NSMutableDictionary *_observersByContainerID;
    NSMutableDictionary *_notifyTokenByContainerID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)isProviderIDForeground:(id)arg1;
+ (id)providerIDForApplication:(id)arg1 sharedContainerIdentifier:(id)arg2;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1 forProviderID:(id)arg2;
- (void)addObserver:(id)arg1 forProviderID:(id)arg2;
- (void)dealloc;
- (id)init;

@end

