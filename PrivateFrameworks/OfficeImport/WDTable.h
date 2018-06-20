//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/WDBlock.h>

@class NSMutableArray, WDTableProperties;

@interface WDTable : WDBlock
{
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (void).cxx_destruct;
- (id)description;
- (id)newRunIterator;
- (id)runIterator;
- (id)newCellIterator;
- (id)cellIterator;
- (id)newRowIterator;
- (id)rowIterator;
- (int)nestingLevel;
- (int)blockType;
- (void)clearRows;
- (id)insertRowAtIndex:(unsigned long long)arg1;
- (id)addRow;
- (id)rowAt:(unsigned long long)arg1;
- (unsigned long long)rowCount;
- (void)clearProperties;
- (id)properties;
- (id)initWithText:(id)arg1;

@end

