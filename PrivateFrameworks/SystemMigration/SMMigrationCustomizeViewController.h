//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMViewController.h>

#import "SMCustomize_Client_Delegate.h"

@class NSAlert, NSAttributedString, NSImageView, NSLayoutConstraint, NSMutableArray, NSNumber, NSOutlineView, NSScrollView, NSString, NSTableView, NSTextField, SMConflictResolutionViewController, SMCustomizeTree_Client, SMCustomize_Client, SMFDEManagementViewController, SMMigrationCustomizeEditViewController, SMMigrationCustomizePasswordCollectWindowController, SMSystem_Client;

@interface SMMigrationCustomizeViewController : SMViewController <SMCustomize_Client_Delegate>
{
    BOOL _acceptActionAvailable;
    BOOL _customizationIsReady;
    BOOL _simpleMode;
    BOOL _targetCanBecomeFDE;
    BOOL _collectingPasswords;
    BOOL _simpleModeResolveSeen;
    BOOL _existingTokenAdmin;
    BOOL _requestAlreadySubmitted;
    BOOL _windowsUsersNeedLoginToTransfer;
    NSMutableArray *adminUserPasswordList;
    NSMutableArray *standardUserPasswordList;
    SMSystem_Client *_sourceSystem;
    NSNumber *_netSpace;
    NSNumber *_totalSize;
    NSMutableArray *_quickItems;
    SMCustomize_Client *_customizeClient;
    SMCustomizeTree_Client *_customizeTree;
    NSImageView *_toArrowIconView;
    NSTableView *_quickItemsTable;
    NSLayoutConstraint *_quickItemsTableWidthContstraint;
    NSOutlineView *_outlineView;
    NSString *_generatedStandardUserPassword;
    SMMigrationCustomizePasswordCollectWindowController *_passwordCollectWindowController;
    NSTextField *_adminUserInstructionsField;
    NSScrollView *_adminUserTable;
    NSString *_adminUserInstructions;
    NSTextField *_standardUserInstructionsField;
    NSScrollView *_standardUserTable;
    NSString *_standardUserInstructions;
    NSLayoutConstraint *_adminTableHeight;
    NSLayoutConstraint *_standardTableHeight;
    NSLayoutConstraint *_adminTableToBottomConstraint;
    NSLayoutConstraint *_adminTableToStandardTableConstraint;
    NSLayoutConstraint *_standardTableToTopConstraint;
    NSLayoutConstraint *_standardTableToBottomConstraint;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _fdeConvertHandler;
    SMMigrationCustomizeEditViewController *_editViewController;
    SMConflictResolutionViewController *_conflictResolutionViewController;
    SMFDEManagementViewController *_fdeManagementViewController;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _connectionErrorHandler;
    NSAlert *_reconnectAlert;
}

