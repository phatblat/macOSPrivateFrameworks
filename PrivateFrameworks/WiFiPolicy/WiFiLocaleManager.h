//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WiFiLocationManagerDelegate.h"

@class NSDateFormatter, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, WiFiLocationManager;

@interface WiFiLocaleManager : NSObject <WiFiLocationManagerDelegate>
{
    unsigned char _isWaitingForLocationUpdate;
    unsigned char _testModeEnabled;
    int _localeSource;
    int _testMcc;
    id <WiFiLocaleManagerDelegate> _delegate;
    NSString *_localeCountryCode;
    double _localeTimeout;
    double _localeLastUpdatedTime;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_localeTimer;
    NSDateFormatter *_dateFormatter;
    WiFiLocationManager *_locationManager;
    NSString *_testHost11d;
    NSString *_testPeer;
}

+ (id)getStringOfLocaleSource:(int)arg1;
@property(retain) NSString *testPeer; // @synthesize testPeer=_testPeer;
@property(retain) NSString *testHost11d; // @synthesize testHost11d=_testHost11d;
@property int testMcc; // @synthesize testMcc=_testMcc;
@property unsigned char testModeEnabled; // @synthesize testModeEnabled=_testModeEnabled;
@property unsigned char isWaitingForLocationUpdate; // @synthesize isWaitingForLocationUpdate=_isWaitingForLocationUpdate;
@property(retain) WiFiLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain) NSObject<OS_dispatch_source> *localeTimer; // @synthesize localeTimer=_localeTimer;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property double localeLastUpdatedTime; // @synthesize localeLastUpdatedTime=_localeLastUpdatedTime;
@property double localeTimeout; // @synthesize localeTimeout=_localeTimeout;
@property int localeSource; // @synthesize localeSource=_localeSource;
@property(retain) NSString *localeCountryCode; // @synthesize localeCountryCode=_localeCountryCode;
@property(nonatomic) __weak id <WiFiLocaleManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didUpdateLocations:(id)arg1;
- (void)didChangeAuthorizationStatus;
- (id)getRestrictedCountryCodeFromTimezone;
- (id)getRestrictedCountryCodeFromRegionInfo;
- (id)getLocaleFromTimezone;
- (void)setCountryCode:(id)arg1 source:(int)arg2;
- (id)applyCountryCodeExceptions:(id)arg1;
- (unsigned char)getNetworkReachability;
- (id)getLocaleFromPeer;
- (id)getLocaleFrom80211dInfo;
- (id)getLocaleUsingBoundingBoxes:(id)arg1;
- (id)getLocaleUsingReverseGeocoder:(id)arg1;
- (id)getLocaleFromLocation:(id)arg1;
- (id)getLocaleFromMcc;
- (id)getLocaleFromCompanion;
- (void)_determineAndSetLocale:(unsigned char)arg1;
- (id)getLocaleCountryCode;
- (double)getLocaleLastUpdatedTime;
- (int)getLocaleSource;
- (void)setLocaleTestParams:(id)arg1;
- (void)determineAndSetLocale:(unsigned char)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

