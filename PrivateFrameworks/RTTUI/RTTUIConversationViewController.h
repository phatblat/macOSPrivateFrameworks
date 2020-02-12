//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextViewDelegate.h"
#import "RTTUIServiceCellDelegate.h"
#import "RTTUIUtteranceCellDelegate.h"

@class AXDispatchTimer, CAShapeLayer, NSButton, NSMutableString, NSScrollView, NSString, NSTableView, NSTextView, RTTConversation, RTTUIServiceUpdateCell, RTTUtterance, TUCall;

@interface RTTUIConversationViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, RTTUIUtteranceCellDelegate, NSTextViewDelegate, RTTUIServiceCellDelegate>
{
    NSTextView *_textView;
    CAShapeLayer *_bubbleLayer;
    RTTUIServiceUpdateCell *_serviceCell;
    id _keyboardEventMonitor;
    NSButton *_gaButton;
    AXDispatchTimer *_voAnnouncementTimer;
    AXDispatchTimer *_realTimeTimeout;
    NSMutableString *_voAnnouncementBuffer;
    BOOL _serviceMessageVisible;
    RTTConversation *_conversation;
    NSString *_currentServiceMessage;
    NSScrollView *_scrollView;
    NSTableView *_tableView;
    RTTUtterance *_currentUtterance;
    TUCall *_call;
}

+ (BOOL)_validRectangle:(struct CGRect)arg1;
+ (id)viewControllerForConversation:(id)arg1;
+ (id)viewControllerForCall:(id)arg1;
@property(retain, nonatomic) TUCall *call; // @synthesize call=_call;
@property(retain, nonatomic) RTTUtterance *currentUtterance; // @synthesize currentUtterance=_currentUtterance;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSString *currentServiceMessage; // @synthesize currentServiceMessage=_currentServiceMessage;
@property(retain, nonatomic) RTTConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)textDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 sizeToFitWidthOfColumn:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)utteranceCellDidUpdateContent:(id)arg1;
- (void)updateTableViewSizeAnimated:(BOOL)arg1;
- (void)viewDidAppear;
- (void)updateGAButton:(BOOL)arg1;
- (void)viewWillAppear;
- (void)setupTableView;
- (void)loadView;
- (void)_processRealtimeTimeout;
- (void)realtimeTextDidChange;
- (id)lastRowPathForUtterance:(id)arg1;
- (void)gaButtonPressed:(id)arg1;
- (void)deviceDidReceiveString:(id)arg1 forUtterance:(id)arg2;
- (void)_scrollToIndexPathIfNecessary:(id)arg1 animated:(BOOL)arg2;
- (void)updateVoiceOverAnnouncement:(id)arg1;
- (id)currentContactPath;
- (id)cannedResponses;
- (id)cellAtIndexPath:(id)arg1;
- (void)setTextViewUtterance:(id)arg1;
- (id)textViewUtterance;
- (void)updateUtterance:(id)arg1 forIndexPath:(id)arg2;
- (id)addUtterance:(id)arg1;
- (void)_updateServiceCellWithString:(id)arg1;
- (void)updateServiceCellWithString:(id)arg1;
- (id)currentCall;
- (id)contactDisplayString;
- (void)toggleMute:(id)arg1;
- (void)updateMuteButton;
- (id)onHoldMessage;
- (void)callDidConnect:(id)arg1;
- (void)updateCallActiveStatus:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)inputTextView;
- (id)init;
- (BOOL)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

