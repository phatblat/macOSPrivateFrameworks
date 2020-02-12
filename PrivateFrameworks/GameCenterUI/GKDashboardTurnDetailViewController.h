//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKDetailViewController.h>

@class GKTurnBasedMatch, NSButton, NSLayoutConstraint, NSTextField, NSView;

@interface GKDashboardTurnDetailViewController : GKDetailViewController
{
    BOOL _shouldShowPlay;
    BOOL _shouldShowQuit;
    GKTurnBasedMatch *_match;
    NSView *_contentVerticalCenteringView;
    NSView *_turnDetailContentView;
    NSTextField *_playingWithLabel;
    NSTextField *_createdLabel;
    NSButton *_firstButton;
    NSButton *_secondButton;
    NSLayoutConstraint *_secondButtonCenteringConstraint;
}

@property(nonatomic) NSLayoutConstraint *secondButtonCenteringConstraint; // @synthesize secondButtonCenteringConstraint=_secondButtonCenteringConstraint;
@property(nonatomic) NSButton *secondButton; // @synthesize secondButton=_secondButton;
@property(nonatomic) NSButton *firstButton; // @synthesize firstButton=_firstButton;
@property(nonatomic) NSTextField *createdLabel; // @synthesize createdLabel=_createdLabel;
@property(nonatomic) NSTextField *playingWithLabel; // @synthesize playingWithLabel=_playingWithLabel;
@property(nonatomic) NSView *turnDetailContentView; // @synthesize turnDetailContentView=_turnDetailContentView;
@property(nonatomic) NSView *contentVerticalCenteringView; // @synthesize contentVerticalCenteringView=_contentVerticalCenteringView;
@property(nonatomic) BOOL shouldShowQuit; // @synthesize shouldShowQuit=_shouldShowQuit;
@property(nonatomic) BOOL shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (void)handleTurnBasedEvent:(id)arg1;
- (void)turnOK:(id)arg1;
- (void)removeMatch:(id)arg1;
- (void)quitMatch:(id)arg1;
- (void)disableButtons;
- (void)chooseMatch:(id)arg1;
- (void)declineInvitation:(id)arg1;
- (void)acceptInvitation:(id)arg1;
- (void)refreshPresenter;
- (id)preferredFocusEnvironments;
- (id)playingWithString;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTurnBasedMatch:(id)arg1;

@end

