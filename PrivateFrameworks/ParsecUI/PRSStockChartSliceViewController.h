//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ParsecUI/PRSCardSectionSliceViewController.h>

#import "ChartUpdaterDelegate.h"

@class ChartUpdater, NSArray, NSButton, NSStackView, PRSStockChartCardSection;

@interface PRSStockChartSliceViewController : PRSCardSectionSliceViewController <ChartUpdaterDelegate>
{
    NSButton *_stockIntervalButtonOneDay;
    NSButton *_stockIntervalButtonOneWeek;
    NSButton *_stockIntervalButtonOneMonth;
    NSButton *_stockIntervalButtonThreeMonths;
    NSButton *_stockIntervalButtonSixMonths;
    NSButton *_stockIntervalButtonOneYear;
    NSButton *_stockIntervalButtonTwoYears;
    NSStackView *_stockIntervalButtonsRowView;
    ChartUpdater *_chartUpdater;
    NSArray *_stockIntervalButtons;
}

@property(retain, nonatomic) NSArray *stockIntervalButtons; // @synthesize stockIntervalButtons=_stockIntervalButtons;
@property(retain, nonatomic) ChartUpdater *chartUpdater; // @synthesize chartUpdater=_chartUpdater;
@property __weak NSStackView *stockIntervalButtonsRowView; // @synthesize stockIntervalButtonsRowView=_stockIntervalButtonsRowView;
@property __weak NSButton *stockIntervalButtonTwoYears; // @synthesize stockIntervalButtonTwoYears=_stockIntervalButtonTwoYears;
@property __weak NSButton *stockIntervalButtonOneYear; // @synthesize stockIntervalButtonOneYear=_stockIntervalButtonOneYear;
@property __weak NSButton *stockIntervalButtonSixMonths; // @synthesize stockIntervalButtonSixMonths=_stockIntervalButtonSixMonths;
@property __weak NSButton *stockIntervalButtonThreeMonths; // @synthesize stockIntervalButtonThreeMonths=_stockIntervalButtonThreeMonths;
@property __weak NSButton *stockIntervalButtonOneMonth; // @synthesize stockIntervalButtonOneMonth=_stockIntervalButtonOneMonth;
@property __weak NSButton *stockIntervalButtonOneWeek; // @synthesize stockIntervalButtonOneWeek=_stockIntervalButtonOneWeek;
@property __weak NSButton *stockIntervalButtonOneDay; // @synthesize stockIntervalButtonOneDay=_stockIntervalButtonOneDay;
- (void).cxx_destruct;
- (void)chartUpdater:(id)arg1 didFailWithError:(id)arg2;
- (void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2;
- (void)stockIntervalTypeChanged:(id)arg1;
- (void)syncAttributes;
- (double)height;
- (void)awakeFromNib;
@property(retain, nonatomic) PRSStockChartCardSection *stockChartCardSection;
- (id)initWithCardSection:(id)arg1 nibName:(id)arg2;
- (id)initWithStockChartCardSection:(id)arg1;

@end

