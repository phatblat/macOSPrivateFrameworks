//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSBundle, NSMutableDictionary, NSString;

@interface XSLocalizedStringsCache : NSObject <NSCoding>
{
    NSBundle *_localizationBundle;
    NSString *_localizationTable;
    NSMutableDictionary *_localizedStringsCache;
}

@property(retain) NSMutableDictionary *localizedStringsCache; // @synthesize localizedStringsCache=_localizedStringsCache;
@property(retain) NSString *localizationTable; // @synthesize localizationTable=_localizationTable;
@property(retain) NSBundle *localizationBundle; // @synthesize localizationBundle=_localizationBundle;
- (id)localizedStringForString:(id)arg1;
- (unsigned long long)localizeStrings:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizationBundle:(id)arg1 table:(id)arg2;

@end

