//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

__attribute__((visibility("hidden")))
@interface CompletionListTableView : NSTableView
{
    BOOL _lastMousePositionWasOverList;
    BOOL _actsLikeMenu;
    BOOL _usesMenuSelectionStyle;
}

@property(nonatomic) BOOL usesMenuSelectionStyle; // @synthesize usesMenuSelectionStyle=_usesMenuSelectionStyle;
@property(nonatomic) BOOL actsLikeMenu; // @synthesize actsLikeMenu=_actsLikeMenu;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityEnabled;
- (id)_accessibilityDescription;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (BOOL)_rowIsSelectableByUser:(long long)arg1;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (BOOL)isOpaque;
- (void)mouseExited:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

