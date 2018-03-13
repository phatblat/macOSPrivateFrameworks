//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class SeparatorView;

__attribute__((visibility("hidden")))
@interface DownloadTableRowView : NSTableRowView
{
    SeparatorView *_separatorView;
    BOOL _shouldHideSeparator;
}

@property(nonatomic) BOOL shouldHideSeparator; // @synthesize shouldHideSeparator=_shouldHideSeparator;
- (void).cxx_destruct;
- (void)_updateSeparatorForSelectedOrEmphasizedChange;
- (void)_removeSeparator;
- (void)_addSeparator;
- (void)setEmphasized:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (BOOL)allowsVibrancy;

@end

