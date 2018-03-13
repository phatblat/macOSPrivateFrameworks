//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface TCFontFamily : NSObject
{
    NSDictionary *_namesByLanguage;
    NSArray *_members;
}

@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) NSDictionary *namesByLanguage; // @synthesize namesByLanguage=_namesByLanguage;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)equivalentDictionary;
- (id)englishName;
- (BOOL)doesAnyNonBoldVariantExistForFont:(id)arg1;
- (id)variantByRemovingBoldFromFont:(id)arg1;
- (id)variantByAddingBoldToFont:(id)arg1;
- (unsigned long long)regularFontIndexInWeightVariants:(id)arg1;
- (unsigned long long)boldFontIndexInWeightVariants:(id)arg1;
- (id)weightVariantsOfFont:(id)arg1;
- (BOOL)allFamilyIsBold;
- (id)variantByTogglingItalicOfFont:(id)arg1;
- (BOOL)allFamilyIsItalic;
- (BOOL)traitsAreAdditive;
- (id)regularVariant:(BOOL)arg1;
- (id)memberForFullName:(id)arg1;
- (id)memberForPSName:(id)arg1;
- (id)bestMatchForStyling:(struct TCFontStyling)arg1;
- (void)dealloc;
- (id)initWithNamesByLanguage:(id)arg1 members:(id)arg2;

@end

