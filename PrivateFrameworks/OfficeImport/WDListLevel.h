//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, WDCharacterProperties, WDDocument, WDOfficeArt, WDParagraphProperties;

@interface WDListLevel : NSObject
{
    WDDocument *mDocument;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    long long mStartNumber;
    int mNumberFormat;
    BOOL mRestartNumbering;
    long long mRestartLevel;
    BOOL mLegal;
    int mSuffix;
    NSMutableString *mText;
    BOOL mLegacy;
    long long mLegacySpace;
    long long mLegacyIndent;
    int mJustification;
}

- (void).cxx_destruct;
- (id)description;
- (id)characterProperties;
- (id)paragraphProperties;
- (BOOL)justificationOverridden;
- (void)setJustification:(int)arg1;
- (int)justification;
- (void)setLegacyIndent:(long long)arg1;
- (long long)legacyIndent;
- (void)setLegacySpace:(long long)arg1;
- (long long)legacySpace;
- (void)setLegacy:(BOOL)arg1;
- (BOOL)legacy;
- (BOOL)textOverridden;
- (void)setText:(id)arg1;
- (id)text;
- (BOOL)suffixOverridden;
- (void)setSuffix:(int)arg1;
- (int)suffix;
- (BOOL)legalOverridden;
- (void)setLegal:(BOOL)arg1;
- (BOOL)legal;
- (BOOL)restartLevelOverridden;
- (void)setRestartLevel:(long long)arg1;
- (long long)restartLevel;
- (BOOL)restartNumberingOverridden;
- (void)setRestartNumbering:(BOOL)arg1;
- (BOOL)restartNumbering;
- (void)setImage:(id)arg1;
- (id)image;
- (BOOL)imageBulletOverridden;
- (BOOL)imageBullet;
- (BOOL)numberFormatOverridden;
- (void)setNumberFormat:(int)arg1;
- (int)numberFormat;
- (BOOL)startNumberOverridden;
- (void)setStartNumber:(long long)arg1;
- (long long)startNumber;
- (id)initWithDocument:(id)arg1;

@end

