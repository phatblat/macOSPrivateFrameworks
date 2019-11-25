//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFDailyRoutineShortcutSetupQuestion.h>

@class NSArray, NSString, WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion, WFImage;

@interface WFDailyRoutineShortcutSetupActionsQuestion : WFDailyRoutineShortcutSetupQuestion
{
    NSArray *_actions;
    NSString *_addButtonTitle;
    NSString *_skipButtonTitle;
    WFImage *_icon;
    WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *_followUpQuestion;
}

@property(retain, nonatomic) WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *followUpQuestion; // @synthesize followUpQuestion=_followUpQuestion;
@property(retain, nonatomic) WFImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *skipButtonTitle; // @synthesize skipButtonTitle=_skipButtonTitle;
@property(copy, nonatomic) NSString *addButtonTitle; // @synthesize addButtonTitle=_addButtonTitle;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)initWithPrompt:(id)arg1 subtitle:(id)arg2 actions:(id)arg3;

@end

