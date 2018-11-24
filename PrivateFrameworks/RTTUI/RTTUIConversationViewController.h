//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextViewDelegate.h"
#import "RTTUIUtteranceCellDelegate.h"

@class CAShapeLayer, NSImageView, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSScrollView, NSString, NSTableView, NSTextView, RTTConversation, RTTUtterance, TUCall;

@interface RTTUIConversationViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, RTTUIUtteranceCellDelegate, NSTextViewDelegate>
{
    NSTextView *_textView;
    CAShapeLayer *_bubbleLayer;
    id _keyboardEventMonitor;
    NSImageView *_gaButton;
    NSLock *_realtimeSendLock;
    NSObject<OS_dispatch_queue> *_utteranceRequestQueue;
    BOOL _processingUtteranceBuffer;
    RTTConversation *_conversation;
    NSScrollView *_scrollView;
    NSTableView *_tableView;
    RTTUtterance *_currentUtterance;
    TUCall *_call;
    NSMutableArray *_utteranceBuffer;
}

+ (id)viewControllerForConversation:(id)arg1;
+ (id)viewControllerForCall:(id)arg1;
@property(nonatomic) BOOL processingUtteranceBuffer; // @synthesize processingUtteranceBuffer=_processingUtteranceBuffer;
@property(retain, nonatomic) NSMutableArray *utteranceBuffer; // @synthesize utteranceBuffer=_utteranceBuffer;
@property(retain, nonatomic) TUCall *call; // @synthesize call=_call;
@property(retain, nonatomic) RTTUtterance *currentUtterance; // @synthesize currentUtterance=_currentUtterance;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
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
- (void)setupTableView;
- (void)loadView;
- (void)realtimeTextDidChange;
- (void)gaButtonPressed:(id)arg1;
- (void)deviceDidReceiveString:(id)arg1 forUtterance:(id)arg2;
- (id)currentContactPath;
- (id)cannedResponses;
- (id)cellAtIndexPath:(id)arg1;
- (void)setTextViewUtterance:(id)arg1;
- (id)textViewUtterance;
- (void)sendNewUtteranceString:(id)arg1;
- (void)_sendNewUtteranceString:(id)arg1 atIndex:(unsigned long long)arg2 forCellPath:(id)arg3;
- (void)processUtteranceQueue;
- (id)addUtterance:(id)arg1;
- (id)callContainingUtterance;
- (void)toggleMute:(id)arg1;
- (void)updateMuteButton;
- (void)callDidConnect:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)inputTextView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

