//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalUIResizingTextFieldDelegate.h"

@class CalUISuggestionsField, NSString;

@interface CalUISuggestionsFieldController : NSObject <CalUIResizingTextFieldDelegate>
{
    CalUISuggestionsField *_suggestionsField;
}

@property __weak CalUISuggestionsField *suggestionsField; // @synthesize suggestionsField=_suggestionsField;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

