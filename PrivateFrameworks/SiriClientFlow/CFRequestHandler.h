//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CFServiceHelper;

@interface CFRequestHandler : NSObject
{
    CFServiceHelper *_serviceHelper;
}

@property(retain) CFServiceHelper *serviceHelper; // @synthesize serviceHelper=_serviceHelper;
- (void).cxx_destruct;
- (id)initClientLiteHelper;
- (id)initWithServiceHelper:(id)arg1;
- (BOOL)isTimeoutDisabled;
- (void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCommandCompletionWithResponse:(id)arg1 forCommand:(id)arg2 startOfExecution:(double)arg3;

@end

