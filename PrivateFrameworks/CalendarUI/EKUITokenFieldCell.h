//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenFieldCell.h"

@class NSTextView;

@interface EKUITokenFieldCell : NSTokenFieldCell
{
    NSTextView *_fieldEditor;
}

@property(retain) NSTextView *fieldEditor; // @synthesize fieldEditor=_fieldEditor;
- (void).cxx_destruct;
- (void)setCalUITextFieldDelegate:(id)arg1;
- (id)fieldEditorForView:(id)arg1;
- (id)init;

@end

