//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTouchBarProvider.h"

@class ACAccount, ACAccountStore, NSButton, NSMutableArray, NSString, NSTableView, NSTextField, NSTouchBar, NSWindow, iCloudTouchBarController;

@interface MMSignoutSheetController : NSObject <NSTableViewDataSource, NSTableViewDelegate, NSTouchBarProvider>
{
    ACAccountStore *_accountStore;
    ACAccount *_account;
    NSWindow *_signoutSheet;
    NSTableView *_serviceTable;
    NSTextField *_messageText;
    NSButton *_continueButton;
    NSButton *_cancelButton;
    NSMutableArray *_serviceInfoList;
    NSWindow *_parentWindow;
    iCloudTouchBarController *_touchBarController;
}

@property(retain) iCloudTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain) NSMutableArray *serviceInfoList; // @synthesize serviceInfoList=_serviceInfoList;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property __weak NSTextField *messageText; // @synthesize messageText=_messageText;
@property __weak NSTableView *serviceTable; // @synthesize serviceTable=_serviceTable;
@property __weak NSWindow *signoutSheet; // @synthesize signoutSheet=_signoutSheet;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (long long)countOfEnabledCheckboxes;
- (id)enabledServices;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)checkboxClicked:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)continueButtonPressed:(id)arg1;
- (void)showSignoutSheetForDataclassActions:(id)arg1 usingWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly) NSTouchBar *touchBar;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

