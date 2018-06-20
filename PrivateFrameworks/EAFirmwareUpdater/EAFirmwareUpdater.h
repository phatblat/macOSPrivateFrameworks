//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MobileAssetUpdater.h"

#import "EAAccessoryDelegate.h"
#import "NSStreamDelegate.h"
#import "iAUPServerDelegate.h"

@class EAAccessory, EASession, NSMutableData, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSURL, iAUPServer;

@interface EAFirmwareUpdater : MobileAssetUpdater <EAAccessoryDelegate, NSStreamDelegate, iAUPServerDelegate>
{
    unsigned int _productIDCode;
    EAAccessory *_accessory;
    NSString *_protocolString;
    EASession *_session;
    NSString *_bootloaderProtocol;
    NSString *_appProtocol;
    unsigned long long _firmwareVersionMajor;
    unsigned long long _firmwareVersionMinor;
    unsigned long long _firmwareVersionRelease;
    NSString *_firmwareBundleFilename;
    NSURL *_firmwareBundleURL;
    CDUnknownBlockType _applyCompletion;
    CDUnknownBlockType _progressHandler;
    NSMutableData *_outputData;
    iAUPServer *_iAUPServer;
    NSObject<OS_dispatch_queue> *_eaNotificationDispatchQueue;
    BOOL _firmwareUpdateComplete;
    int _isExpectingReconnect;
    NSTimer *_reconnectTimer;
    BOOL _forceSilentUpdate;
    BOOL _skipDFUMode;
    BOOL _byteEscape;
    NSString *_updateBundleFilename;
    NSURL *_updateBundleURL;
}

+ (id)findAccessoryWithProductIDCode:(unsigned int)arg1;
+ (id)appProtocolStringWithProductIDCode:(unsigned int)arg1;
+ (id)bootloaderProtocolStringWithProductIDCode:(unsigned int)arg1;
@property(nonatomic) BOOL skipDFUMode; // @synthesize skipDFUMode=_skipDFUMode;
@property(nonatomic) BOOL forceSilentUpdate; // @synthesize forceSilentUpdate=_forceSilentUpdate;
@property(copy, nonatomic) CDUnknownBlockType applyCompletion; // @synthesize applyCompletion=_applyCompletion;
@property(retain, nonatomic) iAUPServer *server; // @synthesize server=_iAUPServer;
@property(retain, nonatomic) NSURL *firmwareBundleURL; // @synthesize firmwareBundleURL=_updateBundleURL;
@property(retain, nonatomic) NSString *firmwareBundleFilename; // @synthesize firmwareBundleFilename=_updateBundleFilename;
@property(retain, nonatomic) NSString *appProtocol; // @synthesize appProtocol=_appProtocol;
@property(retain, nonatomic) NSString *bootloaderProtocol; // @synthesize bootloaderProtocol=_bootloaderProtocol;
@property(nonatomic) unsigned int productIDCode; // @synthesize productIDCode=_productIDCode;
@property(retain, nonatomic) NSString *protocolString; // @synthesize protocolString=_protocolString;
@property(retain, nonatomic) EASession *session; // @synthesize session=_session;
@property(retain, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_accessoryDidConnect:(id)arg1;
- (void)accessoryDidDisconnect:(id)arg1;
- (void)handleInputData;
- (id)flushOutput;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)updateComplete:(id)arg1;
- (void)firmwareUpdateComplete:(id)arg1;
- (void)updateProgress:(double)arg1;
- (void)logStatusString:(id)arg1;
- (id)writeData:(id)arg1;
- (id)openSession;
- (id)applyFirmware:(CDUnknownBlockType)arg1 progress:(CDUnknownBlockType)arg2;
- (id)validateAsset;
- (id)validateAssetAttributes:(id)arg1;
- (id)assetWithMaxVersion:(id)arg1;
- (id)queryPredicate;
- (id)overrideQueryPredicateFromDict:(id)arg1;
- (id)supportedProtocolForAccessory:(id)arg1;
- (void)reconnectTimerDidFire:(id)arg1;
- (void)stopReconnectTimer;
- (void)startReconnectTimer:(int)arg1;
- (BOOL)findAccessory;
- (void)dealloc;
- (id)initWithProductIDCode:(unsigned int)arg1 assetType:(id)arg2 skipDFU:(BOOL)arg3 byteEscape:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

