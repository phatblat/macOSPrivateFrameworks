//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCDDocument.h>

@class NSDate, NSMutableArray, NSMutableSet, NSString, OADBackground, OADColorMap, WDCitationTable, WDFontTable, WDListDefinitionTable, WDListTable, WDRevisionAuthorTable, WDStyleSheet, WDText;

__attribute__((visibility("hidden")))
@interface WDDocument : OCDDocument
{
    WDStyleSheet *mStyleSheet;
    WDFontTable *mFontTable;
    WDListDefinitionTable *mListDefinitionTable;
    WDRevisionAuthorTable *mRevisionAuthorTable;
    WDCitationTable *mCitationTable;
    WDListTable *mListTable;
    NSMutableArray *mSections;
    unsigned short mDefaultTabWidth;
    WDText *mImageBulletText;
    WDText *mFootnoteSeparator;
    WDText *mFootnoteContinuationSeparator;
    WDText *mFootnoteContinuationNotice;
    WDText *mEndnoteSeparator;
    WDText *mEndnoteContinuationSeparator;
    WDText *mEndnoteContinuationNotice;
    int mFootnoteNumberFormat;
    int mEndnoteNumberFormat;
    int mFootnotePosition;
    int mEndnotePosition;
    int mFootnoteRestart;
    int mEndnoteRestart;
    unsigned short mFootnoteNumberingStart;
    int mGutterPosition;
    NSString *mOleFilename;
    NSString *mKinsokuAltBreakBefore;
    NSString *mKinsokuAltBreakAfter;
    short mZoomPercentage;
    NSString *mVersion;
    NSString *mLanguage;
    unsigned int mMirrorMargins:1;
    unsigned int mBorderSurroundHeader:1;
    unsigned int mBorderSurroundFooter:1;
    unsigned int mKinsokuStrict:1;
    unsigned int mAutoHyphenate:1;
    unsigned int mEvenAndOddHeaders:1;
    unsigned int mBookFold:1;
    unsigned int mShowMarkup:1;
    unsigned int mShowComments:1;
    unsigned int mTrackChanges:1;
    unsigned int mShowRevisionMarksOnScreen:1;
    unsigned int mShowInsertionsAndDeletions:1;
    unsigned int mShowFormatting:1;
    unsigned int mShowOutline:1;
    unsigned int mNoTabForHangingIndents:1;
    NSMutableArray *mDocumentImages;
    NSMutableArray *mChangeTrackingEditDates;
    NSMutableArray *mChangeTrackingEditAuthors;
    NSDate *mCreationDate;
    NSDate *mModificationDate;
    NSMutableArray *mImageBullets;
    OADBackground *mDocumentBackground;
    NSMutableSet *mObjPointers;
    OADColorMap *mColorMap;
}

