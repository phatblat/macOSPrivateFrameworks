//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SiriUIAceObjectViewControllerDelegate.h"

@class NSArray, NSViewController;

@protocol SiriUISnippetViewControllerDelegate <SiriUIAceObjectViewControllerDelegate>
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 shouldPresentPicker:(NSViewController *)arg2 completion:(void (^)(BOOL))arg3;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 setStatusViewHidden:(BOOL)arg2;
- (void)siriSnippetViewControllerViewDidLoad:(id <SiriUIViewController>)arg1;
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id <SiriUIViewController>)arg1;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 pushSirilandSnippets:(NSArray *)arg2;
@end
