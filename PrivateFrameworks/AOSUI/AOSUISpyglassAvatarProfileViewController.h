//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AOSUI/AOSUISpyglassBaseViewController.h>

#import "CNAvatarViewDelegate.h"

@class AOSUISpyglassAccountChangeHelper, CNAvatarViewController, MM_Account, NSString, NSTextField, NSView;

@interface AOSUISpyglassAvatarProfileViewController : AOSUISpyglassBaseViewController <CNAvatarViewDelegate>
{
    AOSUISpyglassAccountChangeHelper *_accountChangeHelper;
    NSView *_imageWell;
    NSTextField *_nameTextField;
    NSTextField *_userNameTextField;
    CNAvatarViewController *_avatarViewController;
    MM_Account *_mmAccount;
}

@property(readonly, nonatomic) MM_Account *mmAccount; // @synthesize mmAccount=_mmAccount;
@property(readonly, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property __weak NSTextField *userNameTextField; // @synthesize userNameTextField=_userNameTextField;
@property __weak NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property __weak NSView *imageWell; // @synthesize imageWell=_imageWell;
- (void).cxx_destruct;
- (void)avatarViewController:(id)arg1 contactAvatarDidChange:(id)arg2;
- (void)_loadProfilePictureFromAccount;
- (void)_accountProfilePictureDidChange:(id)arg1;
- (void)_setupProfileView;
- (id)_usernameDescriptionString;
- (id)_displayName;
- (void)_setupNames;
- (void)_startObservingAccountStoreChanges;
- (id)_storeAccount;
- (id)_appleAccount;
- (void)viewDidLoad;
- (id)nibBundle;
- (void)dealloc;
- (id)initWithAccountManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
