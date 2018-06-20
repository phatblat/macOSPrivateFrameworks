//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, RKResponseCollection;

@interface RKMessageResponseManager : NSObject
{
    RKResponseCollection *_collection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_preferredLanguages;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain) RKResponseCollection *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (BOOL)isQuestion:(id)arg1 withLanguage:(id)arg2;
- (void)flushDynamicData;
- (void)resetRegisteredResponses;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withEffectiveDate:(id)arg4 withLanguage:(id)arg5;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withLanguage:(id)arg4;
- (id)categoryForMessage:(id)arg1 langID:(id)arg2;
- (id)responsesForMessageWithLanguageDetectionImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id *)arg5 inputModes:(id)arg6 options:(unsigned long long)arg7;
- (id)responsesForMessageImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id)arg5 options:(unsigned long long)arg6;
- (id)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id *)arg5 options:(unsigned long long)arg6;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 inputModes:(id)arg5 options:(unsigned long long)arg6;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (void)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id *)arg5 options:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2;
- (id)initWithAssetPlistURL:(id)arg1;
- (id)initWithDynamicDataURL:(id)arg1 withBundleURL:(id)arg2;
- (id)initWithDynamicDataURL:(id)arg1;
- (id)init;

@end

