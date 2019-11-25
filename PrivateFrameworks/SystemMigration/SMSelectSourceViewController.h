//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMViewController.h>

#import "SMSystemScannerClient.h"
#import "SMSystemScannerClientChangesProtocol.h"

@class IASPickerViewController, NSArrayController, NSImageView, NSLayoutConstraint, NSObject<SMSelectSourceDelegate>, NSProgressIndicator, NSScrollView, NSString, NSTableView, NSTextField, NSView, SMSystemScanner_Client, SMSystem_Client;

@interface SMSelectSourceViewController : SMViewController <SMSystemScannerClientChangesProtocol, SMSystemScannerClient>
{
    BOOL _shouldShowPreparingSource;
    BOOL _settingUpCustomize;
    BOOL _waitingForNetworkSourceConnection;
    BOOL _waitingForBenchmarking;
    unsigned long long _migrateMode;
    NSView *_selectSystemViewContainer;
    NSObject<SMSelectSourceDelegate> *_delegate;
    IASPickerViewController *_systemPickerViewController;
    SMSystem_Client *_selectShareSystem;
    SMSystem_Client *_selectBackupsSystem;
    SMSystem_Client *_selectVolumeSystem;
    SMSystem_Client *_selectSnapshotSystem;
    NSArrayController *_selectSharesArrayController;
    NSArrayController *_selectBackupsArrayController;
    NSArrayController *_selectVolumesArrayController;
    NSArrayController *_selectSnapshotsArrayController;
    NSScrollView *_selectSharesScrollView;
    NSScrollView *_selectBackupsScrollView;
    NSScrollView *_selectVolumesScrollView;
    NSScrollView *_selectSnapshotsScrollView;
    NSProgressIndicator *_noSourcesProgressIndicator;
    NSTextField *_noSourcesTextField;
    NSView *_accessoryMountingContainerView;
    NSTableView *_sharesTableView;
    NSLayoutConstraint *_sharesTableViewWidthContstraint;
    NSTableView *_backupTableView;
    NSLayoutConstraint *_backupTableViewWidthContstraint;
    NSTableView *_volumeTableView;
    NSLayoutConstraint *_volumeTableViewWidthContstraint;
    NSString *_currentWirelessNetworkName;
    NSString *_currentWirelessBSSName;
    CDUnknownBlockType _editWifiHandler;
    CDUnknownBlockType _updateSystemHandler;
    SMSystem_Client *_highlightedSystem;
    SMSystem_Client *_foundHandoffResponse;
    NSImageView *_highlightingView;
    NSLayoutConstraint *_highlightingViewYPosConstraint;
    NSLayoutConstraint *_highlightingViewXPosConstraint;
    NSLayoutConstraint *_highlightingViewHeightConstraint;
    NSLayoutConstraint *_highlightingViewWidthConstraint;
    SMSystemScanner_Client *_scannerClient;
    SMViewController *_connectOtherServerSheet;
    NSString *_connectOtherServerStatus;
    NSString *_connectOtherServer;
    unsigned long long _requestedClientScannerState;
    SMSystem_Client *_finalSelectedSystem;
}

