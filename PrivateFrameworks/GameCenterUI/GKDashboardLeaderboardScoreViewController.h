//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKDashboardLeaderboardScoreDataSource, GKDashboardSelectionDelegatingCollectionViewController, GKGameRecord, GKLeaderboard, GKTimeScopeButton, NSPopUpButton;

@interface GKDashboardLeaderboardScoreViewController : GKDashboardCollectionViewController
{
    GKGameRecord *_gameRecord;
    GKLeaderboard *_leaderboard;
    GKDashboardLeaderboardScoreDataSource *_friendDataSource;
    GKDashboardLeaderboardScoreDataSource *_globalDataSource;
    long long _timeScope;
    NSPopUpButton *_leaderboardButton;
    GKTimeScopeButton *_timeScopeButton;
    GKDashboardSelectionDelegatingCollectionViewController *_leaderboardSetViewController;
    GKDashboardSelectionDelegatingCollectionViewController *_leaderboardListViewController;
}

+ (void)setInitialTimeScope:(long long)arg1;
+ (long long)initialTimeScope;
@property(retain, nonatomic) GKDashboardSelectionDelegatingCollectionViewController *leaderboardListViewController; // @synthesize leaderboardListViewController=_leaderboardListViewController;
@property(retain, nonatomic) GKDashboardSelectionDelegatingCollectionViewController *leaderboardSetViewController; // @synthesize leaderboardSetViewController=_leaderboardSetViewController;
@property(nonatomic) GKTimeScopeButton *timeScopeButton; // @synthesize timeScopeButton=_timeScopeButton;
@property(nonatomic) NSPopUpButton *leaderboardButton; // @synthesize leaderboardButton=_leaderboardButton;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) GKDashboardLeaderboardScoreDataSource *globalDataSource; // @synthesize globalDataSource=_globalDataSource;
@property(retain, nonatomic) GKDashboardLeaderboardScoreDataSource *friendDataSource; // @synthesize friendDataSource=_friendDataSource;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
- (void)applyLeaderboardToDataSources;
- (void)updateWithLeaderboard:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)constructLeaderboardListViewControllerForSet:(id)arg1;
- (void)leaderboardPressed:(id)arg1;
- (void)timeScopePressed:(id)arg1;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)dataUpdated:(BOOL)arg1 withError:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;

@end

