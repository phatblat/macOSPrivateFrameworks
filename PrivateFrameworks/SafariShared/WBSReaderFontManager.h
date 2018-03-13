//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WBSReaderFontManager : NSObject
{
    NSArray *_validatedFonts;
    NSString *_languageTag;
}

@property(readonly, copy) NSString *languageTag; // @synthesize languageTag=_languageTag;
- (void).cxx_destruct;
- (void)updateLanguageTag:(id)arg1;
- (id)fontWithFontFamilyName:(id)arg1;
- (id)defaultFontForLanguageTag:(id)arg1;
@property(readonly) NSArray *possibleFonts;
@property(readonly) NSArray *fonts;

@end

