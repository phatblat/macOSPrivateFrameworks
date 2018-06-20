//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/EDFormula.h>

@class EDReferenceCollection, EDWorkbook;

@interface CHDFormula : EDFormula
{
    EDReferenceCollection *mReferences;
    EDWorkbook *mWorkbook;
}

+ (id)formulaWithReferences:(id)arg1;
+ (id)formulaWithReference:(id)arg1;
- (void).cxx_destruct;
- (id)constantValuesFromConstantStringFormula;
- (_Bool)isConstantStringFormula;
- (void)prepareTokens;
- (unsigned long long)countOfCellsBeingReferenced;
- (void)setReferences:(id)arg1;
- (id)references;
- (void)setWorkbook:(id)arg1;
- (id)initWithReferences:(id)arg1;
- (id)initWithReference:(id)arg1;
- (id)initWithWorkbook:(id)arg1;
- (id)referencesFromFormula;

@end

