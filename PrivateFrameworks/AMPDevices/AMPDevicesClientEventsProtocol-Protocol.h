//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AMPDeviceBatteryInfo, AMPDeviceInfo, AMPDeviceSoftwareInfo, AMPDeviceSyncPrefs, NSDictionary, NSError, NSString, NSWindow;

@protocol AMPDevicesClientEventsProtocol

@optional
- (void)openPanelWithParameters:(NSDictionary *)arg1 withReply:(void (^)(long long, NSArray *))arg2;
- (void)showErrorReportWithParameters:(NSDictionary *)arg1 withReply:(void (^)(long long))arg2;
- (void)showReportWithParameters:(NSDictionary *)arg1 withReply:(void (^)(long long))arg2;
- (void)promptForPasswordWithParameters:(NSDictionary *)arg1 inParentWindow:(NSWindow *)arg2 withReply:(void (^)(long long, NSString *, NSString *, BOOL))arg3;
- (void)askUserWithParameters:(NSDictionary *)arg1 withReply:(void (^)(long long, BOOL))arg2;
- (void)canShowUserInteractionForDeviceWithIdentifier:(NSString *)arg1 withReply:(void (^)(BOOL, BOOL))arg2;
- (void)didCompleteIPodVoiceOverKitInstallForDeviceWithIdentifier:(NSString *)arg1 withError:(NSError *)arg2;
- (void)didStartIPodVoiceOverKitInstallForDeviceWithIdentifier:(NSString *)arg1;
- (void)updateAvailableWithSoftwareInfo:(AMPDeviceSoftwareInfo *)arg1 forDeviceWithIdentifier:(NSString *)arg2;
- (void)didRemoveDeviceWithIdentifier:(NSString *)arg1;
- (void)didHideDeviceWithIdentifier:(NSString *)arg1;
- (void)didCompleteSoftwareUpdateRestoreForDeviceWithIdentifier:(NSString *)arg1 withError:(NSError *)arg2;
- (void)didStartSoftwareUpdateRestoreForDeviceWithIdentifier:(NSString *)arg1;
- (void)didCompleteSoftwareDownloadForDeviceWithIdentifier:(NSString *)arg1 withError:(NSError *)arg2;
- (void)didStartSoftwareDownloadForDeviceWithIdentifier:(NSString *)arg1;
- (void)didChangeSoftwareInfoForDeviceWithIdentifier:(NSString *)arg1;
- (void)didCompleteRestoreFromBackupForDeviceWithIdentifier:(NSString *)arg1 withError:(NSError *)arg2;
- (void)didStartRestoreFromBackupForDeviceWithIdentifier:(NSString *)arg1;
- (void)didCompleteBackupForDeviceWithIdentifier:(NSString *)arg1 withError:(NSError *)arg2;
- (void)didStartBackupForDeviceWithIdentifier:(NSString *)arg1;
- (void)didChangeSyncErrorState:(BOOL)arg1 forDeviceWithIdentifier:(NSString *)arg2;
- (void)didCompleteSyncForDeviceWithIdentifier:(NSString *)arg1 withError:(NSError *)arg2;
- (void)didStartSyncForDeviceWithIdentifier:(NSString *)arg1;
- (void)didChangeSyncAllowedState:(BOOL)arg1 forDeviceWithIdentifier:(NSString *)arg2;
- (void)didChangeBackupInfoForDeviceWithIdentifier:(NSString *)arg1;
- (void)didChangeDeviceTotals:(NSDictionary *)arg1 forDeviceWithIdentifier:(NSString *)arg2;
- (void)didChangeDeviceSyncPrefs:(AMPDeviceSyncPrefs *)arg1 forDeviceWithIdentifier:(NSString *)arg2;
- (void)didChangeDeviceInfo:(AMPDeviceInfo *)arg1 forDeviceWithIdentifier:(NSString *)arg2;
- (void)didChangeDeviceName:(NSString *)arg1 forDeviceWithIdentifier:(NSString *)arg2;
- (void)didChangeBatteryInfo:(AMPDeviceBatteryInfo *)arg1 forDeviceWithIdentifier:(NSString *)arg2;
- (void)requestCompleteWithActivationInfo:(NSDictionary *)arg1 forDeviceWithIdentifier:(NSString *)arg2 withError:(NSError *)arg3;
- (void)didChangeDevicesClientConnectionState:(unsigned long long)arg1;
@end
