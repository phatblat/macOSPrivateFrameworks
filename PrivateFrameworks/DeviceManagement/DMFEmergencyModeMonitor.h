//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface DMFEmergencyModeMonitor : NSObject
{
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedMonitor;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)emergencyModeStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)emergencyModeStatusWithError:(id *)arg1;
- (BOOL)disableEmergencyModeWithError:(id *)arg1;
- (BOOL)enableEmergencyModeForDuration:(double)arg1 withError:(id *)arg2;
- (BOOL)enableEmergencyModeWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (id)init;

@end
