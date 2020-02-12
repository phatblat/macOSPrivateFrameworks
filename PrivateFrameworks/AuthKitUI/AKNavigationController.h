//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSArray, NSBox, NSButton, NSLayoutConstraint, NSStackView, NSTextField, NSView;

@interface AKNavigationController : NSViewController
{
    BOOL _needsSmoothAnimationMomentaryToggle;
    id <AKNavigationControllerDelegate> _delegate;
    NSArray *_internalViewControllers;
    NSView *_navigationBarView;
    NSStackView *_rightBarStackView;
    NSTextField *_barTitleTextField;
    NSButton *_barButton;
    NSBox *_separator;
    NSView *_navigationContentView;
    NSView *_paddingView;
    NSLayoutConstraint *_paddingHeightLessThanOrEqualConstraint;
    NSLayoutConstraint *_paddingHeightEqualConstraint;
}

@property BOOL needsSmoothAnimationMomentaryToggle; // @synthesize needsSmoothAnimationMomentaryToggle=_needsSmoothAnimationMomentaryToggle;
@property(retain) NSLayoutConstraint *paddingHeightEqualConstraint; // @synthesize paddingHeightEqualConstraint=_paddingHeightEqualConstraint;
@property(retain) NSLayoutConstraint *paddingHeightLessThanOrEqualConstraint; // @synthesize paddingHeightLessThanOrEqualConstraint=_paddingHeightLessThanOrEqualConstraint;
@property __weak NSView *paddingView; // @synthesize paddingView=_paddingView;
@property __weak NSView *navigationContentView; // @synthesize navigationContentView=_navigationContentView;
@property __weak NSBox *separator; // @synthesize separator=_separator;
@property __weak NSButton *barButton; // @synthesize barButton=_barButton;
@property __weak NSTextField *barTitleTextField; // @synthesize barTitleTextField=_barTitleTextField;
@property __weak NSStackView *rightBarStackView; // @synthesize rightBarStackView=_rightBarStackView;
@property __weak NSView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(copy) NSArray *internalViewControllers; // @synthesize internalViewControllers=_internalViewControllers;
@property __weak id <AKNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_performSmoothAnimation;
- (void)_prepareForSmoothAnimation;
- (void)_showBarItemsOfViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_delegate_willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_showViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_removeViewController:(id)arg1;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
@property(copy) NSArray *viewControllers;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)topViewController;
- (id)initWithRootViewController:(id)arg1;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)loadView;

@end

