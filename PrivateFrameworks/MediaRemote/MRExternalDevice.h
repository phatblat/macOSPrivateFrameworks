//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRSupportedProtocolMessages, NSString;

__attribute__((visibility("hidden")))
@interface MRExternalDevice : NSObject
{
    BOOL _valid;
    unsigned int _connectionState;
    void *_deviceInfo;
}

@property(readonly, nonatomic) unsigned int connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) void *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void)sendClientUpdatesConfigMessage;
- (id)currentClientUpdatesConfigMessage;
- (id)errorForCurrentState;
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setVolume:(float)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)volumeWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setVolumeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)unpair;
- (void)disconnect:(id)arg1;
- (void)connectWithOptions:(unsigned int)arg1;
@property(readonly, nonatomic) void *customOrigin;
@property(nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing;
@property(readonly, nonatomic, getter=isPaired) BOOL paired;
@property(nonatomic) BOOL wantsVolumeNotifications;
@property(nonatomic) BOOL wantsNowPlayingArtworkNotifications;
@property(nonatomic) BOOL wantsNowPlayingNotifications;
@property(retain, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property(readonly, nonatomic) long long port;
@property(readonly, nonatomic) NSString *hostName;
@property(readonly, nonatomic) NSString *name;
- (id)_init;

@end

