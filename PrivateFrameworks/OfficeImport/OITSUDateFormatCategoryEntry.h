//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface OITSUDateFormatCategoryEntry : NSObject
{
    unsigned short _separator;
    NSMutableArray *_formatters;
    NSMutableSet *_formatStrings;
}

- (void).cxx_destruct;
- (id)newDateFromString:(id)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(id *)arg3 perfect:(char *)arg4;
- (void)addFormat:(id)arg1 locale:(id)arg2;
- (id)formatStrings;
- (unsigned short)separator;
- (id)initWithSeparator:(unsigned short)arg1;

@end

