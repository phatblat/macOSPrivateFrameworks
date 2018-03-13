//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFAirDropDiscoveryControllerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TAirDropDiscoveryController : NSObject <SFAirDropDiscoveryControllerDelegate>
{
    struct TNSRef<SFAirDropDiscoveryController *, void> _discoveryController;
    _Bool _isLegacyMachine;
    long long _discoverableMode;
    _Bool _isLegacyModeEnabled;
    _Bool _isLegacyModeSettable;
}

+ (id)controller;
@property(readonly, nonatomic, getter=isLegacyModeSettable) _Bool legacyModeSettable; // @synthesize legacyModeSettable=_isLegacyModeSettable;
@property(nonatomic, getter=isLegacyModeEnabled) _Bool legacyModeEnabled; // @synthesize legacyModeEnabled=_isLegacyModeEnabled;
@property(nonatomic) long long discoverableMode; // @synthesize discoverableMode=_discoverableMode;
@property(readonly, nonatomic, getter=isLegacyMachine) _Bool legacyMachine; // @synthesize legacyMachine=_isLegacyMachine;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)discoveryControllerLegacyModePropertiesDidChange:(id)arg1;
- (void)discoveryControllerVisibilityDidChange:(id)arg1;
- (void)discoveryControllerSettingsDidChange:(id)arg1;
- (void)updateState;
- (void)_setLegacyModeSettableForUpdateState:(_Bool)arg1;
- (void)_setLegacyMachineForUpdateState:(_Bool)arg1;
- (void)_setLegacyModeEnabledForUpdateState:(_Bool)arg1;
- (void)_setDiscoverableModeForUpdateState:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

