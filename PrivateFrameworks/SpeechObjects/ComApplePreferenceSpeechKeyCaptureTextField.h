//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@interface ComApplePreferenceSpeechKeyCaptureTextField : NSTextField
{
    short _pressedKeyCombo;
}

- (short)pressedKeyCombo;
- (void)setPressedKeyCode:(int)arg1 withModifierFlags:(unsigned int)arg2;
- (void)setPressedKeyCombo:(short)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;

@end
