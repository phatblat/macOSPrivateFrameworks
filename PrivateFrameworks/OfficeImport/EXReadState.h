//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, ECColumnWidthConvertor, EDReference, EDResources, EDSheet, EDWorkbook, EXOAVState, EXOfficeArtState, NSMutableArray, NSMutableDictionary, OCPPackagePart;

@interface EXReadState : OCXReadState
{
    unsigned int mCurrentSheetIndex;
    EDSheet *mCurrentSheet;
    unsigned long long mCellStyleXfsOffset;
    double mDefaultColumnWidth;
    double mDefaultRowHeight;
    OCPPackagePart *mCurrentPart;
    OCPPackagePart *mWorkbookPart;
    struct map<long, unsigned long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned long>>> mSharedFormulasMap;
    NSMutableArray *mArrayedFormulas;
    EDReference *mSheetDimension;
    EXOfficeArtState *mOfficeArtState;
    EXOAVState *mOAVState;
    _Bool mMaxColumnsWarned;
    _Bool mMaxRowsWarned;
    _Bool mIsPredefinedTableStylesRead;
    NSMutableDictionary *mReferenceForCommentTextBox;
    _Bool mIsPredefinedDxfsBeingRead;
    struct _xmlNs *mRelationshipNS;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    NSMutableArray *mLegacyDrawables;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    id <TCCancelDelegate> mCancelDelegate;
    CXNamespace *mEXSpreadsheetMLNamespace;
    CXNamespace *mEXSpreadsheetDrawingNamespace;
    CXNamespace *mEXSpreadsheetRelationsNamespace;
    unsigned int mCurrentRowMinColumnIndex;
    unsigned int mCurrentRowMaxColumnIndex;
}

@property(readonly, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;
@property(retain, nonatomic) CXNamespace *EXSpreadsheetRelationsNamespace; // @synthesize EXSpreadsheetRelationsNamespace=mEXSpreadsheetRelationsNamespace;
@property(retain, nonatomic) CXNamespace *EXSpreadsheetDrawingNamespace; // @synthesize EXSpreadsheetDrawingNamespace=mEXSpreadsheetDrawingNamespace;
@property(retain, nonatomic) CXNamespace *EXSpreadsheetMLNamespace; // @synthesize EXSpreadsheetMLNamespace=mEXSpreadsheetMLNamespace;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setupNSForXMLFormat:(int)arg1;
- (BOOL)isCancelled;
- (void)reportWorksheetWarning:(id)arg1;
- (void)reportWarning:(id)arg1;
- (id)legacyDrawables;
- (id)columnWidthConvertor;
- (void)relationshipNameSpaceForWorkbook:(struct _xmlNs *)arg1;
- (struct _xmlNs *)relationshipNameSpaceForWorkbook;
- (void)setPredefinedDxfsBeingRead:(_Bool)arg1;
- (_Bool)isPredefinedDxfsBeingRead;
- (void)resetForNewSheet;
- (void)setPredefinedTableStylesRead:(_Bool)arg1;
- (_Bool)isPredefinedTableStylesRead;
- (id)authorForReference:(id)arg1;
- (id)textBoxForReference:(id)arg1;
- (void)setTextBox:(id)arg1 author:(id)arg2 forReference:(id)arg3;
- (id)oavState;
- (void)setOfficeArtState:(id)arg1;
- (id)officeArtState;
- (void)setSheetDimension:(id)arg1;
- (id)sheetDimension;
- (id)arrayedFormulas;
- (void)addSharedBaseFormulaIndex:(unsigned long long)arg1 withIndex:(long long)arg2;
- (unsigned long long)sharedBaseFormulaIndexWithIndex:(long long)arg1;
- (id)workbookPart;
- (void)setCurrentPart:(id)arg1;
- (id)currentPart;
- (void)setDefaultRowHeight:(double)arg1;
- (double)defaultRowHeight;
- (void)setDefaultColumnWidth:(double)arg1;
- (double)defaultColumnWidth;
- (void)setCellStyleXfsOffset:(unsigned long long)arg1;
- (unsigned long long)cellStyleXfsOffset;
- (void)setCurrentSheet:(id)arg1;
- (id)currentSheet;
- (void)setResources:(id)arg1;
- (id)resources;
- (void)setWorkbook:(id)arg1;
- (id)workbook;
- (void)setCurrentRowMaxColumnIndex:(unsigned int)arg1;
- (unsigned int)currentRowMaxColumnIndex;
- (void)setCurrentRowMinColumnIndex:(unsigned int)arg1;
- (unsigned int)currentRowMinColumnIndex;
- (void)setCurrentSheetIndex:(unsigned int)arg1;
- (unsigned int)currentSheetIndex;
- (id)initWithWorkbookPart:(id)arg1 cancelDelegate:(id)arg2;

@end

