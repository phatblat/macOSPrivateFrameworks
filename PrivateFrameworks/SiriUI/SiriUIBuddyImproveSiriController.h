//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "SiriUIBuddySubviewController.h"

@class NSButton, SiriUIBuddyController;

__attribute__((visibility("hidden")))
@interface SiriUIBuddyImproveSiriController : NSViewController <SiriUIBuddySubviewController>
{
    SiriUIBuddyController *_parentController;
    NSButton *_aboutLinkButton;
    NSButton *_optInButton;
    NSButton *_optOutButton;
}

@property __weak NSButton *optOutButton; // @synthesize optOutButton=_optOutButton;
@property __weak NSButton *optInButton; // @synthesize optInButton=_optInButton;
@property __weak NSButton *aboutLinkButton; // @synthesize aboutLinkButton=_aboutLinkButton;
@property __weak SiriUIBuddyController *parentController; // @synthesize parentController=_parentController;
- (void).cxx_destruct;
- (void)mbuaSetDataSharingOptInStatus:(long long)arg1;
- (long long)mbuaGetDataSharingOptInStatus;
- (void)willExitPane;
@property(readonly) BOOL shouldShowPane;
- (void)_syncButtonStates;
- (void)optOutButtonPressed:(id)arg1;
- (void)optInButtonPressed:(id)arg1;
- (void)linkPressed:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentController:(id)arg1;

@end
