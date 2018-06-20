//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperation.h>

@class TILanguageModelAdaptationContext, TIMecabraWrapper;

@interface TIWordSearchOperationSetLanguageModelAdaptationContext : TIWordSearchOperation
{
    TIMecabraWrapper *_mecabraWrapper;
    TILanguageModelAdaptationContext *_adaptationContext;
}

@property(copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext; // @synthesize adaptationContext=_adaptationContext;
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
- (void).cxx_destruct;
- (void)perform;
- (void)cancel;
- (id)initWithWordSearch:(id)arg1 adaptationContext:(id)arg2;

@end

