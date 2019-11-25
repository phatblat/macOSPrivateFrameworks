//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/UnifiedFieldCompletionStyledOneLineTableCellView.h>

#import "ParsecTableCellView.h"

__attribute__((visibility("hidden")))
@interface ParsecOneLineTableCellView : UnifiedFieldCompletionStyledOneLineTableCellView <ParsecTableCellView>
{
    id <ParsecTableCellViewDelegate> _delegate;
    unsigned long long _configuredDescriptionAlignment;
}

@property(nonatomic) unsigned long long configuredDescriptionAlignment; // @synthesize configuredDescriptionAlignment=_configuredDescriptionAlignment;
@property(nonatomic) __weak id <ParsecTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)identifier;
- (void)configureUsingCompletionListItem:(struct CompletionListItem *)arg1 session:(id)arg2;
- (void)_updateImageView:(id)arg1;
- (void)_updateImageView:(id)arg1 withSize:(struct CGSize)arg2 isTemplate:(BOOL)arg3;

@end

