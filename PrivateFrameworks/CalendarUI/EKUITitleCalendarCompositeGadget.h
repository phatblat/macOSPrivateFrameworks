//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUICompositeGadget.h>

@class EKUICalendarGadget, EKUIHeaderImageView, EKUISubtitleGadget, EKUITitleGadget, NSArray, NSLayoutConstraint;

@interface EKUITitleCalendarCompositeGadget : EKUICompositeGadget
{
    EKUITitleGadget *_titleGadget;
    EKUICalendarGadget *_calendarGadget;
    EKUIHeaderImageView *_headerImageView;
    EKUISubtitleGadget *_subtitleGadget;
    NSArray *_titleCalendarHorizontalConstraints;
    NSArray *_titleWithoutCalendarHorizontalConstraints;
    NSLayoutConstraint *_calendarGadgetCollapsedWidthConstraint;
    NSLayoutConstraint *_calendarGadgetMaxWidthConstraint;
    NSLayoutConstraint *_calendarGadgetPreferredWidthConstraint;
}

@property(retain) NSLayoutConstraint *calendarGadgetPreferredWidthConstraint; // @synthesize calendarGadgetPreferredWidthConstraint=_calendarGadgetPreferredWidthConstraint;
@property(retain) NSLayoutConstraint *calendarGadgetMaxWidthConstraint; // @synthesize calendarGadgetMaxWidthConstraint=_calendarGadgetMaxWidthConstraint;
@property(retain) NSLayoutConstraint *calendarGadgetCollapsedWidthConstraint; // @synthesize calendarGadgetCollapsedWidthConstraint=_calendarGadgetCollapsedWidthConstraint;
@property(retain) NSArray *titleWithoutCalendarHorizontalConstraints; // @synthesize titleWithoutCalendarHorizontalConstraints=_titleWithoutCalendarHorizontalConstraints;
@property(retain) NSArray *titleCalendarHorizontalConstraints; // @synthesize titleCalendarHorizontalConstraints=_titleCalendarHorizontalConstraints;
@property(retain) EKUISubtitleGadget *subtitleGadget; // @synthesize subtitleGadget=_subtitleGadget;
@property(retain) EKUIHeaderImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain) EKUICalendarGadget *calendarGadget; // @synthesize calendarGadget=_calendarGadget;
@property(retain) EKUITitleGadget *titleGadget; // @synthesize titleGadget=_titleGadget;
- (void).cxx_destruct;
- (BOOL)performDragOperation:(id)arg1;
- (id)claimedPboardTypes;
- (BOOL)shouldBeFullWidth;
- (void)selectTitleWithTrailingCursor:(BOOL)arg1;
- (BOOL)updateWithDiff:(id)arg1;
- (id)subgadgets;
- (void)updateConstraints;
- (BOOL)adjustConstraintsInResponseToLayout;
- (id)initWithViewController:(id)arg1;

@end

