//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class WDCharacterProperties, WDDocument, WDParagraphPropertiesValues;

@interface WDParagraphProperties : NSObject <NSCopying>
{
    WDDocument *mDocument;
    WDCharacterProperties *mCharacterProperties;
    BOOL mCharacterPropertiesOverridden;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    WDParagraphPropertiesValues *mOriginalProperties;
    WDParagraphPropertiesValues *mTrackedProperties;
}

- (void).cxx_destruct;
- (void)copyPropertiesInto:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isContextualSpacingOverridden;
- (void)setContextualSpacing:(BOOL)arg1;
- (BOOL)contextualSpacing;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isFormattingChangedOverridden;
- (void)setFormattingChanged:(int)arg1;
- (int)formattingChanged;
- (void)removeTabStopDeletedPosition:(short)arg1;
- (void)addTabStopDeletedPosition:(short)arg1;
- (short)tabStopDeletedPositionAt:(unsigned long long)arg1;
- (void)setTabStopDeletedPositionCount:(unsigned long long)arg1;
- (unsigned long long)tabStopDeletedPositionCount;
- (void)removeTabStopAddedWithPosition:(short)arg1;
- (void)addTabStopAdded:(CDStruct_bd9d81e1 *)arg1;
- (CDStruct_bd9d81e1 *)tabStopAddedAt:(unsigned long long)arg1;
- (BOOL)hasTabStopDeletedAtPosition:(short)arg1;
- (BOOL)hasTabStopAddedAtPosition:(short)arg1;
- (void)setTabStopAddedCount:(unsigned long long)arg1;
- (unsigned long long)tabStopAddedCount;
- (BOOL)isKinsokuOffOverridden;
- (void)setKinsokuOff:(BOOL)arg1;
- (BOOL)kinsokuOff;
- (BOOL)isBiDiOverridden;
- (void)setBiDi:(BOOL)arg1;
- (BOOL)biDi;
- (BOOL)isWidowControlOverridden;
- (void)setWidowControl:(BOOL)arg1;
- (BOOL)widowControl;
- (BOOL)isSuppressLineNumbersOverridden;
- (void)setSuppressLineNumbers:(BOOL)arg1;
- (BOOL)suppressLineNumbers;
- (BOOL)isSuppressAutoHyphensOverridden;
- (void)setSuppressAutoHyphens:(BOOL)arg1;
- (BOOL)suppressAutoHyphens;
- (BOOL)isKeepLinesTogetherOverridden;
- (void)setKeepLinesTogether:(BOOL)arg1;
- (BOOL)keepLinesTogether;
- (BOOL)isKeepNextParagraphTogetherOverridden;
- (void)setKeepNextParagraphTogether:(BOOL)arg1;
- (BOOL)keepNextParagraphTogether;
- (BOOL)isOutlineLevelOverridden;
- (void)setOutlineLevel:(unsigned short)arg1;
- (unsigned short)outlineLevel;
- (BOOL)isPhysicalJustificationOverridden;
- (void)setPhysicalJustification:(int)arg1;
- (int)physicalJustification;
- (BOOL)isJustificationOverridden;
- (void)setJustification:(int)arg1;
- (int)justification;
- (BOOL)isFirstLineIndentCharsOverridden;
- (void)setFirstLineIndentChars:(short)arg1;
- (short)firstLineIndentChars;
- (BOOL)isRightIndentCharsOverridden;
- (void)setRightIndentChars:(short)arg1;
- (short)rightIndentChars;
- (BOOL)isLeftIndentCharsOverridden;
- (void)setLeftIndentChars:(short)arg1;
- (short)leftIndentChars;
- (void)clearFirstLineIndent;
- (BOOL)isFirstLineIndentOverridden;
- (void)setFirstLineIndent:(short)arg1;
- (short)firstLineIndent;
- (void)clearRightIndent;
- (BOOL)isRightIndentOverridden;
- (void)setRightIndent:(short)arg1;
- (short)rightIndent;
- (void)clearFollowingIndent;
- (BOOL)isFollowingIndentOverridden;
- (void)setFollowingIndent:(short)arg1;
- (short)followingIndent;
- (void)clearLeadingIndent;
- (BOOL)isLeadingIndentOverridden;
- (void)setLeadingIndent:(short)arg1;
- (short)leadingIndent;
- (void)clearLeftIndent;
- (BOOL)isLeftIndentOverridden;
- (void)setLeftIndent:(short)arg1;
- (short)leftIndent;
- (BOOL)isLineSpacingRuleOverridden;
- (void)setLineSpacingRule:(int)arg1;
- (int)lineSpacingRule;
- (BOOL)isLineSpacingOverridden;
- (void)setLineSpacing:(short)arg1;
- (short)lineSpacing;
- (BOOL)isSpaceAfterAutoOverridden;
- (void)setSpaceAfterAuto:(BOOL)arg1;
- (BOOL)spaceAfterAuto;
- (BOOL)isSpaceAfterOverridden;
- (void)setSpaceAfter:(unsigned short)arg1;
- (unsigned short)spaceAfter;
- (BOOL)isSpaceBeforeAutoOverridden;
- (void)setSpaceBeforeAuto:(BOOL)arg1;
- (BOOL)spaceBeforeAuto;
- (BOOL)isSpaceBeforeOverridden;
- (void)setSpaceBefore:(unsigned short)arg1;
- (unsigned short)spaceBefore;
- (BOOL)isShadingOverridden;
- (id)mutableShading;
- (id)shading;
- (BOOL)isBarBorderOverridden;
- (id)mutableBarBorder;
- (id)barBorder;
- (BOOL)isBetweenBorderOverridden;
- (id)mutableBetweenBorder;
- (id)betweenBorder;
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
- (BOOL)isAnchorLockOverridden;
- (void)setAnchorLock:(BOOL)arg1;
- (BOOL)anchorLock;
- (BOOL)isWrapCodeOverridden;
- (void)setWrapCode:(BOOL)arg1;
- (BOOL)wrapCode;
- (BOOL)isVerticalPositionOverridden;
- (void)setVerticalPosition:(long long)arg1;
- (long long)verticalPosition;
- (BOOL)isHorizontalPositionOverridden;
- (void)setHorizontalPosition:(long long)arg1;
- (long long)horizontalPosition;
- (BOOL)isVerticalAnchorOverridden;
- (void)setVerticalAnchor:(int)arg1;
- (int)verticalAnchor;
- (BOOL)isHorizontalAnchorOverridden;
- (void)setHorizontalAnchor:(int)arg1;
- (int)horizontalAnchor;
- (BOOL)isWrapOverridden;
- (void)setWrap:(BOOL)arg1;
- (BOOL)wrap;
- (BOOL)isHorizontalSpaceOverridden;
- (void)setHorizontalSpace:(long long)arg1;
- (long long)horizontalSpace;
- (BOOL)isVerticalSpaceOverridden;
- (void)setVerticalSpace:(long long)arg1;
- (long long)verticalSpace;
- (BOOL)isHeightRuleOverridden;
- (void)setHeightRule:(int)arg1;
- (int)heightRule;
- (BOOL)isHeightOverridden;
- (void)setHeight:(long long)arg1;
- (long long)height;
- (BOOL)isWidthOverridden;
- (void)setWidth:(long long)arg1;
- (long long)width;
- (BOOL)isDropCapOverridden;
- (void)setDropCap:(CDStruct_8835774c)arg1;
- (CDStruct_8835774c)dropCap;
- (BOOL)isListIndexOverridden;
- (void)setListIndex:(unsigned long long)arg1;
- (unsigned long long)listIndex;
- (BOOL)isListLevelOverridden;
- (void)setListLevel:(unsigned char)arg1;
- (unsigned char)listLevel;
- (BOOL)isPageBreakBeforeOverridden;
- (void)setPageBreakBefore:(BOOL)arg1;
- (BOOL)isPageBreakBefore;
- (void)clearBaseStyle;
- (BOOL)isBaseStyleOverridden;
- (void)setBaseStyle:(id)arg1;
- (id)baseStyle;
- (void)negateFormattingChangesWithDefaults:(id)arg1;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (BOOL)isAnythingOverridden;
- (void)clearChararacterProperties;
- (BOOL)isCharacterPropertiesOverridden;
- (void)setCharacterProperties:(id)arg1;
- (id)mutableCharacterProperties;
- (id)characterProperties;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (id)description;
- (BOOL)isAnythingOverriddenIn:(id)arg1;

@end

