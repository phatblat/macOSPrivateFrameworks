//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol SiriCoreConnectionProviderDelegate <NSObject>
- (void)connectionProvider:(id <SiriCoreConnectionProvider>)arg1 receivedError:(NSError *)arg2;

@optional
- (void)connectionProviderReceivedBetterRouteNotification:(id <SiriCoreConnectionProvider>)arg1;
- (void)connectionProvider:(id <SiriCoreConnectionProvider>)arg1 receivedViabilityChangeNotification:(BOOL)arg2;
@end
