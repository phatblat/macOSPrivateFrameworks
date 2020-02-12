//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface EasyConfigDevice : NSObject <NSCopying>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_userQueue;
    NSDictionary *_scanRecord;
    BOOL _started;
    int _firstErr;
    struct BonjourBrowser *_airplayBrowser;
    NSDictionary *_airplayBonjourInfo;
    struct BonjourBrowser *_raopBrowser;
    NSDictionary *_raopBonjourInfo;
    struct BonjourBrowser *_mfiConfigBrowser;
    NSDictionary *_mfiConfigBonjourInfo;
    struct BonjourBrowser *_hapBrowser;
    NSDictionary *_hapBonjourInfo;
    unsigned int _configSeed;
    struct HTTPClientPrivate *_httpClient;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    int _state;
    double _securityStartTime;
    double _securityFinishTime;
    struct MFiSAP *_mfiSAP;
    struct PairingSessionPrivate *_pairingSession;
    CDUnknownBlockType _promptForSetupCodeBlock;
    unsigned long long _deviceIdentifier;
    unsigned long long _features;
    NSString *_model;
    NSString *_name;
    NSDictionary *_configuration;
    NSDictionary *_configResponse;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    BOOL _pausesAfterApply;
    BOOL _skipPairSetup;
    BOOL _supportsHAP;
    BOOL _supportsHAP2;
    BOOL _supportsMFi;
    BOOL _supportsPairSetup;
    BOOL _supportsTLV;
    BOOL _preConfigMetricsSet;
    CDStruct_56123b44 _preConfigMetrics;
    BOOL _postConfigMetricsSet;
    CDStruct_6a23f5a0 _postConfigMetrics;
    double _configStartTime;
    double _findPreConfigStartTime;
    double _findPreConfigFoundTime;
    double _findPostConfigStartTime;
    double _findPostConfigFoundTime;
    double _applyConfigStartTime;
    double _applyConfigFinishTime;
    double _postConfigCheckStartTime;
    double _postConfigCheckFinishTime;
    NSDictionary *_deviceInfo;
    double _promptForSetupCodeTime;
    unsigned int _enterSetupCodeMs;
    BOOL _hasPairingDelegate;
    struct {
        void *context;
        CDUnknownFunctionPointerType showSetupCode_f;
        CDUnknownFunctionPointerType hideSetupCode_f;
        CDUnknownFunctionPointerType promptForSetupCode_f;
        CDUnknownFunctionPointerType copyIdentity_f;
        CDUnknownFunctionPointerType findPeer_f;
        CDUnknownFunctionPointerType savePeer_f;
        CDUnknownFunctionPointerType resumeRequest_f;
        CDUnknownFunctionPointerType resumeResponse_f;
    } _pairingDelegate;
    CDUnknownBlockType _progressHandler;
}

