//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFNumberFieldParameter.h>

@class NSArray;

@interface WFQuantityFieldParameter : WFNumberFieldParameter
{
    NSArray *_possibleUnits;
}

+ (BOOL)defaultAllowsNegativeNumbers;
+ (BOOL)defaultAllowsDecimalNumbers;
@property(copy, nonatomic) NSArray *possibleUnits; // @synthesize possibleUnits=_possibleUnits;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

