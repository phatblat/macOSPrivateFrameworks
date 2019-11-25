//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFQuantityFieldParameter.h>

@class NSArray, NSDictionary, NSString, NSUnit;

@interface WFUnitQuantityFieldParameter : WFQuantityFieldParameter
{
    BOOL _fallbackToAllSupportedUnits;
    NSArray *_possibleUnits;
    NSString *_unitType;
    NSUnit *_defaultUnit;
    NSDictionary *_unitSymbolMap;
}

@property(retain, nonatomic) NSDictionary *unitSymbolMap; // @synthesize unitSymbolMap=_unitSymbolMap;
@property(nonatomic) BOOL fallbackToAllSupportedUnits; // @synthesize fallbackToAllSupportedUnits=_fallbackToAllSupportedUnits;
@property(retain, nonatomic) NSUnit *defaultUnit; // @synthesize defaultUnit=_defaultUnit;
@property(copy, nonatomic) NSString *unitType; // @synthesize unitType=_unitType;
- (void)setPossibleUnits:(id)arg1;
- (id)possibleUnits;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (BOOL)parameterStateIsValid:(id)arg1;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (void)updatePossibleUnits;
- (id)availableUnitForStringValue:(id)arg1;
- (id)initWithDefinition:(id)arg1;

@end

