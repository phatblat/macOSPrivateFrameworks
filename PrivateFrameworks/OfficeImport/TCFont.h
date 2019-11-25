//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString, TCFontFamily;

__attribute__((visibility("hidden")))
@interface TCFont : NSObject <NSCopying>
{
    NSDictionary *_namesByLanguage;
    NSString *_psName;
    TCFontFamily *_family;
    struct TCFontStyling _styling;
}

+ (id)fontWithFont:(id)arg1;
@property(nonatomic) TCFontFamily *family; // @synthesize family=_family;
@property(readonly, nonatomic) struct TCFontStyling styling; // @synthesize styling=_styling;
@property(readonly, nonatomic) NSString *psName; // @synthesize psName=_psName;
@property(readonly, nonatomic) NSDictionary *namesByLanguage; // @synthesize namesByLanguage=_namesByLanguage;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)localizedFontName;
- (int)preferredLanguage;
- (id)description;
- (id)englishName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)equivalentDictionary;
- (id)initWithNamesByLanguage:(id)arg1 psName:(id)arg2 styling:(struct TCFontStyling)arg3;

@end

