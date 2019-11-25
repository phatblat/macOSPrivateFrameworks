//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTouchBarProvider.h"

@class CKContainer, CKInitiateParticipantVettingOperation, CKShareMetadata, NSButton, NSDictionary, NSString, NSTableView, NSTextField, NSTouchBar, NSWindow, iCloudTouchBarController;

@interface MMOutOfNetworkSheetController : NSObject <NSTouchBarProvider, NSTableViewDataSource, NSTableViewDelegate>
{
    NSWindow *_outOfNetworkSheet;
    NSTableView *_emailAddressTable;
    NSButton *_verifyButton;
    NSButton *_cancelButton;
    NSTextField *_titleText;
    NSTextField *_contactOwnerText;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_userInfo;
    NSWindow *_parentWindow;
    CKContainer *_clouddContainer;
    CKContainer *_metadataSpecifiedContainer;
    CKShareMetadata *_shareMetadata;
    CKInitiateParticipantVettingOperation *_operation;
    iCloudTouchBarController *_touchBarController;
}

@property(retain) iCloudTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property(retain) CKInitiateParticipantVettingOperation *operation; // @synthesize operation=_operation;
@property(retain) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(retain) CKContainer *metadataSpecifiedContainer; // @synthesize metadataSpecifiedContainer=_metadataSpecifiedContainer;
@property(retain) CKContainer *clouddContainer; // @synthesize clouddContainer=_clouddContainer;
@property NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property __weak NSTextField *contactOwnerText; // @synthesize contactOwnerText=_contactOwnerText;
@property __weak NSTextField *titleText; // @synthesize titleText=_titleText;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *verifyButton; // @synthesize verifyButton=_verifyButton;
@property __weak NSTableView *emailAddressTable; // @synthesize emailAddressTable=_emailAddressTable;
@property(retain) NSWindow *outOfNetworkSheet; // @synthesize outOfNetworkSheet=_outOfNetworkSheet;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)isShowingSheet;
- (void)help:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)verifyButtonPressed:(id)arg1;
- (void)showFailureAlert:(id)arg1;
- (id)alertContentForInitiateVettingError:(id)arg1 shareTitle:(id)arg2 isEmail:(BOOL)arg3 address:(id)arg4;
- (BOOL)isVettedToSelfError:(id)arg1;
- (void)initiateVettingForParticipantID:(id)arg1 address:(id)arg2 andThen:(CDUnknownBlockType)arg3;
- (void)dismissOutOfNetworkSheet;
- (void)showOutOfNetworkSheetForServices:(id)arg1 usingWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly) NSTouchBar *touchBar;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

