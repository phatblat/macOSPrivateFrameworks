//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "GKDialogControllerSizing.h"
#import "GKRemoteViewControllerDelegate.h"
#import "GKViewController.h"

@class GKLocalPlayer, NSString;

@interface GKRemoteSignInViewController : NSViewController <GKRemoteViewControllerDelegate, GKDialogControllerSizing, GKViewController>
{
    BOOL _didRequestRemoteViewController;
    id <GKRemoteSignInViewControllerDelegate> _delegate;
    unsigned long long _signInViewControllerMode;
    NSString *_lastPersonalizationVersionDisplayed;
    unsigned long long _lastPrivacyNoticeVersionDisplayed;
    id <GKRemoteViewController> _remoteViewController;
    GKLocalPlayer *_localPlayer;
}

@property(retain) GKLocalPlayer *localPlayer; // @synthesize localPlayer=_localPlayer;
@property BOOL didRequestRemoteViewController; // @synthesize didRequestRemoteViewController=_didRequestRemoteViewController;
@property(retain, nonatomic) id <GKRemoteViewController> remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property unsigned long long lastPrivacyNoticeVersionDisplayed; // @synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed;
@property(retain) NSString *lastPersonalizationVersionDisplayed; // @synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed;
@property unsigned long long signInViewControllerMode; // @synthesize signInViewControllerMode=_signInViewControllerMode;
@property __weak id <GKRemoteSignInViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)remoteViewControllerRequestingDismiss:(id)arg1;
- (void)remoteViewController:(id)arg1 receivedMessageFromService:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (struct CGSize)_gkSizeForDialogController;
- (void)viewDidDisappear;
- (void)requestRemoteViewController;
- (void)loadView;
- (id)view;
- (id)initWithLocalPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
