//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

__attribute__((visibility("hidden")))
@interface CPKHorizontalPopupMenu : NSPanel
{
    BOOL _doubleClicked;
    long long _selectedIndex;
    CDUnknownBlockType _drawingBlock;
}

+ (id)menuWithHorizontalItems:(id)arg1 cellSize:(struct CGSize)arg2 drawingBlock:(CDUnknownBlockType)arg3;
@property CDUnknownBlockType drawingBlock; // @synthesize drawingBlock=_drawingBlock;
@property(readonly) BOOL doubleClicked; // @synthesize doubleClicked=_doubleClicked;
@property(readonly) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_withinDoubleClickTimeSinceOpened;
- (id)_popoverFrameView;
- (id)_menuView;
- (void)closeMenu;
- (BOOL)popUpMenuPositioningItem:(id)arg1 atRect:(struct CGRect)arg2 inView:(id)arg3 pinRectInWindow:(struct CGRect)arg4;
- (void)dealloc;

@end

