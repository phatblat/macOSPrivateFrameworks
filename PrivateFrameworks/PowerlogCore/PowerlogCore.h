//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_source>, PLCoreAgent, PLCoreService, PLCoreStorage;

@interface PowerlogCore : NSObject
{
    NSObject<OS_dispatch_source> *_fVMPressureSource;
    NSDate *_launchDate;
    PLCoreStorage *_storage;
    PLCoreAgent *_agents;
    PLCoreService *_services;
}

+ (BOOL)isDebugEnabled;
+ (BOOL)isAudioAccessory;
+ (BOOL)shouldSetupCore;
+ (BOOL)allowRun;
+ (void)deprecateOldFullMode;
+ (void)setupCore;
+ (id)sharedCore;
+ (BOOL)sharedCoreStarted;
@property(readonly) PLCoreService *services; // @synthesize services=_services;
@property(readonly) PLCoreAgent *agents; // @synthesize agents=_agents;
@property(readonly) PLCoreStorage *storage; // @synthesize storage=_storage;
@property(readonly) NSDate *launchDate; // @synthesize launchDate=_launchDate;
- (void).cxx_destruct;
- (void)didRecieveMemoryPressureWarning;
- (void)stopCore;
- (void)startCore;
- (void)dealloc;
- (id)init;

@end

