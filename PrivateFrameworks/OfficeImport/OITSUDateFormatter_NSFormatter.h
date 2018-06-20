//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@class NSString, OITSULocale;

@interface OITSUDateFormatter_NSFormatter : NSFormatter
{
    NSString *_preferredFormat;
    BOOL isDateOnly;
    BOOL isTimeOnly;
    OITSULocale *_locale;
}

@property(retain, nonatomic) OITSULocale *locale; // @synthesize locale=_locale;
@property(nonatomic) BOOL isTimeOnly; // @synthesize isTimeOnly;
@property(nonatomic) BOOL isDateOnly; // @synthesize isDateOnly;
@property(retain, nonatomic) NSString *preferredFormat; // @synthesize preferredFormat=_preferredFormat;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)init;

@end

