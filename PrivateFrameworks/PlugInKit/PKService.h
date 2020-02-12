//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSXPCListener, PKServicePersonality;

@interface PKService : NSObject <NSXPCListenerDelegate>
{
    BOOL _shared;
    BOOL _isSystemService;
    PKServicePersonality *_solePersonality;
    id <PKServiceDelegate> _delegate;
    NSXPCListener *_serviceListener;
    NSMutableDictionary *_personalities;
    NSObject<OS_dispatch_queue> *__sync;
    NSArray *_subsystems;
    NSObject<OS_dispatch_source> *_terminationTimer;
    NSObject<OS_dispatch_source> *_firstHostRequestTimer;
}

+ (int)_defaultRun:(int)arg1 arguments:(const char **)arg2;
+ (id)defaultService;
+ (void)main;
@property(retain) NSObject<OS_dispatch_source> *firstHostRequestTimer; // @synthesize firstHostRequestTimer=_firstHostRequestTimer;
@property(retain) NSObject<OS_dispatch_source> *terminationTimer; // @synthesize terminationTimer=_terminationTimer;
@property BOOL isSystemService; // @synthesize isSystemService=_isSystemService;
@property BOOL shared; // @synthesize shared=_shared;
@property(retain) NSArray *subsystems; // @synthesize subsystems=_subsystems;
@property(retain) NSObject<OS_dispatch_queue> *_sync; // @synthesize _sync=__sync;
@property(retain) NSMutableDictionary *personalities; // @synthesize personalities=_personalities;
@property(retain) NSXPCListener *serviceListener; // @synthesize serviceListener=_serviceListener;
@property(retain) id <PKServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelTermination;
- (void)scheduleTermination:(double)arg1;
- (void)checkEnvironment:(id)arg1;
- (BOOL)unregisterPersonality:(id)arg1;
- (void)registerPersonality:(id)arg1;
- (id)personalityNamed:(id)arg1 forHostPid:(int)arg2;
- (id)personalityNamed:(id)arg1;
@property(retain) PKServicePersonality *solePersonality; // @synthesize solePersonality=_solePersonality;
- (id)connectionForPlugInNamed:(id)arg1;
- (id)embeddedPrincipalForPlugInNamed:(id)arg1;
- (id)hostPrincipalForPlugInNamed:(id)arg1;
- (id)plugInPrincipalForPlugInNamed:(id)arg1;
- (id)defaultsForPlugInNamed:(id)arg1;
- (void)copyAppStoreReceipt:(CDUnknownBlockType)arg1;
- (void)launchContainingApplicationForPlugInNamed:(id)arg1;
- (id)discoverSubsystemNamed:(id)arg1 options:(id)arg2 logMissing:(BOOL)arg3;
- (void)mergeSubsystemList:(id)arg1 from:(id)arg2;
- (void)mergeSubsystems:(id)arg1 from:(id)arg2;
- (id)configuredSubsystemList;
- (void)discoverSubsystems;
- (BOOL)_processDefaultSubsystemName:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_prepareToRun;
- (void)run;
- (id)init;
- (void)beganUsingServicePersonality:(id)arg1;
- (void)checkIn;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

