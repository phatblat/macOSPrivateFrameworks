//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, RWIApplication, RWIDebuggable, RWIDrivable, RWIDriver, RWIServiceConnection, RWITarget;

@protocol RWIBaseManagerDelegate <NSObject>

@optional
- (void)automaticInspectionCandidate:(RWIDebuggable *)arg1 sessionIdentifier:(NSString *)arg2;
- (void)requestDriver:(RWIDriver *)arg1 shouldBeActive:(BOOL)arg2 forwardIfUnhandled:(BOOL)arg3;
- (void)receivedSetup:(NSDictionary *)arg1 forConnection:(RWIServiceConnection *)arg2;
- (void)receivedData:(NSDictionary *)arg1 forDestination:(NSString *)arg2;
- (void)serviceConnectionClosed:(RWIServiceConnection *)arg1;
- (void)willRemoveDriver:(RWIDriver *)arg1;
- (void)didAddDriver:(RWIDriver *)arg1;
- (void)willRemoveDrivable:(RWIDrivable *)arg1;
- (void)didAddDrivable:(RWIDrivable *)arg1;
- (void)willRemoveDebuggable:(RWIDebuggable *)arg1;
- (void)didAddDebuggable:(RWIDebuggable *)arg1;
- (void)willRemoveApplication:(RWIApplication *)arg1;
- (void)didAddApplication:(RWIApplication *)arg1;
- (void)targetDidChangeReadyState:(RWITarget *)arg1;
- (void)targetHasBasicInformation:(RWITarget *)arg1;
@end

