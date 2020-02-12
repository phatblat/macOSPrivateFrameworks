//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXViewController.h"

#import "GKDialogControllerSizing.h"
#import "GKViewController.h"

@class GKChallenge, NSArray, NSString;

@interface GKHostedChallengeIssueController : UXViewController <GKDialogControllerSizing, GKViewController>
{
    id _remoteViewController;
    id _players;
    id _defaultMessage;
    id _challenge;
    BOOL _forcePicker;
    BOOL _internalFlag;
}

+ (void)presentHostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3;
+ (id)hostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property BOOL didRequestRemoteViewController; // @synthesize didRequestRemoteViewController=_internalFlag;
@property(nonatomic) BOOL forcePicker; // @synthesize forcePicker=_forcePicker;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(copy, nonatomic) NSString *defaultMessage; // @synthesize defaultMessage=_defaultMessage;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
@property(retain, nonatomic) id <GKRemoteViewController> remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (struct CGSize)_gkSizeForDialogController;
- (void)viewDidDisappear;
- (void)setNavigationController:(id)arg1;
- (void)requestRemoteViewController;
- (void)loadView;
- (id)view;
- (void)dealloc;
- (id)initWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

