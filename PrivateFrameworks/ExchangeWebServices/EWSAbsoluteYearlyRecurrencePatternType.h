//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSRecurrencePatternBaseType.h>

#import "XSDefinitionProvider.h"

@class NSString;

@interface EWSAbsoluteYearlyRecurrencePatternType : EWSRecurrencePatternBaseType <XSDefinitionProvider>
{
    long long _DayOfMonth;
    long long _Month;
}

+ (id)definition;
@property(nonatomic) long long Month; // @synthesize Month=_Month;
@property(nonatomic) long long DayOfMonth; // @synthesize DayOfMonth=_DayOfMonth;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

