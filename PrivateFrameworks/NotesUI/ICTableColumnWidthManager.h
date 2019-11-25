//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICTable, ICTextController, NSMutableDictionary, NSObject<ICAvailableTableWidthProviding>;

@interface ICTableColumnWidthManager : NSObject
{
    ICTable *_table;
    NSObject<ICAvailableTableWidthProviding> *_delegate;
    ICTextController *_styler;
    NSMutableDictionary *_cachedIdealColumnWidths;
    NSMutableDictionary *_cachedActualColumnWidths;
    NSMutableDictionary *_cachedMinimumColumnWidths;
}

@property(readonly, nonatomic) NSMutableDictionary *cachedMinimumColumnWidths; // @synthesize cachedMinimumColumnWidths=_cachedMinimumColumnWidths;
@property(readonly, nonatomic) NSMutableDictionary *cachedActualColumnWidths; // @synthesize cachedActualColumnWidths=_cachedActualColumnWidths;
@property(readonly, nonatomic) NSMutableDictionary *cachedIdealColumnWidths; // @synthesize cachedIdealColumnWidths=_cachedIdealColumnWidths;
@property(readonly, nonatomic) ICTextController *styler; // @synthesize styler=_styler;
@property(readonly, nonatomic) __weak NSObject<ICAvailableTableWidthProviding> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak ICTable *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (id)recalculateActualWidths;
- (id)invalidateAvailableWidth;
- (id)invalidateWidthForColumns:(id)arg1;
- (double)comfortableColumnWidth;
- (double)comfortableNumberOfColumnsOnscreen;
- (double)calculateIdealWidthOfColumn:(id)arg1;
- (double)widthOfColumn:(id)arg1;
@property(readonly, nonatomic) double singleColumnTableWidth;
- (id)initWithTable:(id)arg1 delegate:(id)arg2;

@end

