//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

__attribute__((visibility("hidden")))
@interface CPKCharactersHeaderTextField : NSTextField
{
    BOOL _createdForPopover;
}

+ (Class)cellClass;
@property BOOL createdForPopover; // @synthesize createdForPopover=_createdForPopover;
- (void)mouseDown:(id)arg1;
- (BOOL)allowsVibrancy;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (id)initWithFrame:(struct CGRect)arg1 forPopover:(BOOL)arg2;

@end
