//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesUI/TTTextController.h>

@class ICAttachmentInsertionController, ICNote, NSMutableArray, NSMutableDictionary;

@interface ICTextController : TTTextController
{
    BOOL _userChangedWritingDirection;
    BOOL _disableAddingExtraLinesIfNeeded;
    BOOL _trackAddedExtraNewlineRanges;
    BOOL _alwaysHighlightAuthorEdits;
    BOOL _isConvertingTables;
    BOOL _shouldMergeNoteAfterScrolling;
    BOOL _isAutoListInsertionDisabled;
    ICNote *_note;
    ICAttachmentInsertionController *_attachmentInsertionController;
    NSMutableDictionary *_trackedToDoParagraphs;
    NSMutableArray *_trackedRangesForAddedExtraNewlines;
    unsigned long long _pauseMergeForScrollingCounter;
}

+ (void)filterAttachmentsForPrintingInAttributedString:(id)arg1;
+ (double)extraBulletWidthForNumberedListWithMaxItemNumber:(id)arg1 textFont:(struct NSFont *)arg2;
+ (double)indentForStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(struct NSTextView *)arg4;
+ (double)extraWidthNeededForStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(struct NSTextView *)arg4;
+ (double)indentForStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(struct NSTextView *)arg4 todoZoomFactor:(double)arg5;
+ (id)removeBeginningListStyleIfNecessaryForAttributedString:(id)arg1 fromTextStorage:(id)arg2 andRange:(struct _NSRange)arg3;
+ (BOOL)shouldRetainFirstListStyleForFilteredAttributedSubstring:(id)arg1 fromRange:(struct _NSRange)arg2;
@property(nonatomic) BOOL isAutoListInsertionDisabled; // @synthesize isAutoListInsertionDisabled=_isAutoListInsertionDisabled;
@property(nonatomic) BOOL shouldMergeNoteAfterScrolling; // @synthesize shouldMergeNoteAfterScrolling=_shouldMergeNoteAfterScrolling;
@property(nonatomic) unsigned long long pauseMergeForScrollingCounter; // @synthesize pauseMergeForScrollingCounter=_pauseMergeForScrollingCounter;
@property(nonatomic) BOOL isConvertingTables; // @synthesize isConvertingTables=_isConvertingTables;
@property(nonatomic) BOOL alwaysHighlightAuthorEdits; // @synthesize alwaysHighlightAuthorEdits=_alwaysHighlightAuthorEdits;
@property(nonatomic) BOOL trackAddedExtraNewlineRanges; // @synthesize trackAddedExtraNewlineRanges=_trackAddedExtraNewlineRanges;
@property(retain, nonatomic) NSMutableArray *trackedRangesForAddedExtraNewlines; // @synthesize trackedRangesForAddedExtraNewlines=_trackedRangesForAddedExtraNewlines;
@property(nonatomic) BOOL disableAddingExtraLinesIfNeeded; // @synthesize disableAddingExtraLinesIfNeeded=_disableAddingExtraLinesIfNeeded;
@property BOOL userChangedWritingDirection; // @synthesize userChangedWritingDirection=_userChangedWritingDirection;
@property(readonly, nonatomic) NSMutableDictionary *trackedToDoParagraphs; // @synthesize trackedToDoParagraphs=_trackedToDoParagraphs;
@property(nonatomic) __weak ICAttachmentInsertionController *attachmentInsertionController; // @synthesize attachmentInsertionController=_attachmentInsertionController;
@property(nonatomic) __weak ICNote *note; // @synthesize note=_note;
- (void).cxx_destruct;
- (id)keyboardLanguageForTextView:(struct NSTextView *)arg1;
- (void)fixModelAttributesInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)numberListsInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)uniqueParagraphStylesInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)updateTrackedToDoParagraphsAfterIndex:(unsigned long long)arg1 byDelta:(long long)arg2 excludingSeenParagraphs:(id)arg3;
- (void)createToDoItemForCharacterRange:(struct _NSRange)arg1 paragraphStyle:(id)arg2 textStorage:(id)arg3;
- (void)resetTrackedToDoParagraphs;
- (void)updateTrackedAttributesInTextStorage:(id)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (struct _NSRange)addExtraLinesIfNeededToTextStorage:(id)arg1 editedRange:(struct _NSRange)arg2 actualLengthIncrease:(long long *)arg3;
- (void)trackExtraNewLineRangeIfNecessary:(struct _NSRange)arg1;
- (void)setNote:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(BOOL)arg2 withLayoutManager:(id)arg3;
- (void)refreshTextStylingForTextStorage:(id)arg1 withTextController:(id)arg2;
- (BOOL)removeListStyleForDeletingEmptyParagrahIfNecessaryForTextView:(struct NSTextView *)arg1 textStorage:(id)arg2 paragraphRange:(struct _NSRange)arg3 andLocation:(unsigned long long)arg4;
- (BOOL)deleteWordBackwardForSpecialCasesInTextView:(struct NSTextView *)arg1;
- (BOOL)removeListStyleBeforeDeletingParagraphContentIfNecessaryForTextView:(struct NSTextView *)arg1 textStorage:(id)arg2 rangeToBeDeleted:(struct _NSRange)arg3 blockBeforeEndEditing:(CDUnknownBlockType)arg4;
- (BOOL)deleteBackwardForSpecialCasesInTextView:(struct NSTextView *)arg1;
- (void)setParagraphWritingDirectionInRange:(struct _NSRange)arg1 toDirection:(long long)arg2 inTextView:(struct NSTextView *)arg3;
- (void)insertedText:(id)arg1 replacementRange:(struct _NSRange)arg2 inTextView:(struct NSTextView *)arg3;
- (BOOL)insertedSpaceInTextView:(struct NSTextView *)arg1 replacementRange:(struct _NSRange)arg2;
- (BOOL)insertNewlineForSpecialCasesInTextView:(struct NSTextView *)arg1;
- (void)insertNewlineAtCharacterIndex:(unsigned long long)arg1 textStorage:(id)arg2;
- (struct _NSRange)cleanupTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 changeInLengthAfterCleanup:(long long *)arg5;
- (void)updateAttachmentsSelectionStateInTextStorage:(id)arg1 forSelectedRanges:(id)arg2 layoutManager:(id)arg3;
- (void)updateAttachmentsInNote;
- (void)updateTrackingInTextStorage:(id)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)fixTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (id)nsParagraphStyleForTTParagraphStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(struct NSTextView *)arg4;
- (BOOL)isHighlightingTextInTextStorage:(id)arg1;
- (void)applyAuthorHighlightsWithPercentage:(double)arg1 forRange:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (void)setHighlightAuthorEdits:(BOOL)arg1 forRange:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (void)fadeTextHighlightInTextStorage:(id)arg1;
- (void)highlightTextAfter:(id)arg1 inTextStorage:(id)arg2;
- (id)rangesWithCutOutAttachmentsFromRange:(struct _NSRange)arg1 textStorage:(id)arg2;
- (void)unscriptRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (void)superscriptDelta:(long long)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (void)superscriptUpdate:(CDUnknownBlockType)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (struct NSFont *)scaleFont:(struct NSFont *)arg1 withScale:(double)arg2;
- (void)scaleFontPointSize:(double)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (BOOL)isTodoDoneRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (void)refreshTypingAttributesForTextView:(struct NSTextView *)arg1 textStorage:(id)arg2;
- (void)refreshTypingAttributesForAllTextViewsOfTextStorage:(id)arg1;
- (void)setDone:(BOOL)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (void)setTypingTextStyle:(unsigned int)arg1 textView:(struct NSTextView *)arg2;
- (void)setTypingAttributesForUndo:(id)arg1;
- (long long)setTextStyle:(unsigned int)arg1 removeExtraStyling:(BOOL)arg2 range:(struct _NSRange)arg3 inTextStorage:(id)arg4 inTextView:(struct NSTextView *)arg5;
- (long long)setTextStyle:(unsigned int)arg1 removeExtraStyling:(BOOL)arg2 range:(struct _NSRange)arg3 inTextStorage:(id)arg4;
- (void)updateParagraphWritingDirectionToKeyboardWritingDirectionInRange:(struct _NSRange)arg1 textStorage:(id)arg2 textView:(struct NSTextView *)arg3;
- (void)removeFontsAndColorsForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (BOOL)containsOnlyStyle:(unsigned int)arg1 inRange:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (long long)setTextStyle:(unsigned int)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3 inTextView:(struct NSTextView *)arg4;
- (long long)setTextStyle:(unsigned int)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (BOOL)canChangeStyleForSelectedRanges:(id)arg1 inTextStorage:(id)arg2;
- (struct _NSRange)firstParagraphForSetListStyleRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (id)todoForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (void)indentRange:(struct _NSRange)arg1 byAmount:(long long)arg2 inTextStorage:(id)arg3 textView:(struct NSTextView *)arg4;
- (id)indentParagraphStyle:(id)arg1 byAmount:(long long)arg2;
- (BOOL)canIndentTextView:(struct NSTextView *)arg1 byDelta:(long long)arg2;
- (BOOL)attachmentsExistInRange:(struct _NSRange)arg1 textStorage:(id)arg2;
- (long long)writingDirectionForRange:(struct _NSRange)arg1 inTextView:(struct NSTextView *)arg2 inTextStorage:(id)arg3;
- (unsigned int)paragraphStyleForRange:(struct _NSRange)arg1 inTextView:(struct NSTextView *)arg2 inTextStorage:(id)arg3;
- (unsigned int)paragraphStyleForRange:(struct _NSRange)arg1 inTextView:(struct NSTextView *)arg2 inTextStorage:(id)arg3 ignoreTypingAttributes:(BOOL)arg4;
- (void)dealloc;
- (id)init;
- (void)updateCellInTable:(id)arg1 atColumnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3 fromAttributedString:(id)arg4 andTextTableBlock:(id)arg5 filterPastedAttributes:(BOOL)arg6 isReadingSelectionFromPasteboard:(BOOL)arg7;
- (CDStruct_4bcfbbae)p_setCellsInTable:(id)arg1 fromAttributedString:(id)arg2 textTable:(id)arg3 atCellOffset:(CDStruct_4bcfbbae)arg4 filterPastedAttributes:(BOOL)arg5 isReadingSelectionFromPasteboard:(BOOL)arg6;
- (void)p_populateTable:(id)arg1 withNSTextTable:(id)arg2 attributedString:(id)arg3 filterPastedAttributes:(BOOL)arg4 isReadingSelectionFromPasteboard:(BOOL)arg5;
- (id)addTableAttachmentWithNSTextTable:(id)arg1 attributedString:(id)arg2 filterPastedAttributes:(BOOL)arg3 isReadingSelectionFromPasteboard:(BOOL)arg4;
- (void)workAroundSageTables:(id)arg1;
- (void)convertNSTablesToICTables:(id)arg1 pasteboardTypes:(id)arg2 filterPastedAttributes:(BOOL)arg3 isReadingSelectionFromPasteboard:(BOOL)arg4;

@end

