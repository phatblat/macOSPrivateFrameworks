//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WDDocument, WDText;

__attribute__((visibility("hidden")))
@interface WDSection : NSObject
{
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    WDText *mText;
    WDText *mEvenPageHeader;
    WDText *mOddPageHeader;
    WDText *mFirstPageHeader;
    WDText *mEvenPageFooter;
    WDText *mOddPageFooter;
    WDText *mFirstPageFooter;
    CDStruct_9cc0d39f mOriginalProperties;
    CDStruct_9cc0d39f mTrackedProperties;
    WDDocument *mDocument;
}

@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isFormattingChangeDateOverridden;
- (void)setFormattingChangeDate:(id)arg1;
- (id)formattingChangeDate;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isFormattingChangedOverridden;
- (void)setFormattingChanged:(BOOL)arg1;
- (BOOL)formattingChanged;
- (BOOL)isBidiOverridden;
- (void)setBidi:(BOOL)arg1;
- (BOOL)bidi;
- (BOOL)isTitlePageOverridden;
- (void)setTitlePage:(BOOL)arg1;
- (BOOL)titlePage;
- (BOOL)isVerticalJustificationOverridden;
- (void)setVerticalJustification:(int)arg1;
- (int)verticalJustification;
- (BOOL)isColumnSpaceOverridden;
- (void)setColumnSpace:(long long)arg1;
- (long long)columnSpace;
- (BOOL)isColumnsEqualWidthOverridden;
- (void)setColumnsEqualWidth:(BOOL)arg1;
- (BOOL)columnsEqualWidth;
- (void)appendColumnSpace:(long long)arg1;
- (long long)columnSpaceAt:(unsigned int)arg1;
- (BOOL)isColumnWidthDefinedAt:(unsigned int)arg1;
- (BOOL)isLastColumnWidthDefined;
- (void)appendColumnWidth:(long long)arg1;
- (long long)columnWidthAt:(unsigned int)arg1;
- (BOOL)isColumnCountOverridden;
- (void)setColumnCount:(unsigned short)arg1;
- (unsigned short)columnCount;
- (BOOL)isChapterNumberSeparatorOverridden;
- (void)setChapterNumberSeparator:(int)arg1;
- (int)chapterNumberSeparator;
- (BOOL)isPageNumberRestartOverridden;
- (void)setPageNumberRestart:(BOOL)arg1;
- (BOOL)pageNumberRestart;
- (BOOL)isPageNumberStartOverridden;
- (void)setPageNumberStart:(unsigned short)arg1;
- (unsigned short)pageNumberStart;
- (BOOL)isPageNumberFormatOverridden;
- (void)setPageNumberFormat:(int)arg1;
- (int)pageNumberFormat;
- (BOOL)isLineNumberRestartOverridden;
- (void)setLineNumberRestart:(int)arg1;
- (int)lineNumberRestart;
- (BOOL)isLineNumberDistanceOverridden;
- (void)setLineNumberDistance:(short)arg1;
- (short)lineNumberDistance;
- (BOOL)isLineNumberIncrementOverridden;
- (void)setLineNumberIncrement:(unsigned short)arg1;
- (unsigned short)lineNumberIncrement;
- (BOOL)isLineNumberStartOverridden;
- (void)setLineNumberStart:(short)arg1;
- (short)lineNumberStart;
- (BOOL)isBorderOffsetOverridden;
- (void)setBorderOffset:(int)arg1;
- (int)borderOffset;
- (BOOL)isBorderDisplayOverridden;
- (void)setBorderDisplay:(int)arg1;
- (int)borderDisplay;
- (BOOL)isBorderDepthOverridden;
- (void)setBorderDepth:(int)arg1;
- (int)borderDepth;
- (BOOL)isRightBorderOverridden;
- (id)mutableRightBorder;
- (id)rightBorder;
- (BOOL)isBottomBorderOverridden;
- (id)mutableBottomBorder;
- (id)bottomBorder;
- (BOOL)isLeftBorderOverridden;
- (id)mutableLeftBorder;
- (id)leftBorder;
- (BOOL)isTopBorderOverridden;
- (id)mutableTopBorder;
- (id)topBorder;
- (BOOL)isRtlGutterOverridden;
- (void)setRtlGutter:(BOOL)arg1;
- (BOOL)rtlGutter;
- (BOOL)isGutterMarginOverridden;
- (void)setGutterMargin:(long long)arg1;
- (long long)gutterMargin;
- (BOOL)isFooterMarginOverridden;
- (void)setFooterMargin:(long long)arg1;
- (long long)footerMargin;
- (BOOL)isHeaderMarginOverridden;
- (void)setHeaderMargin:(long long)arg1;
- (long long)headerMargin;
- (BOOL)isBottomMarginOverridden;
- (void)setBottomMargin:(long long)arg1;
- (long long)bottomMargin;
- (BOOL)isTopMarginOverridden;
- (void)setTopMargin:(long long)arg1;
- (long long)topMargin;
- (BOOL)isRightMarginOverridden;
- (void)setRightMargin:(long long)arg1;
- (long long)rightMargin;
- (BOOL)isLeftMarginOverridden;
- (void)setLeftMargin:(long long)arg1;
- (long long)leftMargin;
- (BOOL)isPageOrientationOverridden;
- (void)setPageOrientation:(int)arg1;
- (int)pageOrientation;
- (BOOL)isTextDirectionOverridden;
- (void)setTextDirection:(int)arg1;
- (int)textDirection;
- (BOOL)isPageScaleOverridden;
- (void)setPageScale:(unsigned int)arg1;
- (unsigned int)pageScale;
- (BOOL)isPageHeightOverridden;
- (void)setPageHeight:(long long)arg1;
- (long long)pageHeight;
- (BOOL)isPageWidthOverridden;
- (void)setPageWidth:(long long)arg1;
- (long long)pageWidth;
- (BOOL)isBreakTypeOverridden;
- (void)setBreakType:(int)arg1;
- (int)breakType;
- (id)firstPageFooter;
- (id)evenPageFooter;
- (id)oddPageFooter;
- (id)firstPageHeader;
- (id)evenPageHeader;
- (id)oddPageHeader;
- (id)text;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (id)initWithDocument:(id)arg1;

@end

