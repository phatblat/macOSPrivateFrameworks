//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKRectShadowCell.h>

@class GKDashboardPlayerPhotoView, GKScore, NSLayoutConstraint, NSString, NSTextField, NSView;

@interface GKDashboardLeaderboardScoreCell : GKRectShadowCell
{
    GKScore *_score;
    GKDashboardPlayerPhotoView *_playerView;
    NSLayoutConstraint *_playerViewHeightConstraint;
    NSTextField *_rankLabel;
    NSTextField *_nameLabel;
    NSTextField *_scoreLabel;
    NSView *_topLine;
    NSView *_bottomLine;
    NSView *_monogramColorView;
    NSString *_lastAppearanceName;
}

+ (id)highRankNib;
+ (id)lowRankNib;
+ (struct CGSize)defaultSize;
@property(retain, nonatomic) NSString *lastAppearanceName; // @synthesize lastAppearanceName=_lastAppearanceName;
@property(nonatomic) NSView *monogramColorView; // @synthesize monogramColorView=_monogramColorView;
@property(nonatomic) NSView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) NSView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) NSTextField *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(nonatomic) NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) NSTextField *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint; // @synthesize playerViewHeightConstraint=_playerViewHeightConstraint;
@property(nonatomic) GKDashboardPlayerPhotoView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
@property(nonatomic) BOOL linesVisible; // @dynamic linesVisible;
- (void)setupForScore:(id)arg1;
@property(readonly, nonatomic) NSView *popoverSourceView;
- (void)dealloc;
- (void)updateLayer;
- (void)awakeFromNib;

@end

