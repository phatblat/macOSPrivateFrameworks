//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class PLEventForwardPowerStateEntry, PLSemaphore, PLXPCListenerOperatorComposition;

@interface PLSleepWakeAgent : PLAgent
{
    unsigned int _rootDomainConnect;
    unsigned int _pmNotifier;
    struct IONotificationPort *_systemPowerPortRef;
    PLSemaphore *_canSleepSemaphore;
    double _apSOCBasePower;
    PLXPCListenerOperatorComposition *_wakeGestureXPCListener;
    struct __IOPMConnection *_pmConnection;
    PLEventForwardPowerStateEntry *_lastSleepEntry;
    PLEventForwardPowerStateEntry *_lastWakeEntry;
}

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionPowerState;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionCurrentMachWakeTime;
+ (id)entryEventPointDefinitionCurrentKernelWakeTime;
+ (id)entryEventPointDefinitionWakeGesture;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;
+ (void)load;
@property(retain) PLEventForwardPowerStateEntry *lastWakeEntry; // @synthesize lastWakeEntry=_lastWakeEntry;
@property(retain) PLEventForwardPowerStateEntry *lastSleepEntry; // @synthesize lastSleepEntry=_lastSleepEntry;
@property struct __IOPMConnection *pmConnection; // @synthesize pmConnection=_pmConnection;
@property(retain) PLXPCListenerOperatorComposition *wakeGestureXPCListener; // @synthesize wakeGestureXPCListener=_wakeGestureXPCListener;
@property double apSOCBasePower; // @synthesize apSOCBasePower=_apSOCBasePower;
@property(retain) PLSemaphore *canSleepSemaphore; // @synthesize canSleepSemaphore=_canSleepSemaphore;
@property struct IONotificationPort *systemPowerPortRef; // @synthesize systemPowerPortRef=_systemPowerPortRef;
@property unsigned int pmNotifier; // @synthesize pmNotifier=_pmNotifier;
@property unsigned int rootDomainConnect; // @synthesize rootDomainConnect=_rootDomainConnect;
- (void).cxx_destruct;
- (id)getSleepStatisticsApps;
- (id)getLastWakeEntry;
- (id)getLastSleepEntry;
- (id)wakeTriggersSubclass;
- (id)wakeTriggers;
- (unsigned long long)getSleepSubclassKey;
- (unsigned int)getIOPMRootDomain;
- (void)registerForDarkwakeEvent;
- (id)wakeReasonsAsNSString;
- (id)wakeReasons;
- (void)logWakeEntries:(id)arg1 withCurrentTime:(unsigned long long)arg2 withIsDarkwake:(_Bool)arg3 withCapabilities:(unsigned int)arg4;
- (id)getPostWakeEntry:(unsigned long long)arg1;
- (id)getThisWakeEntry:(id)arg1 withCurrentWakeTime:(unsigned long long)arg2 withCapabilities:(unsigned int)arg3 withIsDarkwake:(_Bool)arg4 withDidSleep:(_Bool)arg5;
- (id)getCurrentWakeTimeKey;
- (unsigned long long)getCurrentWakeTime;
- (void)logSleepEntries:(id)arg1;
- (void)systemPoweredOn:(_Bool)arg1 withCapabilities:(unsigned int)arg2;
- (void)systemPoweredOn:(_Bool)arg1;
- (short)getSleepState;
- (void)logEventPointWakeGesture:(id)arg1;
- (void)log;
- (void)initOperatorDependancies;
- (id)init;

@end

