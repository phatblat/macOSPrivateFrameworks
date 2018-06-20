//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUI2Control.h>

#import "NSAccessibilityButton.h"

@class LUI2TextField, NSImageView, NSStackView, NSString;

@interface LUI2UserView : LUI2Control <NSAccessibilityButton>
{
    id _representedObject;
    NSImageView *_userPicture;
    LUI2TextField *_userName;
    NSImageView *_loggedInIndicator;
    NSStackView *_stackView;
}

+ (struct CGSize)size;
@property NSStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly) NSImageView *loggedInIndicator; // @synthesize loggedInIndicator=_loggedInIndicator;
@property(readonly) LUI2TextField *userName; // @synthesize userName=_userName;
@property(readonly) NSImageView *userPicture; // @synthesize userPicture=_userPicture;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (id)firstBaselineAnchor;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
@property(getter=isLoggedInIndicatorHidden) BOOL loggedInIndicatorHidden;
- (void)_setupUserView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

