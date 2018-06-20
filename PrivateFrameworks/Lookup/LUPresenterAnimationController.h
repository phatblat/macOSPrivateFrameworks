//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopoverAnimationController.h"

@class LUPresenter, LUSearchTermIndicator, NSAttributedString;

@interface LUPresenterAnimationController : NSPopoverAnimationController
{
    LUSearchTermIndicator *_searchTermIndicator;
    NSAttributedString *_displayedTerm;
    struct CGPoint _displayedTermOrigin;
    LUPresenter *_associatedPresenter;
}

@property(retain, nonatomic) LUPresenter *associatedPresenter; // @synthesize associatedPresenter=_associatedPresenter;
@property(retain, nonatomic) LUSearchTermIndicator *searchTermIndicator; // @synthesize searchTermIndicator=_searchTermIndicator;
@property(nonatomic) struct CGPoint displayedTermOrigin; // @synthesize displayedTermOrigin=_displayedTermOrigin;
@property(retain, nonatomic) NSAttributedString *displayedTerm; // @synthesize displayedTerm=_displayedTerm;
- (void).cxx_destruct;
- (void)commonLUPresenterAnimationControllerTeardown;
- (void)dealloc;
- (void)showPopover;
- (void)recognizerDidCompleteAnimation:(id)arg1;

@end

