//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/UnifiedFieldCompletionStyledTableCellView.h>

#import "ParsecTableCellView.h"

@class NSTextField, ParsecSportsTeamView;

__attribute__((visibility("hidden")))
@interface ParsecSportsTableCellView : UnifiedFieldCompletionStyledTableCellView <ParsecTableCellView>
{
    id <ParsecTableCellViewDelegate> _delegate;
    ParsecSportsTeamView *_firstTeamView;
    ParsecSportsTeamView *_secondTeamView;
    NSTextField *_scoreLabel;
    NSTextField *_descriptionLabel;
}

+ (id)_secondaryDescriptionTextAttributes;
+ (id)_titleTextAttributes;
@property(nonatomic) __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak NSTextField *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(nonatomic) __weak ParsecSportsTeamView *secondTeamView; // @synthesize secondTeamView=_secondTeamView;
@property(nonatomic) __weak ParsecSportsTeamView *firstTeamView; // @synthesize firstTeamView=_firstTeamView;
@property(nonatomic) __weak id <ParsecTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureUsingCompletionListItem:(struct CompletionListItem *)arg1 session:(id)arg2;
- (void)awakeFromNib;

@end

