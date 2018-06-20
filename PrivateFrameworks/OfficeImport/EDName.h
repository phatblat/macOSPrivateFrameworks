//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDFormula, EDString, NSString, OITSUPointerKeyDictionary;

@interface EDName : NSObject
{
    NSString *_formulaString;
    OITSUPointerKeyDictionary *_maxWorksheetReferences;
    EDString *_nameString;
    EDFormula *_formula;
    unsigned long long _sheetIndex;
}

+ (id)name;
@property(nonatomic) unsigned long long sheetIndex; // @synthesize sheetIndex=_sheetIndex;
@property(readonly, nonatomic) EDFormula *formula; // @synthesize formula=_formula;
@property(retain, nonatomic) EDString *nameString; // @synthesize nameString=_nameString;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) OITSUPointerKeyDictionary *maxWorksheetReferences;
- (void)setFormula:(id)arg1 workbook:(id)arg2;
@property(readonly, nonatomic) NSString *internalFunctionName;
@property(readonly, nonatomic) BOOL isInternalFunction;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (BOOL)isEqualToEDName:(id)arg1;
- (id)init;
- (void)setFormulaString:(id)arg1 workbook:(id)arg2;
- (id)formulaString;

@end