- (void).cxx_destruct;
- (id)description;
- (void)setColorMap:(id)arg1;
- (id)colorMap;
- (BOOL)isFromBinary;
- (id)newAnnotationBlockIterator;
- (id)annotationBlockIterator;
- (id)newEndnoteBlockIterator;
- (id)endnoteBlockIterator;
- (id)newFootnoteBlockIterator;
- (id)footnoteBlockIterator;
- (id)newAnnotationIterator;
- (id)annotationIterator;
- (id)newEndnoteIterator;
- (id)endnoteIterator;
- (id)newFootnoteIterator;
- (id)footnoteIterator;
- (id)newMainRunsIterator;
- (id)mainRunsIterator;
- (id)newMainBlocksIterator;
- (id)mainBlocksIterator;
- (id)newSectionIterator;
- (id)sectionIterator;
- (void)removeEmptySections;
- (id)documentBackground;
- (void)setDocumentBackground:(id)arg1;
- (id)imageBulletText;
- (void)setLastModDate:(id)arg1;
- (id)lastModDate;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (id)changeTrackingEditAuthors;
- (id)changeTrackingEditDates;
- (void)addChangeTrackingEditAtDate:(id)arg1 authorIndex:(int)arg2;
- (void)setNoTabForHangingIndents:(BOOL)arg1;
- (BOOL)noTabForHangingIndents;
- (void)setShowOutline:(BOOL)arg1;
- (BOOL)showOutline;
- (void)setShowFormatting:(BOOL)arg1;
- (BOOL)showFormatting;
- (void)setShowInsertionsAndDeletions:(BOOL)arg1;
- (BOOL)showInsertionsAndDeletions;
- (void)setShowRevisionMarksOnScreen:(BOOL)arg1;
- (BOOL)showRevisionMarksOnScreen;
- (void)setTrackChanges:(BOOL)arg1;
- (BOOL)trackChanges;
- (void)setShowComments:(BOOL)arg1;
- (BOOL)showComments;
- (void)setShowMarkup:(BOOL)arg1;
- (BOOL)showMarkup;
- (void)addRevisionAuthor:(id)arg1;
- (unsigned long long)revisionAuthorAddLookup:(id)arg1;
- (id)revisionAuthorAt:(unsigned long long)arg1;
- (unsigned long long)revisionAuthorCount;
- (id)revisionAuthorTable;
- (void)setLanguage:(id)arg1;
- (id)language;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)addImageBullets;
- (id)imageBullets;
- (id)imageBulletParagraph;
- (id)addImageBulletText;
- (id)imageBulletWithCharacterOffset:(int)arg1;
- (id)applicationName;
- (void)setZoomPercentage:(short)arg1;
- (short)zoomPercentage;
- (void)setBookFold:(BOOL)arg1;
- (BOOL)bookFold;
- (void)setOleFilename:(id)arg1;
- (id)oleFilename;
- (void)setGutterPosition:(int)arg1;
- (int)gutterPosition;
- (id)listLevelWithListId:(int)arg1 levelIndex:(unsigned char)arg2;
- (id)listWithListId:(int)arg1;
- (id)listTable;
- (id)listDefinitionWithListId:(int)arg1;
- (id)listDefinitionWithListDefinitionId:(int)arg1;
- (id)listDefinitionTable;
- (id)citationTable;
- (void)addCitation:(id)arg1 forID:(id)arg2;
- (id)citationFor:(id)arg1;
- (unsigned long long)citationCount;
- (void)setFootnoteNumberingStart:(unsigned short)arg1;
- (unsigned short)footnoteNumberingStart;
- (void)setEndnoteRestart:(int)arg1;
- (int)endnoteRestart;
- (void)setFootnoteRestart:(int)arg1;
- (int)footnoteRestart;
- (void)setEndnotePosition:(int)arg1;
- (int)endnotePosition;
- (void)setFootnotePosition:(int)arg1;
- (int)footnotePosition;
- (void)setEndnoteNumberFormat:(int)arg1;
- (int)endnoteNumberFormat;
- (void)setFootnoteNumberFormat:(int)arg1;
- (int)footnoteNumberFormat;
- (id)endnoteContinuationNotice;
- (id)endnoteContinuationSeparator;
- (id)endnoteSeparator;
- (id)footnoteContinuationNotice;
- (id)footnoteContinuationSeparator;
- (id)footnoteSeparator;
- (void)setEvenAndOddHeaders:(BOOL)arg1;
- (BOOL)evenAndOddHeaders;
- (void)setAutoHyphenate:(BOOL)arg1;
- (BOOL)autoHyphenate;
- (void)setKinsokuStrict:(BOOL)arg1;
- (BOOL)kinsokuStrict;
- (void)setKinsokuAltBreakAfter:(id)arg1;
- (id)kinsokuAltBreakAfter;
- (void)setKinsokuAltBreakBefore:(id)arg1;
- (id)kinsokuAltBreakBefore;
- (void)setDefaultTabWidth:(unsigned short)arg1;
- (unsigned short)defaultTabWidth;
- (void)setBorderSurroundFooter:(BOOL)arg1;
- (BOOL)borderSurroundFooter;
- (void)setBorderSurroundHeader:(BOOL)arg1;
- (BOOL)borderSurroundHeader;
- (void)setMirrorMargins:(BOOL)arg1;
- (BOOL)mirrorMargins;
- (id)addSection;
- (id)lastSection;
- (id)sectionAt:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (id)sections;
- (id)fontTable;
- (id)styleSheet;
- (void)removeObjPointer:(id)arg1;
- (void)addObjPointer:(id)arg1;
- (id)init;

@end

