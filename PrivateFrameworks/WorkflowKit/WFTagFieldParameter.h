//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFTagFieldParameter : WFParameter
{
    BOOL _allowsTextEntry;
    long long _keyboardType;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _textAlignment;
    NSArray *_suggestedTags;
}

@property(readonly, nonatomic) NSArray *suggestedTags; // @synthesize suggestedTags=_suggestedTags;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(readonly, nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) BOOL allowsTextEntry; // @synthesize allowsTextEntry=_allowsTextEntry;
- (void).cxx_destruct;
- (BOOL)shouldAlignLabels;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

