//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_log>, NightModeControl;

__attribute__((visibility("hidden")))
@interface BLControl : NSObject
{
    NSObject<OS_os_log> *_logHandle;
    struct __IOHIDEventSystemClient *_hidSystemClient;
    NSMutableArray *_alsHIDServiceClients;
    NightModeControl *_nightModeControl;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _callback;
    NSMutableDictionary *_displayContainers;
    NSObject<OS_dispatch_source> *_CDInitTimer;
    NSMutableDictionary *_colorModules;
    unsigned int _pmRootDomainService;
    unsigned int _clamshellNotification;
    struct IONotificationPort *_clamshellNotifyPort;
    _Bool _clamshellOpened;
}

- (void)stopClamshellMonitoring;
- (void)startClamshellMonitoring;
- (void)updateClamshellState:(_Bool)arg1;
- (void)handleClamshellStateChange:(_Bool)arg1;
- (id)copyIdentifiers;
- (id)copyStatusInfo;
- (id)copyDisplayInfo;
- (id)copyDisplayList;
- (void)callBlockWithProperty:(id)arg1 value:(id)arg2;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)stop;
- (_Bool)start;
- (id)init;
- (void)clearColorModules;
- (void)initialiseColorModules;
- (void)initCoreDisplay;
- (void)handleCoreDisplayInitialisation;
- (_Bool)registerWindowServerNotification;
- (void)registerCoreDisplayNotifications;
- (void)unregisterCoreDisplayNotifications;
- (void)triggerDisplayStateReinitialisation;
- (void)clearDisplaySet;
- (void)updateDisplaySet:(id)arg1;
- (_Bool)userChange:(struct __CFString *)arg1;
- (_Bool)setPropertyWithSimpleKey:(id)arg1 property:(id)arg2 client:(id)arg3;
- (_Bool)setPropertyWithKey:(id)arg1 property:(id)arg2 client:(id)arg3;
- (BOOL)setInternalPropertyWithKey:(id)arg1 property:(id)arg2;
- (id)copyPropertyWithSimpleKey:(id)arg1 client:(id)arg2;
- (id)copyPropertyWithKey:(id)arg1 client:(id)arg2;
- (id)copyPropertyInternalForKey:(id)arg1;
- (void)closeHidEventSystemClient;
- (_Bool)initialiseHidEventSystemClient;
- (struct __CFDictionary *)copyPrimaryKeyDictionary:(unsigned int)arg1 usage:(unsigned int)arg2;
- (struct __CFDictionary *)copyDictWithUsagePairPage:(unsigned int)arg1 usage:(unsigned int)arg2;
- (void)hidServiceRemovalCallback:(struct __IOHIDServiceClient *)arg1;
- (void)removeDFRService:(struct __IOHIDServiceClient *)arg1;
- (void)removeHIDService:(struct __IOHIDServiceClient *)arg1;
- (void)hidServiceArrivalCallback:(struct __IOHIDServiceClient *)arg1;
- (void)addDFRService:(struct __IOHIDServiceClient *)arg1;
- (void)addHIDService:(struct __IOHIDServiceClient *)arg1;
- (void)hidEventCallbackWithEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;

@end