+ (id)keyPathsForValuesAffectingShouldShowWirelessNetworkName;
+ (id)keyPathsForValuesAffectingRecalculateDetailTableViewWidth;
+ (id)keyPathsForValuesAffectingDetailViewTabIndex;
+ (id)keyPathsForValuesAffectingSelectActionAvailable;
+ (id)keyPathsForValuesAffectingOtherActionAvailable;
+ (id)keyPathsForValuesAffectingHeadingText;
+ (id)keyPathsForValuesAffectingStatusText;
+ (id)keyPathsForValuesAffectingShouldShowStatus;
@property __weak SMSystem_Client *finalSelectedSystem; // @synthesize finalSelectedSystem=_finalSelectedSystem;
@property(getter=isWaitingForBenchmarking) BOOL waitingForBenchmarking; // @synthesize waitingForBenchmarking=_waitingForBenchmarking;
@property(getter=isWaitingForNetworkSourceConnection) BOOL waitingForNetworkSourceConnection; // @synthesize waitingForNetworkSourceConnection=_waitingForNetworkSourceConnection;
@property(getter=isSettingUpCustomize) BOOL settingUpCustomize; // @synthesize settingUpCustomize=_settingUpCustomize;
@property unsigned long long requestedClientScannerState; // @synthesize requestedClientScannerState=_requestedClientScannerState;
@property(retain) NSString *connectOtherServer; // @synthesize connectOtherServer=_connectOtherServer;
@property(retain) NSString *connectOtherServerStatus; // @synthesize connectOtherServerStatus=_connectOtherServerStatus;
@property(retain) SMViewController *connectOtherServerSheet; // @synthesize connectOtherServerSheet=_connectOtherServerSheet;
@property(retain) SMSystemScanner_Client *scannerClient; // @synthesize scannerClient=_scannerClient;
@property(retain) NSLayoutConstraint *highlightingViewWidthConstraint; // @synthesize highlightingViewWidthConstraint=_highlightingViewWidthConstraint;
@property(retain) NSLayoutConstraint *highlightingViewHeightConstraint; // @synthesize highlightingViewHeightConstraint=_highlightingViewHeightConstraint;
@property(retain) NSLayoutConstraint *highlightingViewXPosConstraint; // @synthesize highlightingViewXPosConstraint=_highlightingViewXPosConstraint;
@property(retain) NSLayoutConstraint *highlightingViewYPosConstraint; // @synthesize highlightingViewYPosConstraint=_highlightingViewYPosConstraint;
@property(retain) NSImageView *highlightingView; // @synthesize highlightingView=_highlightingView;
@property __weak SMSystem_Client *foundHandoffResponse; // @synthesize foundHandoffResponse=_foundHandoffResponse;
@property __weak SMSystem_Client *highlightedSystem; // @synthesize highlightedSystem=_highlightedSystem;
@property(copy) CDUnknownBlockType updateSystemHandler; // @synthesize updateSystemHandler=_updateSystemHandler;
@property(copy) CDUnknownBlockType editWifiHandler; // @synthesize editWifiHandler=_editWifiHandler;
@property(retain) NSString *currentWirelessBSSName; // @synthesize currentWirelessBSSName=_currentWirelessBSSName;
@property(retain) NSString *currentWirelessNetworkName; // @synthesize currentWirelessNetworkName=_currentWirelessNetworkName;
@property BOOL shouldShowPreparingSource; // @synthesize shouldShowPreparingSource=_shouldShowPreparingSource;
@property NSLayoutConstraint *volumeTableViewWidthContstraint; // @synthesize volumeTableViewWidthContstraint=_volumeTableViewWidthContstraint;
@property NSTableView *volumeTableView; // @synthesize volumeTableView=_volumeTableView;
@property NSLayoutConstraint *backupTableViewWidthContstraint; // @synthesize backupTableViewWidthContstraint=_backupTableViewWidthContstraint;
@property NSTableView *backupTableView; // @synthesize backupTableView=_backupTableView;
@property NSLayoutConstraint *sharesTableViewWidthContstraint; // @synthesize sharesTableViewWidthContstraint=_sharesTableViewWidthContstraint;
@property NSTableView *sharesTableView; // @synthesize sharesTableView=_sharesTableView;
@property NSView *accessoryMountingContainerView; // @synthesize accessoryMountingContainerView=_accessoryMountingContainerView;
@property NSTextField *noSourcesTextField; // @synthesize noSourcesTextField=_noSourcesTextField;
@property NSProgressIndicator *noSourcesProgressIndicator; // @synthesize noSourcesProgressIndicator=_noSourcesProgressIndicator;
@property NSScrollView *selectSnapshotsScrollView; // @synthesize selectSnapshotsScrollView=_selectSnapshotsScrollView;
@property NSScrollView *selectVolumesScrollView; // @synthesize selectVolumesScrollView=_selectVolumesScrollView;
@property NSScrollView *selectBackupsScrollView; // @synthesize selectBackupsScrollView=_selectBackupsScrollView;
@property NSScrollView *selectSharesScrollView; // @synthesize selectSharesScrollView=_selectSharesScrollView;
@property NSArrayController *selectSnapshotsArrayController; // @synthesize selectSnapshotsArrayController=_selectSnapshotsArrayController;
@property NSArrayController *selectVolumesArrayController; // @synthesize selectVolumesArrayController=_selectVolumesArrayController;
@property NSArrayController *selectBackupsArrayController; // @synthesize selectBackupsArrayController=_selectBackupsArrayController;
@property NSArrayController *selectSharesArrayController; // @synthesize selectSharesArrayController=_selectSharesArrayController;
@property __weak SMSystem_Client *selectSnapshotSystem; // @synthesize selectSnapshotSystem=_selectSnapshotSystem;
@property __weak SMSystem_Client *selectVolumeSystem; // @synthesize selectVolumeSystem=_selectVolumeSystem;
@property __weak SMSystem_Client *selectBackupsSystem; // @synthesize selectBackupsSystem=_selectBackupsSystem;
@property __weak SMSystem_Client *selectShareSystem; // @synthesize selectShareSystem=_selectShareSystem;
@property(retain) IASPickerViewController *systemPickerViewController; // @synthesize systemPickerViewController=_systemPickerViewController;
@property NSObject<SMSelectSourceDelegate> *delegate; // @synthesize delegate=_delegate;
@property NSView *selectSystemViewContainer; // @synthesize selectSystemViewContainer=_selectSystemViewContainer;
@property unsigned long long migrateMode; // @synthesize migrateMode=_migrateMode;
- (void).cxx_destruct;
- (void)daemonConnectionLost;
- (void)pressedEditWifi:(id)arg1;
- (void)clickConnectOtherCancel;
- (void)clickConnectOtherOK;
- (void)displayConnectOtherShowMessage:(id)arg1;
- (void)pressedConnectOther:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)establishNetworkSourceConnectionStateForSystem:(id)arg1;
- (void)systemScannerSystemChanged:(id)arg1 onSystem:(id)arg2;
- (void)systemScannerRemovedSystem:(id)arg1;
- (void)systemScannerFoundHandoffResponse:(id)arg1;
- (void)systemScannerAddedSystem:(id)arg1;
- (void)unhighlightSystem;
- (void)highlightSystem;
- (void)presentConnectionFailureAlert;
- (void)presentBadSystemAlertAndClear:(BOOL)arg1;
@property(readonly) BOOL shouldShowWirelessNetworkName;
- (BOOL)shouldUpdateToMatchSourceSystem:(id)arg1;
- (id)oneDecimalVersion:(id)arg1;
- (void)presentNeedsUpdateAlertForSystem:(id)arg1;
- (BOOL)presentServerDeprecationAlertForSystem:(id)arg1;
- (void)recalculateDetailTableViewWidthForTab:(unsigned long long)arg1;
@property(readonly) unsigned long long detailViewTabIndex;
@property(readonly) BOOL selectActionAvailable;
@property(readonly) BOOL otherActionAvailable;
@property(readonly) NSString *headingText;
@property(readonly) BOOL atLeastOneSource;
- (BOOL)pressedBackButton:(id)arg1;
- (void)selectNetworkSystem:(id)arg1;
- (BOOL)pressedSelectButton:(id)arg1;
- (void)signalSelectionImmediate:(id)arg1;
- (void)signalSelection:(id)arg1;
@property(readonly) NSString *statusText;
@property(readonly) BOOL shouldShowStatus;
- (void)resetForNewSelection:(BOOL)arg1;
- (id)selectedSnapshot;
- (id)selectedShareSystem;
- (id)selectedVolumeSystem;
- (id)selectedBackupSystem;
- (id)selectedSystem;
- (id)selectedObjectFromArrayController:(id)arg1;
- (void)systemScannerRequestsHighlightOfSystem:(id)arg1;
- (void)setupHighlightingView;
- (void)awakeFromNib;
- (void)installSelectViewInSuperview:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