+ (id)deviceWithScanRecord:(id)arg1;
+ (id)deviceWithInfo:(id)arg1;
+ (BOOL)supportedScanRecord:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) BOOL skipPairSetup; // @synthesize skipPairSetup=_skipPairSetup;
@property(nonatomic) BOOL pausesAfterApply; // @synthesize pausesAfterApply=_pausesAfterApply;
@property(nonatomic) unsigned int pairVerifyFlags; // @synthesize pairVerifyFlags=_pairVerifyFlags;
@property(nonatomic) unsigned int pairSetupFlags; // @synthesize pairSetupFlags=_pairSetupFlags;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long features; // @synthesize features=_features;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_userQueue;
@property(nonatomic) unsigned long long deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (int)_timeoutTimerStart:(int)arg1 block:(CDUnknownBlockType)arg2;
- (int)_startBonjourWithTimeout:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (int)_setupClient:(id)arg1;
- (void)_postProgress:(int)arg1 withResponse:(id)arg2;
- (void)_postProgress:(int)arg1 info:(id)arg2;
- (void)_postNote:(id)arg1 info:(id)arg2;
- (void)_logEnded;
- (void)_handleError:(int)arg1;
-     // Error parsing type: v24@0:8^{HTTPMessagePrivate={__CFRuntimeBase=QAQ}^{HTTPMessagePrivate}{?=[8192c]Q*Q*Qi*Q{?=*Q*Q*Q*Q*Q*Q*Q***Q*Q}*Qi*QCQCi}CiC*QQQ[32000C]*^{?}*Q[2{iovec=^vQ}]^{iovec}iQiii^v^v^v^v^v^v^?^?@?iCq*iQI}16, name: _postConfigCheckCompletion:
- (void)_postConfigCheckStart:(id)arg1;
- (void)_findDevicePostConfigEvent:(unsigned int)arg1 info:(id)arg2;
- (int)_findDevicePostConfigStart;
-     // Error parsing type: v24@0:8^{HTTPMessagePrivate={__CFRuntimeBase=QAQ}^{HTTPMessagePrivate}{?=[8192c]Q*Q*Qi*Q{?=*Q*Q*Q*Q*Q*Q*Q***Q*Q}*Qi*QCQCi}CiC*QQQ[32000C]*^{?}*Q[2{iovec=^vQ}]^{iovec}iQiii^v^v^v^v^v^v^?^?@?iCq*iQI}16, name: _applyConfigCompletion:
- (int)_applyConfigStart;
-     // Error parsing type: i24@0:8^{HTTPMessagePrivate={__CFRuntimeBase=QAQ}^{HTTPMessagePrivate}{?=[8192c]Q*Q*Qi*Q{?=*Q*Q*Q*Q*Q*Q*Q***Q*Q}*Qi*QCQCi}CiC*QQQ[32000C]*^{?}*Q[2{iovec=^vQ}]^{iovec}iQiii^v^v^v^v^v^v^?^?@?iCq*iQI}16, name: _pairVerifyNext:
- (int)_pairVerifyStart;
-     // Error parsing type: i24@0:8^{HTTPMessagePrivate={__CFRuntimeBase=QAQ}^{HTTPMessagePrivate}{?=[8192c]Q*Q*Qi*Q{?=*Q*Q*Q*Q*Q*Q*Q***Q*Q}*Qi*QCQCi}CiC*QQQ[32000C]*^{?}*Q[2{iovec=^vQ}]^{iovec}iQiii^v^v^v^v^v^v^?^?@?iCq*iQI}16, name: _pairSetupNext:
- (int)_pairSetupStart;
-     // Error parsing type: i24@0:8^{HTTPMessagePrivate={__CFRuntimeBase=QAQ}^{HTTPMessagePrivate}{?=[8192c]Q*Q*Qi*Q{?=*Q*Q*Q*Q*Q*Q*Q***Q*Q}*Qi*QCQCi}CiC*QQQ[32000C]*^{?}*Q[2{iovec=^vQ}]^{iovec}iQiii^v^v^v^v^v^v^?^?@?iCq*iQI}16, name: _mfiSAPNext:
- (int)_mfiSAPStart;
- (int)_configureStart:(id)arg1;
- (void)_findDevicePreConfigEvent:(unsigned int)arg1 info:(id)arg2;
- (int)_findDevicePreConfigStart;
- (void)_trySetupCode:(id)arg1;
- (void)trySetupCode:(id)arg1;
- (void)setPromptForSetupCodeHandler:(CDUnknownBlockType)arg1;
- (void)setPostConfigMetrics:(const CDStruct_6a23f5a0 *)arg1;
- (void)setPreConfigMetrics:(const CDStruct_56123b44 *)arg1;
- (void)setPairingDelegate:(const void *)arg1;
- (void)resumePostConfig;
- (void)_stop:(int)arg1;
- (void)stop;
- (void)_start;
- (void)start;
- (BOOL)removed:(id)arg1;
- (BOOL)updated:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

