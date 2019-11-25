//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SidecarDisplayCore_Interface.h"

@class NSArray, SidecarDevice, SidecarDisplayConfig;

@interface SidecarDisplayManager : NSObject <SidecarDisplayCore_Interface>
{
    // Error parsing type: AQ, name: _configGeneration
    // Error parsing type: AQ, name: _deviceGeneration
    // Error parsing type: AQ, name: _displayGeneration
    SidecarDisplayConfig *_config;
    NSArray *_devices;
    SidecarDevice *_connectedDevice;
    NSArray *_recentUUIDS;
    NSArray *_recentDevices;
}

+ (id)sharedManager;
+ (id)model;
+ (BOOL)isSupported;
- (void).cxx_destruct;
- (void)preferencesChanged;
- (void)disconnectFromDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectToDevice:(id)arg1 withConfig:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connectToDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *recentDevices;
@property(readonly, nonatomic) NSArray *connectedDevices;
@property(readonly, nonatomic) NSArray *devices;
- (void)preferencesChanged:(id)arg1;
- (id)configForDevice:(id)arg1;
- (id)init;

@end

