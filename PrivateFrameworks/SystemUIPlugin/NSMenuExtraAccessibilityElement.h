//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAccessibilityElement.h"

@class NSMenuExtra;

__attribute__((visibility("hidden")))
@interface NSMenuExtraAccessibilityElement : NSAccessibilityElement
{
    NSMenuExtra *_menuExtra;
}

- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformCancel;
- (id)accessibilityLabel;
- (id)accessibilityChildren;
- (BOOL)isAccessibilityEnabled;
- (id)accessibilityWindow;
- (void)setAccessibilitySelected:(BOOL)arg1;
- (BOOL)isAccessibilitySelected;
- (id)accessibilityRoleDescription;
- (id)accessibilitySubrole;
- (id)accessibilityRole;
- (id)accessibilityParent;
- (id)accessibilityTitle;
- (id)accessibilityValue;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityTopLevelUIElement;
- (BOOL)isAccessibilityFocused;
- (struct CGRect)accessibilityFrame;
- (id)initWithMenuExtra:(id)arg1;

@end
