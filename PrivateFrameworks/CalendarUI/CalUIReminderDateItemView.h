//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrubberItemView.h"

@class NSDate, NSTextField;

@interface CalUIReminderDateItemView : NSScrubberItemView
{
    NSDate *_date;
    NSTextField *_dateText;
}

+ (id)titleForDate:(id)arg1;
@property(readonly) NSTextField *dateText; // @synthesize dateText=_dateText;
@property(readonly) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithDate:(id)arg1;

@end