+ (id)keyPathsForValuesAffectingViewModeTabIndex;
+ (id)keyPathsForValuesAffectingSpaceSummaryTextAdvanced;
+ (id)keyPathsForValuesAffectingSpaceSummaryText;
+ (id)keyPathsForValuesAffectingDescriptiveTotalSize;
+ (id)keyPathsForValuesAffectingDescriptiveNetSpace;
+ (void)initialize;
@property BOOL windowsUsersNeedLoginToTransfer; // @synthesize windowsUsersNeedLoginToTransfer=_windowsUsersNeedLoginToTransfer;
@property(retain) NSAlert *reconnectAlert; // @synthesize reconnectAlert=_reconnectAlert;
@property BOOL requestAlreadySubmitted; // @synthesize requestAlreadySubmitted=_requestAlreadySubmitted;
@property(copy) CDUnknownBlockType connectionErrorHandler; // @synthesize connectionErrorHandler=_connectionErrorHandler;
@property BOOL existingTokenAdmin; // @synthesize existingTokenAdmin=_existingTokenAdmin;
@property BOOL simpleModeResolveSeen; // @synthesize simpleModeResolveSeen=_simpleModeResolveSeen;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) SMFDEManagementViewController *fdeManagementViewController; // @synthesize fdeManagementViewController=_fdeManagementViewController;
@property(retain) SMConflictResolutionViewController *conflictResolutionViewController; // @synthesize conflictResolutionViewController=_conflictResolutionViewController;
@property(retain) SMMigrationCustomizeEditViewController *editViewController; // @synthesize editViewController=_editViewController;
@property BOOL collectingPasswords; // @synthesize collectingPasswords=_collectingPasswords;
@property(copy) CDUnknownBlockType fdeConvertHandler; // @synthesize fdeConvertHandler=_fdeConvertHandler;
@property BOOL targetCanBecomeFDE; // @synthesize targetCanBecomeFDE=_targetCanBecomeFDE;
@property(copy) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property NSLayoutConstraint *standardTableToBottomConstraint; // @synthesize standardTableToBottomConstraint=_standardTableToBottomConstraint;
@property NSLayoutConstraint *standardTableToTopConstraint; // @synthesize standardTableToTopConstraint=_standardTableToTopConstraint;
@property NSLayoutConstraint *adminTableToStandardTableConstraint; // @synthesize adminTableToStandardTableConstraint=_adminTableToStandardTableConstraint;
@property NSLayoutConstraint *adminTableToBottomConstraint; // @synthesize adminTableToBottomConstraint=_adminTableToBottomConstraint;
@property NSLayoutConstraint *standardTableHeight; // @synthesize standardTableHeight=_standardTableHeight;
@property NSLayoutConstraint *adminTableHeight; // @synthesize adminTableHeight=_adminTableHeight;
@property(retain) NSString *standardUserInstructions; // @synthesize standardUserInstructions=_standardUserInstructions;
@property NSScrollView *standardUserTable; // @synthesize standardUserTable=_standardUserTable;
@property NSTextField *standardUserInstructionsField; // @synthesize standardUserInstructionsField=_standardUserInstructionsField;
@property(retain) NSString *adminUserInstructions; // @synthesize adminUserInstructions=_adminUserInstructions;
@property NSScrollView *adminUserTable; // @synthesize adminUserTable=_adminUserTable;
@property NSTextField *adminUserInstructionsField; // @synthesize adminUserInstructionsField=_adminUserInstructionsField;
@property SMMigrationCustomizePasswordCollectWindowController *passwordCollectWindowController; // @synthesize passwordCollectWindowController=_passwordCollectWindowController;
@property(retain) NSString *generatedStandardUserPassword; // @synthesize generatedStandardUserPassword=_generatedStandardUserPassword;
@property NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property NSLayoutConstraint *quickItemsTableWidthContstraint; // @synthesize quickItemsTableWidthContstraint=_quickItemsTableWidthContstraint;
@property NSTableView *quickItemsTable; // @synthesize quickItemsTable=_quickItemsTable;
@property NSImageView *toArrowIconView; // @synthesize toArrowIconView=_toArrowIconView;
@property(retain) SMCustomizeTree_Client *customizeTree; // @synthesize customizeTree=_customizeTree;
@property(retain) SMCustomize_Client *customizeClient; // @synthesize customizeClient=_customizeClient;
@property(retain) NSMutableArray *quickItems; // @synthesize quickItems=_quickItems;
@property BOOL simpleMode; // @synthesize simpleMode=_simpleMode;
@property(retain) NSNumber *totalSize; // @synthesize totalSize=_totalSize;
@property(retain) NSNumber *netSpace; // @synthesize netSpace=_netSpace;
@property BOOL customizationIsReady; // @synthesize customizationIsReady=_customizationIsReady;
@property BOOL acceptActionAvailable; // @synthesize acceptActionAvailable=_acceptActionAvailable;
@property(retain) SMSystem_Client *sourceSystem; // @synthesize sourceSystem=_sourceSystem;
@property(retain) NSMutableArray *standardUserPasswordList; // @synthesize standardUserPasswordList;
@property(retain) NSMutableArray *adminUserPasswordList; // @synthesize adminUserPasswordList;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)arg1;
- (id)destinationSystem;
- (id)customizeClientForSystem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)showWindowsUserRelogSheet;
- (BOOL)sufficientSpaceToMigrate;
- (void)determineSimpleModeForMac;
- (void)reconnecting:(BOOL)arg1;
- (void)daemonConnectionLost;
- (void)recalculateQuickItemTableWidth;
@property(readonly) unsigned long long viewModeTabIndex;
@property(readonly) NSAttributedString *spaceSummaryTextAdvanced;
- (void)applySummaryTextStyling:(id)arg1;
- (id)filesProcessedString;
- (id)summarySpaceStringWithLocID:(id)arg1;
@property(readonly) NSAttributedString *spaceSummaryText;
@property(readonly) NSAttributedString *descriptiveTotalSize;
@property(readonly) NSAttributedString *descriptiveNetSpace;
- (void)resetState;
- (void)updateAcceptActionAvailable;
- (void)setupWindowsSystem;
- (void)setupMacSystem;
- (BOOL)setupPasswordCollection;
- (void)teardownTree;
- (void)setup;
- (id)treeKeysToObserve;
- (void)setupForSystem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)submitRequest;
- (void)submitRequestWithFilevaultConversion:(BOOL)arg1 for:(id)arg2 withPassword:(id)arg3 andBag:(id)arg4;
- (void)dumpNodeSpaceCalculationsForDebugging:(id)arg1 depth:(unsigned long long)arg2;
- (void)showFileVaultManagementIfNeeded;
- (void)pressedPromoteToAdminButton:(id)arg1;
- (void)pressedPasswordButton:(id)arg1;
- (void)pressedEdit:(id)arg1;
- (BOOL)pressedBackButton:(id)arg1;
- (BOOL)pressedSelectButton:(id)arg1;
- (void)installCustomizeViewInSuperview:(id)arg1;
- (void)viewDidAppear;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (id)initWithConnectionErrorHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

