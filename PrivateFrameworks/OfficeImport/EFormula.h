//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDFormula, EFTableData, NSString;

@interface EFormula : NSObject
{
    id <EFHelper> mHelper;
    struct EFLexer *mYylex;
    Class mFormulaClass;
    EDFormula *mFormula;
    EFTableData *mTableData;
    NSString *mErrMsg;
}

+ (id)stringToFormula:(id)arg1 formulaHelper:(id)arg2 formulaClass:(Class)arg3;
+ (id)singletonEFormula;
- (void)setTableData:(id)arg1;
- (id)tableData;
- (id)resolveTable:(const char *)arg1 sheetIndex:(unsigned long long *)arg2;
- (unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
- (unsigned long long)resolveSheet:(const char *)arg1 isCurrentSheet:(char *)arg2;
- (unsigned long long)resolveName:(const char *)arg1;
- (id)stringToTokens:(id)arg1;
- (void)setFormulaClass:(Class)arg1;
- (Class)formulaClass;
- (void)setFormula:(id)arg1;
- (void)setFormulaHelper:(id)arg1;
- (id)formulaHelper;
- (void)dealloc;

@end

