//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKChallengeDataSource, GKDashboardLeaderboardScoreViewController, GKGameRecord, NSButton, NSMutableArray, NSMutableDictionary, NSString, NSTextField, NSView, UXSegmentedControl;

@interface GKDashboardViewController : GKDashboardCollectionViewController
{
    BOOL _shouldShowPlayForChallenge;
    BOOL _shouldShowPlayForTurnBasedMatch;
    BOOL _shouldShowQuitForTurnBasedMatch;
    long long _viewState;
    NSString *_leaderboardIdentifier;
    GKGameRecord *_gameRecord;
    NSMutableArray *_viewControllers;
    GKDashboardCollectionViewController *_currentViewController;
    GKDashboardLeaderboardScoreViewController *_leaderboardViewController;
    NSMutableDictionary *_viewStateIndexes;
    NSView *_containerView;
    UXSegmentedControl *_segmentedControl;
    NSTextField *_titleLabel;
    NSButton *_shareButton;
    GKChallengeDataSource *_challengeDataSource;
}

@property(nonatomic) GKChallengeDataSource *challengeDataSource; // @synthesize challengeDataSource=_challengeDataSource;
@property(nonatomic) NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) UXSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSMutableDictionary *viewStateIndexes; // @synthesize viewStateIndexes=_viewStateIndexes;
@property(nonatomic) GKDashboardLeaderboardScoreViewController *leaderboardViewController; // @synthesize leaderboardViewController=_leaderboardViewController;
@property(nonatomic) GKDashboardCollectionViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) BOOL shouldShowQuitForTurnBasedMatch; // @synthesize shouldShowQuitForTurnBasedMatch=_shouldShowQuitForTurnBasedMatch;
@property(nonatomic) BOOL shouldShowPlayForTurnBasedMatch; // @synthesize shouldShowPlayForTurnBasedMatch=_shouldShowPlayForTurnBasedMatch;
@property(nonatomic) BOOL shouldShowPlayForChallenge; // @synthesize shouldShowPlayForChallenge=_shouldShowPlayForChallenge;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
- (void)donePressed:(id)arg1;
- (void)sharePressed:(id)arg1;
- (void)selectedSegmentChanged:(id)arg1;
@property(nonatomic) long long leaderboardTimeScope;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)showViewControllerAtIndex:(long long)arg1;
- (void)addCollectionViewController:(id)arg1 withTitle:(id)arg2 forViewState:(long long)arg3;
- (void)addCollectionViewControllerForDataSource:(id)arg1 withTitle:(id)arg2 forViewState:(long long)arg3;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithGameRecord:(id)arg1;

@end
