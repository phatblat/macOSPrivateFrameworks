//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHView.h>

@class NSMutableArray, NSMutableDictionary;

@interface ACSHCursorView : ACSHView
{
    struct CGColor *_highlightColor1;
    struct CGColor *_highlightColor2;
    struct CGColor *_cursorColor1;
    struct CGColor *_cursorColor2;
    struct CGRect _originalCursorScreenFrameInCarbonCoords;
    struct CGRect _cursorScreenFrameInCarbonCoords;
    struct CGRect _cursorDrawFrameInCarbonCoords;
    NSMutableDictionary *_allTabInfo;
    NSMutableArray *_orderedTabInfoKeys;
    int _positionForCurrentTabs;
    BOOL _isContainerCursorView;
    BOOL _allowOffscreen;
    int _cursorType;
    int _preferredTabPosition;
    double _cursorRadius;
    double _borderWidth;
}

@property(nonatomic) BOOL allowOffscreen; // @synthesize allowOffscreen=_allowOffscreen;
@property(nonatomic) int preferredTabPosition; // @synthesize preferredTabPosition=_preferredTabPosition;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double cursorRadius; // @synthesize cursorRadius=_cursorRadius;
@property(nonatomic) BOOL isContainerCursorView; // @synthesize isContainerCursorView=_isContainerCursorView;
@property(nonatomic) int cursorType; // @synthesize cursorType=_cursorType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_drawTabs;
- (void)_drawTab:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)_rectForTabAtIndex:(unsigned long long)arg1 cursorPosition:(int)arg2;
- (struct CGRect)_rectForTabBarAtCursorPosition:(int)arg1;
- (id)_imageForTabIdentifier:(unsigned long long)arg1;
- (unsigned long long)_visibleTabCount;
- (void)_updatePositionForCurrentTabs;
- (struct CGSize)_sizeToDrawAllTabsForPosition:(int)arg1;
- (id)_tabPositionPreferenceOrder;
- (int)_tabLayoutForPosition:(int)arg1;
- (void)addTabWithImage:(id)arg1 identifier:(unsigned long long)arg2;
- (double)tabIconSize;
- (void)setSelectedTabIdentifier:(unsigned long long)arg1;
- (void)setIsAvailable:(BOOL)arg1 forTabIdentifier:(unsigned long long)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawCursor;
- (void)setCursorFrameInCarbonCoords:(struct CGRect)arg1;
- (struct CGRect)_viewFrameForCursorTabPosition:(int)arg1;
- (void)recalculateFrame;
- (void)setCursorGradientWithColor:(struct CGColor *)arg1 color:(struct CGColor *)arg2;
- (void)setHighlightGradientWithColor:(struct CGColor *)arg1 color:(struct CGColor *)arg2;
- (void)setCursorColor:(struct CGColor *)arg1;
- (void)setHighlightColor:(struct CGColor *)arg1;
- (void)updateCursorStyle;
- (void)initView;

@end

