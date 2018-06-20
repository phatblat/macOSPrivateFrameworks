//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSObject<OS_os_log>, RPPeopleDiscovery, _CDContextualKeyPath;

@interface _DKUserNearbyMonitor : _DKMonitor
{
    BOOL _enabled;
    BOOL _sensorTrackingEnabled;
    int _shouldMonitorToken;
    int _loginNotifyToken;
    unsigned int _discoveryFlags;
    NSObject<OS_os_log> *_log;
    _CDContextualKeyPath *_userNearbyKeyPath;
    long long _previousLevel;
    RPPeopleDiscovery *_discovery;
    unsigned long long _activeConsoleUser;
}

+ (id)eventStream;
+ (id)entitlements;
@property(nonatomic) unsigned int discoveryFlags; // @synthesize discoveryFlags=_discoveryFlags;
@property(nonatomic) unsigned long long activeConsoleUser; // @synthesize activeConsoleUser=_activeConsoleUser;
@property(nonatomic) int loginNotifyToken; // @synthesize loginNotifyToken=_loginNotifyToken;
@property(nonatomic) int shouldMonitorToken; // @synthesize shouldMonitorToken=_shouldMonitorToken;
@property(retain, nonatomic) RPPeopleDiscovery *discovery; // @synthesize discovery=_discovery;
@property(nonatomic) long long previousLevel; // @synthesize previousLevel=_previousLevel;
@property(retain, nonatomic) _CDContextualKeyPath *userNearbyKeyPath; // @synthesize userNearbyKeyPath=_userNearbyKeyPath;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(nonatomic) BOOL sensorTrackingEnabled; // @synthesize sensorTrackingEnabled=_sensorTrackingEnabled;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)stop;
- (void)start;
- (void)_queue_updateMonitoringWithState:(unsigned long long)arg1;
- (void)_queue_updateLoginWithUid:(unsigned long long)arg1;
- (void)_queue_enableDiscovery;
- (void)_queue_handlePersonChanged:(id)arg1 proximityHint:(int)arg2;
- (void)setUserProximityLevel:(long long)arg1;
- (long long)proximityLevelFromRPPerson:(id)arg1;
- (long long)userProximityForRapportProx:(int)arg1;
- (void)initializeDiscovery;
- (void)queue_recoveryAttempt;
- (void)queue_invalidateDiscovery;
- (void)dealloc;
- (id)init;

@end

