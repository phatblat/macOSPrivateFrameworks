//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSMutableArray, NSString, OITSUCustomFormatData;

@interface OITSUCustomFormat : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_formatNameStem;
    NSString *_formatNameTag;
    NSString *_currencyCode;
    BOOL _currencyCodeComputed;
    int _formatType;
    OITSUCustomFormatData *_defaultFormatData;
    NSString *_formatName;
    NSMutableArray *_conditionList;
}

@property(readonly, nonatomic) NSMutableArray *conditionList; // @synthesize conditionList=_conditionList;
@property(readonly, nonatomic) NSString *formatName; // @synthesize formatName=_formatName;
@property(readonly, nonatomic) OITSUCustomFormatData *defaultFormatData; // @synthesize defaultFormatData=_defaultFormatData;
@property(readonly, nonatomic) int formatType; // @synthesize formatType=_formatType;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *currencyCode;
- (id)conditionalFormatDataForKey:(unsigned long long)arg1;
- (id)conditionalFormatAtIndex:(unsigned long long)arg1;
- (id)conditionalFormatDataForValue:(double)arg1 outKey:(unsigned long long *)arg2;
- (id)conditionalFormatDataForValue:(double)arg1;
- (BOOL)isEqualWithStemNameMatching:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)p_isEqual:(id)arg1 matchingFullName:(BOOL)arg2;
@property(readonly, nonatomic) NSString *formatNameTag;
@property(readonly, nonatomic) NSString *formatNameStem;
- (void)p_makeFormatNameStemAndTag;
- (unsigned long long)hash;
- (void)p_addConditionOfType:(int)arg1 value:(double)arg2 data:(id)arg3;
@property(readonly, nonatomic) unsigned long long conditionCount;
- (id)customFormatWithNewName:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3 conditionList:(id)arg4;

@end
