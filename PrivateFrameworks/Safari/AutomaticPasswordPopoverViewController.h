//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTouchBarDelegate.h"
#import "NSTouchBarProvider.h"

@class NSBox, NSButton, NSCustomTouchBarItem, NSGroupTouchBarItem, NSStackView, NSString, NSTextField, NSTouchBar;

__attribute__((visibility("hidden")))
@interface AutomaticPasswordPopoverViewController : NSViewController <NSTouchBarDelegate, NSTouchBarProvider>
{
    NSGroupTouchBarItem *_groupTouchBarItem;
    NSCustomTouchBarItem *_doNotUseTouchBarItem;
    NSCustomTouchBarItem *_useStrongPasswordTouchBarItem;
    NSTouchBar *_touchBar;
    id <AutomaticPasswordPopoverViewControllerDelegate> _delegate;
    NSBox *_horizontalDivider;
    NSStackView *_popoverTitleStackView;
    NSTextField *_popoverTitleLabel;
    NSTextField *_descriptionTextField;
    NSStackView *_rootStackView;
    NSButton *_doNotUseButton;
    NSButton *_useStrongPasswordButton;
}

@property(nonatomic) __weak NSButton *useStrongPasswordButton; // @synthesize useStrongPasswordButton=_useStrongPasswordButton;
@property(nonatomic) __weak NSButton *doNotUseButton; // @synthesize doNotUseButton=_doNotUseButton;
@property(nonatomic) __weak NSStackView *rootStackView; // @synthesize rootStackView=_rootStackView;
@property(nonatomic) __weak NSTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
@property(nonatomic) __weak NSTextField *popoverTitleLabel; // @synthesize popoverTitleLabel=_popoverTitleLabel;
@property(nonatomic) __weak NSStackView *popoverTitleStackView; // @synthesize popoverTitleStackView=_popoverTitleStackView;
@property(nonatomic) __weak NSBox *horizontalDivider; // @synthesize horizontalDivider=_horizontalDivider;
@property(nonatomic) __weak id <AutomaticPasswordPopoverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_useStrongPasswordButtonTitle;
- (id)_doNotUseStrongPasswordButtonTitle;
- (void)_notifyDelegateToUseStrongPassword:(BOOL)arg1;
- (void)_useStrongPassword:(id)arg1;
- (void)_doNotUse:(id)arg1;
- (id)_doNotUseItem;
- (id)_useStrongPasswordItem;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
@property(readonly) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
- (void)doNotUseStrongPassword:(id)arg1;
- (void)useStrongPassword:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

