//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface DDLargeTypeView : NSView
{
    struct CGRect _windowRect;
    struct CGRect _textRect;
    NSString *_string;
    NSMutableDictionary *_attributes;
}

- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (id)makeBackingLayer;
- (struct CGRect)windowRect;
- (id)initWithString:(id)arg1 onScreen:(id)arg2;

@end

