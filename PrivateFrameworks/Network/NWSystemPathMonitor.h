//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_source>, NWMonitor, NWPathEvaluator;

@interface NWSystemPathMonitor : NSObject
{
    BOOL _wifiPrimary;
    BOOL _ethernetPrimary;
    BOOL _vpnActive;
    int _vpnNotifyToken;
    NWMonitor *_vpnMonitor;
    NWPathEvaluator *_primaryEvaluator;
    NSMutableDictionary *_perAppVPNEvaluators;
    NSObject<OS_dispatch_source> *_smoothingTimer;
    struct tcp_connection_fallback_watch_s *_fallbackWatcher;
    NSObject<OS_dispatch_source> *_mptcpWatcher;
}

+ (id)sharedSystemPathMonitor;
@property NSObject<OS_dispatch_source> *mptcpWatcher; // @synthesize mptcpWatcher=_mptcpWatcher;
@property struct tcp_connection_fallback_watch_s *fallbackWatcher; // @synthesize fallbackWatcher=_fallbackWatcher;
@property(retain) NSObject<OS_dispatch_source> *smoothingTimer; // @synthesize smoothingTimer=_smoothingTimer;
@property(retain) NSMutableDictionary *perAppVPNEvaluators; // @synthesize perAppVPNEvaluators=_perAppVPNEvaluators;
@property int vpnNotifyToken; // @synthesize vpnNotifyToken=_vpnNotifyToken;
@property(retain) NWPathEvaluator *primaryEvaluator; // @synthesize primaryEvaluator=_primaryEvaluator;
@property(retain) NWMonitor *vpnMonitor; // @synthesize vpnMonitor=_vpnMonitor;
@property(nonatomic, getter=isVPNActive) BOOL vpnActive; // @synthesize vpnActive=_vpnActive;
@property(nonatomic, getter=isEthernetPrimary) BOOL ethernetPrimary; // @synthesize ethernetPrimary=_ethernetPrimary;
@property(nonatomic, getter=isWiFiPrimary) BOOL wifiPrimary; // @synthesize wifiPrimary=_wifiPrimary;
- (void).cxx_destruct;
- (void)updateVPNMonitor;
- (void)registerForVPNNotifications;
- (void)stopWatchingApplicationStates;
- (void)startWatchingApplicationStates;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)eventFired;
- (void)updateFlags;
- (void)dealloc;
- (id)init;

@end

