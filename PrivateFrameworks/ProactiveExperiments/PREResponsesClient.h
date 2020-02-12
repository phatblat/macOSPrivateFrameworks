//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PREResponsesProtocol.h"

@class PREXPCClientHelpers;

@interface PREResponsesClient : NSObject <PREResponsesProtocol>
{
    PREXPCClientHelpers *_clientHelpers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(BOOL)arg3 isUsingQuickResponses:(BOOL)arg4 locale:(id)arg5 modelConfigPath:(id)arg6;
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 language:(id)arg6 modelFilePath:(id)arg7 modelConfigPath:(id)arg8 registerDisplayed:(BOOL)arg9 completion:(CDUnknownBlockType)arg10;
- (id)_remoteObjectProxy;
- (id)init;

@end

