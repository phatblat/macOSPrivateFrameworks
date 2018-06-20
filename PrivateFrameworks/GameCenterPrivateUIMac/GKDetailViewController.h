//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKDashboardCollectionViewController.h>

@class GKHorizontalBubbleControlsView;

@interface GKDetailViewController : GKDashboardCollectionViewController
{
    GKHorizontalBubbleControlsView *_bubbleView;
}

@property(nonatomic) GKHorizontalBubbleControlsView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void)shareScore:(id)arg1 fromLeaderboard:(id)arg2 sendingView:(id)arg3;
- (void)shareAchievement:(id)arg1 sendingView:(id)arg2;
- (BOOL)canShare;
- (void)pushBubble:(id)arg1;
- (void)floatInBubbles;
- (void)hideBubbles;
- (id)addBubbleWithType:(long long)arg1 useLargeSize:(BOOL)arg2 title:(id)arg3 target:(id)arg4 action:(SEL)arg5;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) BOOL wantsBubbles;

@end

