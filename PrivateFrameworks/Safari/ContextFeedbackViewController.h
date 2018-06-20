//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class CKContextResponse, NSButton, NSMapTable, NSProgressIndicator, NSStackView, NSString, NSTextField, NSURL;

__attribute__((visibility("hidden")))
@interface ContextFeedbackViewController : NSViewController
{
    NSString *_pageTitle;
    NSURL *_url;
    BOOL _isReaderAvailable;
    NSMapTable *_topicsToGrades;
    NSMapTable *_categoriesToGrades;
    CKContextResponse *_contextResponse;
    CDUnknownBlockType _didSendFeedbackHandler;
    NSTextField *_instructionLabel;
    NSStackView *_stackView;
    NSTextField *_instructionLabelForCategories;
    NSStackView *_categoryStackView;
    NSTextField *_commentField;
    NSButton *_shareURLSwitch;
    NSButton *_sendFeedbackButton;
    NSProgressIndicator *_progressIndicator;
}

@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) __weak NSButton *sendFeedbackButton; // @synthesize sendFeedbackButton=_sendFeedbackButton;
@property(nonatomic) __weak NSButton *shareURLSwitch; // @synthesize shareURLSwitch=_shareURLSwitch;
@property(nonatomic) __weak NSTextField *commentField; // @synthesize commentField=_commentField;
@property(nonatomic) __weak NSStackView *categoryStackView; // @synthesize categoryStackView=_categoryStackView;
@property(nonatomic) __weak NSTextField *instructionLabelForCategories; // @synthesize instructionLabelForCategories=_instructionLabelForCategories;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak NSTextField *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(copy, nonatomic) CDUnknownBlockType didSendFeedbackHandler; // @synthesize didSendFeedbackHandler=_didSendFeedbackHandler;
@property(retain, nonatomic) CKContextResponse *contextResponse; // @synthesize contextResponse=_contextResponse;
- (void).cxx_destruct;
- (void)sendFeedback:(id)arg1;
- (void)_saveGradeFromLevelIndicator:(id)arg1 forResult:(id)arg2 toMapTable:(id)arg3;
- (void)_didSelectGradeForCategory:(id)arg1;
- (void)_didSelectGradeForTopic:(id)arg1;
- (void)_populateStackViewWithTopicsFromCurrentContextResponse;
- (void)viewDidLoad;
- (id)initWithContextResponse:(id)arg1 pageTitle:(id)arg2 URL:(id)arg3 isReaderAvailable:(BOOL)arg4;

@end

