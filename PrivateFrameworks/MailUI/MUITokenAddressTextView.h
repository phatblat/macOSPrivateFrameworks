//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenTextView.h"

@class MUIAddressField;

@interface MUITokenAddressTextView : NSTokenTextView
{
    MUIAddressField *_addressField;
}

@property(nonatomic) __weak MUIAddressField *addressField; // @synthesize addressField=_addressField;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)noteFocusRingMaskChanged;
- (id)designatedFocusRingView;
- (BOOL)performDragOperation:(id)arg1;
- (void)_muiTokenAddressTextViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

