//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKDaemonClient;

@interface PKManager : NSObject
{
    PKDaemonClient *_client;
}

+ (id)managerForUser:(unsigned int)arg1;
+ (id)defaultManager;
@property(retain) PKDaemonClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)updateExtensionStatesForPlugIns:(id)arg1 result:(CDUnknownBlockType)arg2;
- (BOOL)releaseHold:(id)arg1 withError:(id *)arg2;
- (void)releaseHold:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)releaseHold:(id)arg1;
- (void)holdRequest:(id)arg1 flags:(unsigned long long)arg2 result:(CDUnknownBlockType)arg3;
- (id)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 withError:(id *)arg3;
- (id)forceHoldPlugIn:(id)arg1 withError:(id *)arg2;
- (id)holdPlugInsInApplication:(id)arg1 withError:(id *)arg2;
- (void)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 result:(CDUnknownBlockType)arg3;
- (void)forceHoldPlugIn:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)holdPlugInsInApplication:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)containingAppForExtensionProperties:(id)arg1;
- (id)containingAppForPlugInWithPid:(int)arg1;
- (id)containingAppForPlugInConnectedTo:(id)arg1;
- (id)informationForPlugInWithPid:(int)arg1;
- (void)unregisterPlugInsInBundle:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)registerPlugInsInBundle:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)unregisterPlugInAtURL:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)registerPlugInAtURL:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)initForUser:(unsigned int)arg1;
- (id)initForService:(const char *)arg1;

@end

