//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/CalUISuggestionsField.h>

@class CNAutocompleteStore;

@interface CalUIAutoCompleteField : CalUISuggestionsField
{
    CNAutocompleteStore *_autocompleteStore;
}

- (void).cxx_destruct;
- (void)updateSuggestionWindowWithSuggestions:(id)arg1;
- (id)autocompleteStore;
- (void)setCNAutocompleteStore:(id)arg1;
- (id)resultForString:(id)arg1;
- (void)createSuggestionController;
- (id)newSuggestionWindow;
- (void)updateWindowFrameOrigin;
- (id)initWithResizeEnabled:(BOOL)arg1;

@end

