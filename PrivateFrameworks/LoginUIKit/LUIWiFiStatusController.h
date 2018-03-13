//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUIController.h>

@class CWInterface, CWWiFiClient, NSImageView;

@interface LUIWiFiStatusController : LUIController
{
    NSImageView *_wifiImageView;
    CWInterface *_interface;
    CWWiFiClient *_client;
    BOOL _paused;
}

+ (id)controllerWithStyle:(int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)resumeController;
- (void)pauseController;
- (void)tearDownController;
- (void)_setupContentView;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)modeDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)linkQualityDidChangeForWiFiInterfaceWithName:(id)arg1 rssi:(long long)arg2 transmitRate:(double)arg3;
- (void)linkDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)interfaceRemovedWithName:(id)arg1;
- (void)interfaceAddedWithName:(id)arg1;
- (void)_updateStatus;
- (void)_handleNotification:(id)arg1;

@end

