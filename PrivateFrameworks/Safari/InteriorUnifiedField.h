//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class UnifiedField;

__attribute__((visibility("hidden")))
@interface InteriorUnifiedField : NSTextField
{
    UnifiedField *_unifiedField;
}

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)wantsUpdateLayer;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1 unifiedField:(id)arg2;

@end

