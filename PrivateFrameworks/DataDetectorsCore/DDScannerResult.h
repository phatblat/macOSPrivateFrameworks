//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface DDScannerResult : NSObject <NSSecureCoding>
{
    // Error parsing type: ^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}, name: _coreResult
    NSArray *_subResultsCache;
}

+ (id)scannerResultFromXML:(id)arg1 stringToScan:(id)arg2;
+ (id)scannerResultFromXML:(id)arg1;
+ (id)verboseXMLDescriptionFromElements:(id)arg1 stringToScan:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)resultsFromCoreResults:(struct __CFArray *)arg1;
+     // Error parsing type: @24@0:8^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}16, name: resultFromCoreResult:
- (void)offsetRangeBy:(long long)arg1;
- (id)XMLDescription;
- (id)detailedDescription;
- (id)verboseElement;
- (id)elementWithQuery:(struct __DDScanQuery *)arg1 include:(int)arg2;
- (void)_addText:(id)arg1 currentPos:(struct __DDQueryOffset)arg2 newPos:(struct __DDQueryOffset)arg3 offset:(struct __DDQueryOffset)arg4 query:(struct __DDScanQuery *)arg5;
- (id)element;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getStreet:(id *)arg1 city:(id *)arg2 state:(id *)arg3 zip:(id *)arg4 country:(id *)arg5;
- (BOOL)getIMScreenNameValue:(id *)arg1 type:(id *)arg2;
- (BOOL)getMailValue:(id *)arg1 label:(id *)arg2;
- (BOOL)getPhoneValue:(id *)arg1 label:(id *)arg2;
- (BOOL)extractStartDate:(id *)arg1 startTimezone:(id *)arg2 endDate:(id *)arg3 endTimezone:(id *)arg4 allDayRef:(char *)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7;
- (id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id *)arg3 allDayRef:(char *)arg4;
- (double)getDuration;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setSubResults:(id)arg1;
- (id)subResults;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)matchedString;
- (id)contextualData;
- (id)location;
- (id)rawValue;
- (id)value;
- (void)setType:(id)arg1;
- (id)type;
- (long long)score;
- (CDStruct_912cb5d2)cfRange;
@property struct _NSRange range;
-     // Error parsing type: ^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}16@0:8, name: coreResult
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
-     // Error parsing type: @24@0:8^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}16, name: initWithCoreResult:
- (id)init;

@end

