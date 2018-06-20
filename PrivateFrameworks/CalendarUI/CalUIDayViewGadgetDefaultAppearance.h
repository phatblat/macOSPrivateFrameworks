//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalUIDayViewGadgetAppearanceDelegate.h"

@class NSColor, NSDate, NSFont, NSString;

@interface CalUIDayViewGadgetDefaultAppearance : NSObject <CalUIDayViewGadgetAppearanceDelegate>
{
    NSColor *_nowColor;
    NSColor *_hourLineColor;
    NSFont *_timelineFont;
    NSFont *_locationFont;
    NSFont *_titleFont;
}

+ (id)_fontWithFontSize:(double)arg1 bold:(BOOL)arg2;
@property(retain, nonatomic) NSFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSFont *locationFont; // @synthesize locationFont=_locationFont;
@property(retain, nonatomic) NSFont *timelineFont; // @synthesize timelineFont=_timelineFont;
- (void).cxx_destruct;
- (id)fontForEventOccurrencesWithWeight:(int)arg1;
- (BOOL)shouldShowTime;
- (long long)backgroundStyle;
@property(readonly) NSString *truncatedNowLabelFormat;
@property(readonly) NSString *nowLabelFormat;
@property(readonly) double nowCircleRadius;
@property(readonly) double nowLineHeight;
@property(readonly) NSColor *nowLineColor;
@property(readonly) NSString *dateFormat;
@property(readonly) NSColor *hourLineColor;
@property(readonly) double hourLabelOutdent;
@property(readonly) double hourLabelWidth;
@property(readonly) double hourLabelTopMargin;
@property(readonly) double horizontalOffset;
@property(readonly) double verticalOffset;
@property(readonly) double hourLineOutdent;
@property(readonly, nonatomic) unsigned long long numberOfEmptyHoursDisplayed;
- (double)numberOfSecondsAfterLastEvent;
- (double)numberOfSecondsBeforeFirstEvent;
@property(readonly) double heightAfterLastEvent;
@property(readonly) double heightBeforeFirstEvent;
@property(readonly) double timelineWidth;
@property(readonly) BOOL shouldDisplayTimeline;
@property(readonly) double hourHeight;
- (id)init;

// Remaining properties
@property(readonly) NSColor *allDaySeparatorColor;
@property(readonly) double allDaySeparatorHeight;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSDate *displayEnd;
@property(readonly) NSDate *displayStart;
@property(readonly) long long displayType;
@property(readonly) unsigned long long hash;
@property(readonly) BOOL isHourHeightFixed;
@property(readonly) BOOL shouldAllDayEventsShowColorBar;
@property(readonly) BOOL shouldAlwaysDrawAllDayArea;
@property(readonly) BOOL shouldDisplayCurrentTime;
@property(readonly) BOOL shouldDisplayPreviewEventsAsTentative;
@property(readonly) BOOL shouldDrawAllDaySeparator;
@property(readonly) Class superclass;

@end

