//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INDateComponentsRange, NSArray, NSString;

@protocol INSaveHealthSampleIntentResponseExport <NSObject, JSExport>
@property(copy) NSString *punchoutUrl;
@property(copy) NSArray *valuesUserProvidedUnits;
@property(copy) NSString *userProvidedUnit;
@property(copy) NSArray *valuesDefaultUnits;
@property(copy) NSString *defaultUnit;
@property(copy) INDateComponentsRange *recordDate;
@property(copy) NSArray *sampleUuids;
@property(readonly) long long code;
@end
