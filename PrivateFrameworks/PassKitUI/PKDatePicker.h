//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSDate, NSPopUpButton;

@interface PKDatePicker : NSView
{
    BOOL _showsDay;
    BOOL _showsMonth;
    BOOL _showsYear;
    BOOL _isExpirationDate;
    NSDate *_date;
    id <PKDatePickerDelegate> _delegate;
    NSPopUpButton *_dayPopUpButton;
    NSPopUpButton *_monthPopUpButton;
    NSPopUpButton *_yearPopUpButton;
}

@property(retain) NSPopUpButton *yearPopUpButton; // @synthesize yearPopUpButton=_yearPopUpButton;
@property(retain) NSPopUpButton *monthPopUpButton; // @synthesize monthPopUpButton=_monthPopUpButton;
@property(retain) NSPopUpButton *dayPopUpButton; // @synthesize dayPopUpButton=_dayPopUpButton;
@property(nonatomic) id <PKDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) BOOL isExpirationDate; // @synthesize isExpirationDate=_isExpirationDate;
@property(readonly, nonatomic) BOOL showsYear; // @synthesize showsYear=_showsYear;
@property(readonly, nonatomic) BOOL showsMonth; // @synthesize showsMonth=_showsMonth;
@property(readonly, nonatomic) BOOL showsDay; // @synthesize showsDay=_showsDay;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
- (void)popUpDidUpdate:(id)arg1;
- (void)reconfigureToShowDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3;
- (void)_configurePopUpButton:(id)arg1 placeHolder:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

