//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFContactFieldParameter : WFParameter
{
    BOOL _allowsTextEntry;
    long long _textAlignment;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    NSArray *_supportedContactProperties;
}

@property(readonly, nonatomic) NSArray *supportedContactProperties; // @synthesize supportedContactProperties=_supportedContactProperties;
@property(readonly, nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(readonly, nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) BOOL allowsTextEntry; // @synthesize allowsTextEntry=_allowsTextEntry;
- (void).cxx_destruct;
- (BOOL)shouldAlignLabels;
@property(readonly, nonatomic) long long keyboardType;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (Class)multipleStateClass;
- (Class)stateClass;

@end
