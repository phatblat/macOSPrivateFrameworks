//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import "MTLJSONSerializing.h"
#import "WFRemoteQuarantineRequest.h"

@class NSDictionary, NSString;

@interface WFBaseRemoteQuarantineRequest : MTLModel <MTLJSONSerializing, WFRemoteQuarantineRequest>
{
    NSString *_appVersion;
    NSString *_osVersion;
    NSString *_userLocale;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSString *userLocale; // @synthesize userLocale=_userLocale;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (void).cxx_destruct;
- (id)javaScriptCoreRepresentationWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *defaultLocalizedDeniedErrorMessage;
@property(readonly, nonatomic) NSString *defaultLocalizedDeniedErrorTitle;
@property(readonly, nonatomic) NSString *defaultLocalizedPromptMessage;
@property(readonly, nonatomic) NSString *defaultLocalizedPromptTitle;
@property(readonly, nonatomic) NSString *policyFunctionName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

