//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTextFieldDelegate.h"

@class NSButton, NSObject<SSConnectionPromptObserver>, NSProgressIndicator, NSString, NSTextField, SSContactsTokenField;

@interface SSConnectionAddressViewController : NSViewController <NSTextFieldDelegate>
{
    NSObject<SSConnectionPromptObserver> *mPromptObserver;
    BOOL mIsConnecting;
    SSContactsTokenField *_mAddressField;
    NSButton *_mConnectButton;
    NSProgressIndicator *_mConnectingProgressSpinner;
    NSTextField *_mConnectingText;
}

@property(retain) NSTextField *mConnectingText; // @synthesize mConnectingText=_mConnectingText;
@property(retain) NSProgressIndicator *mConnectingProgressSpinner; // @synthesize mConnectingProgressSpinner=_mConnectingProgressSpinner;
@property(retain) NSButton *mConnectButton; // @synthesize mConnectButton=_mConnectButton;
@property(retain) SSContactsTokenField *mAddressField; // @synthesize mAddressField=_mAddressField;
@property id <SSConnectionPromptObserver> promptObserver; // @synthesize promptObserver=mPromptObserver;
- (void)adjustViewHeightBy:(double)arg1;
- (void)cancelClicked:(id)arg1;
- (void)connectClicked:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
@property BOOL isConnecting; // @synthesize isConnecting=mIsConnecting;
@property(copy) NSString *addressString;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

