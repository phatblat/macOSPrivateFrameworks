//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUIDateTimeGadget.h>

@interface EKUIProposedTimeDateTimeGadget : EKUIDateTimeGadget
{
    BOOL _shouldSuppressMiniCal;
}

+ (id)interestedChangeKeys;
@property BOOL shouldSuppressMiniCal; // @synthesize shouldSuppressMiniCal=_shouldSuppressMiniCal;
- (BOOL)isExpanded;
- (id)control;
- (id)labelString;
- (void)datePickerChangedToDate:(id)arg1;
- (void)_updateDatePickerDate;
- (void)updateWithChanges:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end
