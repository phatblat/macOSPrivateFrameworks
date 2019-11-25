//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRTextField.h>

__attribute__((visibility("hidden")))
@interface SCRWebAreaNoEchoTextField : SCRTextField
{
}

- (BOOL)handleReadContentsCallbackForEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)moveToPreviousParagraphWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)moveToNextParagraphWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)moveToPreviousSentenceWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)moveToNextSentenceWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)moveToNextWordWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)moveToPreviousWordWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (void)readCurrentLine:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)moveVOCToSelectionRange;
- (id)selectedTextRange;
- (void)synchKeyboardCursorToPosition:(id)arg1;
- (unsigned long long)cachedNumberOfCharacters;
- (void)_updateCachedValue;
- (id)value;
- (unsigned long long)numberOfCharacters;
- (BOOL)isSelectionSettable;
- (BOOL)isTextSelectable;
- (BOOL)isEditable;
- (id)_staticText_textMarkerRange_selectRange:(struct _NSRange)arg1 textArea:(id)arg2;
- (id)_staticTextSupportingTextMarkerRangeSelectRange:(struct _NSRange)arg1 withStartingIndexOffset:(unsigned long long)arg2 textArea:(id)arg3;
- (BOOL)shouldOutputClickableState;
- (id)helpDescription;
- (id)shortInstruction;
- (id)typeDescription;
- (id)captionDescriptionContainsUserLabel:(char *)arg1 containsAncestorLabel:(char *)arg2;
- (BOOL)hasAutofillMenuAvailable;
- (BOOL)canHandleValueChange;
- (BOOL)canHandleTextValueChange;
- (BOOL)canHandleTextSelectionChange;
- (BOOL)canHandleEchoContentChange;
- (id)_textArea;

@end

