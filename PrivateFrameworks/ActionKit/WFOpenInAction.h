//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAction.h"

@class NSArray;

@interface WFOpenInAction : WFAction
{
    NSArray *_contentClasses;
}

@property(retain, nonatomic) NSArray *contentClasses; // @synthesize contentClasses=_contentClasses;
- (void).cxx_destruct;
- (id)selectedApp;
- (id)outputContentClasses;
- (id)inputContentClasses;
- (void)updateContentClasses;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)openContentInSelectedApp:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

