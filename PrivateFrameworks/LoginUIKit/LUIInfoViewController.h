//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUIViewController.h>

@class NSLayoutConstraint, NSProgressIndicator, NSStackView, NSTextField, NSTimer;

@interface LUIInfoViewController : LUIViewController
{
    NSStackView *_stackView;
    NSTextField *_infoTextField;
    NSTimer *_autoUnlockProgressTimer;
    NSLayoutConstraint *_horizontalConstraint;
    NSLayoutConstraint *_verticalConstraint;
    int _verticalPosition;
    NSProgressIndicator *_progressIndicator;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)showProgressIndicatorAfterDelay:(float)arg1;
- (void)setProgressIndicatorHidden:(BOOL)arg1;
- (void)setPosition:(int)arg1;
- (void)setInfoText:(id)arg1;
- (void)refresh;
- (void)_setupContentView;
- (void)_layoutContentView;
- (void)_handleShowAutoUnlockProgressTimer:(id)arg1;
- (void)_freeAutoUnlockProgressTimer;
- (double)_centerYConstant;

@end

