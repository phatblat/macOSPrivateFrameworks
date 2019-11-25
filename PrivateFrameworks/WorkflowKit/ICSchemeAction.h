//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/ICAction.h>

@class ICScheme, NSString;

@interface ICSchemeAction : ICAction
{
    ICScheme *_scheme;
}

@property(readonly, nonatomic) __weak ICScheme *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)defersCompletionUntilReturn;
@property(readonly, nonatomic, getter=isCallbackAction) BOOL callbackAction;
- (id)formatKeys;
@property(readonly, nonatomic) NSString *formatString;
- (id)initWithDefinition:(id)arg1 scheme:(id)arg2;

@end

