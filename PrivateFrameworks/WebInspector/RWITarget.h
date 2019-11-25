//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString, RWIBaseManager, RWIServiceConnection;

@interface RWITarget : NSObject
{
    id <RWITargetDelegate> _delegate;
    BOOL _supportsRemoteWebInspector;
    NSString *_name;
    NSString *_udid;
    NSString *_buildVersion;
    NSString *_productVersion;
    NSMutableDictionary *_applications;
    NSMutableDictionary *_drivers;
    RWIBaseManager *_manager;
    RWIServiceConnection *_connection;
    long long _readyState;
    BOOL _wantsAutomaticInspectionEnabled;
}

@property(retain, nonatomic) RWIServiceConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) RWIBaseManager *manager; // @synthesize manager=_manager;
@property(nonatomic) long long readyState; // @synthesize readyState=_readyState;
@property(readonly, copy, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, copy, nonatomic) NSString *udid; // @synthesize udid=_udid;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) BOOL supportsRemoteWebInspector; // @synthesize supportsRemoteWebInspector=_supportsRemoteWebInspector;
@property(nonatomic) __weak id <RWITargetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)launchOrActivateApplicationWithBundleIdentifier:(id)arg1;
- (void)inspectAutomaticInspectionCandidate:(id)arg1 pauseImmediately:(BOOL)arg2;
- (void)shouldAcceptAutomaticInspectionCandidate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)driverWithIdentifier:(id)arg1;
- (void)removeDriver:(id)arg1;
- (void)addDriver:(id)arg1;
- (id)applicationWithIdentifier:(id)arg1;
- (void)removeApplication:(id)arg1;
- (void)addApplication:(id)arg1;
- (void)readyStateChanged;
- (void)markAsHavingBasicInformation;
@property(nonatomic) BOOL automaticInspectionEnabled;
@property(readonly, nonatomic) NSString *loggingIdentifier;
@property(readonly, nonatomic) NSArray *drivers; // @dynamic drivers;
@property(readonly, nonatomic) NSArray *allApplications; // @dynamic allApplications;
@property(readonly, nonatomic) NSArray *activeApplications; // @dynamic activeApplications;
@property(readonly, nonatomic) NSArray *applications; // @dynamic applications;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) BOOL isMachine; // @dynamic isMachine;
@property(readonly, nonatomic) BOOL isSimulator; // @dynamic isSimulator;
@property(readonly, nonatomic) BOOL isDevice; // @dynamic isDevice;
@property(readonly, nonatomic) BOOL isIOS; // @dynamic isIOS;
@property(readonly, nonatomic) BOOL supportsWebDriver;
@property(readonly, nonatomic) BOOL supportsAutomaticInspection;
@property(readonly, nonatomic) BOOL isReady; // @dynamic isReady;
@property(readonly, nonatomic) BOOL hadConnectionError; // @dynamic hadConnectionError;
- (void)setName:(id)arg1 udid:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 supportsRemoteWebInspector:(BOOL)arg5;
- (id)description;
- (id)initWithUDID:(id)arg1 name:(id)arg2 manager:(id)arg3;
- (id)initWithManager:(id)arg1;

@end

