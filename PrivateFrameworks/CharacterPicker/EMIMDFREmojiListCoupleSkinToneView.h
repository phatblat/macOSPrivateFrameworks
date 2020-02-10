//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class EMIMDFREmojiListMatrixView, NSBox, NSButton, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EMIMDFREmojiListCoupleSkinToneView : NSView
{
    BOOL _gestureCanceled;
    unsigned int _coupleBaseUnicode;
    NSButton *_closeButton;
    NSBox *_backgroundBox;
    id _firstTouchID;
    NSMutableArray *_combinedCharacterCells;
    NSMutableArray *_leftSkinToneCells;
    NSMutableArray *_rightSkinToneCells;
    long long _highlightedCombinedCharacterIndex;
    long long _highlightedLeftSkinToneCellIndex;
    long long _highlightedRightSkinToneCellIndex;
    long long _selectedLeftSkinToneCellIndex;
    long long _selectedRightSkinToneCellIndex;
    EMIMDFREmojiListMatrixView *_sourceMatrixView;
}

@property EMIMDFREmojiListMatrixView *sourceMatrixView; // @synthesize sourceMatrixView=_sourceMatrixView;
@property long long selectedRightSkinToneCellIndex; // @synthesize selectedRightSkinToneCellIndex=_selectedRightSkinToneCellIndex;
@property long long selectedLeftSkinToneCellIndex; // @synthesize selectedLeftSkinToneCellIndex=_selectedLeftSkinToneCellIndex;
@property long long highlightedRightSkinToneCellIndex; // @synthesize highlightedRightSkinToneCellIndex=_highlightedRightSkinToneCellIndex;
@property long long highlightedLeftSkinToneCellIndex; // @synthesize highlightedLeftSkinToneCellIndex=_highlightedLeftSkinToneCellIndex;
@property long long highlightedCombinedCharacterIndex; // @synthesize highlightedCombinedCharacterIndex=_highlightedCombinedCharacterIndex;
@property(retain) NSMutableArray *rightSkinToneCells; // @synthesize rightSkinToneCells=_rightSkinToneCells;
@property(retain) NSMutableArray *leftSkinToneCells; // @synthesize leftSkinToneCells=_leftSkinToneCells;
@property(retain) NSMutableArray *combinedCharacterCells; // @synthesize combinedCharacterCells=_combinedCharacterCells;
@property unsigned int coupleBaseUnicode; // @synthesize coupleBaseUnicode=_coupleBaseUnicode;
@property BOOL gestureCanceled; // @synthesize gestureCanceled=_gestureCanceled;
@property(retain) id firstTouchID; // @synthesize firstTouchID=_firstTouchID;
@property NSBox *backgroundBox; // @synthesize backgroundBox=_backgroundBox;
@property NSButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)_selectCellAtIndex:(long long)arg1 inList:(id)arg2;
- (void)_highlightCellAtIndex:(long long)arg1 inList:(id)arg2;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)closeSkinToneSelector:(id)arg1;
- (void)trackHighlightWithLocation:(struct CGPoint)arg1 finished:(BOOL)arg2;
- (void)showForCharacterIndex:(long long)arg1 inMatrixView:(id)arg2 byPressAndHold:(BOOL)arg3;
- (void)dealloc;
- (id)_createImageCellWidth:(double)arg1;
- (id)init;

@end
