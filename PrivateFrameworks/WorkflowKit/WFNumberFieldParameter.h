//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@interface WFNumberFieldParameter : WFParameter
{
    BOOL _allowsDecimalNumbers;
    BOOL _allowsNegativeNumbers;
    long long _textAlignment;
}

+ (BOOL)defaultAllowsNegativeNumbers;
+ (BOOL)defaultAllowsDecimalNumbers;
@property(readonly, nonatomic) BOOL allowsNegativeNumbers; // @synthesize allowsNegativeNumbers=_allowsNegativeNumbers;
@property(readonly, nonatomic) BOOL allowsDecimalNumbers; // @synthesize allowsDecimalNumbers=_allowsDecimalNumbers;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
- (BOOL)shouldAlignLabels;
- (id)defaultSupportedVariableTypes;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end
