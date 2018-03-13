//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

#import "NSTextViewDelegate.h"

@class NSFont, NSString;

@interface CalUIHyperlinkTextView : NSTextView <NSTextViewDelegate>
{
    id _target;
    SEL _action;
    NSFont *_defaultFont;
    unsigned long long _defaultAlignment;
}

@property unsigned long long defaultAlignment; // @synthesize defaultAlignment=_defaultAlignment;
@property(retain) NSFont *defaultFont; // @synthesize defaultFont=_defaultFont;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)configureWithText:(id)arg1 linkRange:(struct _NSRange)arg2;
- (id)initWithFont:(id)arg1 alignment:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

