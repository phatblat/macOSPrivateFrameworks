//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalNetworkChangeNotificationListener.h"
#import "ICSLoggingDelegate.h"

@class CalAgentMessageEngine, CalLimitingQueue, CalMemorySensor, CalSignalSensor, NSObject<OS_dispatch_queue>, NSXPCConnection, NSXPCStoreServer;

@interface CalAgent : NSObject <CalNetworkChangeNotificationListener, ICSLoggingDelegate>
{
    CalSignalSensor *_signalHandler;
    CalMemorySensor *_memorySensor;
    CalAgentMessageEngine *_messageEngine;
    NSXPCStoreServer *_storeServer;
    CalLimitingQueue *_reloadQueue;
    NSXPCConnection *_calNCServiceConnection;
    id <CalNCProtocol> _remoteCalNCService;
    NSObject<OS_dispatch_queue> *_alarmQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *alarmQueue; // @synthesize alarmQueue=_alarmQueue;
@property(retain, nonatomic) id <CalNCProtocol> remoteCalNCService; // @synthesize remoteCalNCService=_remoteCalNCService;
@property(retain, nonatomic) NSXPCConnection *calNCServiceConnection; // @synthesize calNCServiceConnection=_calNCServiceConnection;
@property(retain, nonatomic) NSXPCStoreServer *storeServer; // @synthesize storeServer=_storeServer;
@property(retain, nonatomic) CalAgentMessageEngine *messageEngine; // @synthesize messageEngine=_messageEngine;
@property(retain, nonatomic) CalMemorySensor *memorySensor; // @synthesize memorySensor=_memorySensor;
@property(retain, nonatomic) CalSignalSensor *signalHandler; // @synthesize signalHandler=_signalHandler;
- (void).cxx_destruct;
- (void)logICSMessage:(id)arg1 atLevel:(long long)arg2;
- (void)setupReachabilityEvents;
- (void)setUpiCalendarPRODID;
- (void)setUpHTTPUserAgent;
- (unsigned long long)nextNodeOrder;
- (void)_loadNetworkObjectsAndSynchronizePropertiesWithPersistentStorage;
- (void)loadNetworkObjectsAndSynchronizePropertiesWithPersistentStorage;
- (void)exitWithStatus:(int)arg1;
- (void)verifyLaunchedByLaunchd;
- (void)shutdown;
- (void)setupSBSAccounts;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)systemNetworkDidChange;
- (void)_tearDownNetworkChangeNotificationListener;
- (void)_setupNetworkChangeNotificationListener;
- (void)_setupTimeChangeMonitor;
- (void)_setupAlarmTimer;
- (void)_searchForAlarms;
- (void)setupAlarmScheduling;
- (void)sendMessageToRemoteCalNCServiceWithRetry:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)pokeNCService;
- (void)setUpNotificationCenter;
- (void)setUpMessageEngine;
- (void)tearDownSignalHandler;
- (void)tearDownMemorySensor;
- (void)setUpSignalHandler;
- (void)setUpMemorySensor;
- (void)clearOldPersistentHistoryEntries;
- (void)scheduleEveryOtherDayTasks;
- (void)start;
- (void)setupCoreDataServer;

@end

