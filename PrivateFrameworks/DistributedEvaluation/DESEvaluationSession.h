//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "PARSessionDelegate.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLSession, PARSession;

@interface DESEvaluationSession : NSObject <PARSessionDelegate, NSURLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_recordType;
    NSString *_localeIdentifier;
    NSURL *_baseURL;
    NSURL *_postbackBaseURL;
    NSDictionary *_records;
    PARSession *_parSession;
    id <DESRecipeEvaluation> _evaluator;
    CDUnknownBlockType _dataFetchBlock;
    BOOL _skipPolicy;
    BOOL _enableOriginReturnRoute;
    BOOL _enableParsecReturnRoute;
    NSURLSession *_session;
}

+ (void)initialize;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)session:(id)arg1 didDeleteResource:(id)arg2;
- (void)session:(id)arg1 didDownloadResource:(id)arg2;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)invalidate;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendRecipeResponseForRecipeId:(id)arg1 result:(id)arg2 parametersUsed:(id)arg3 duration:(double)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)postRecipeResponseJSONObject:(id)arg1 recipeId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_downloadAttachments:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleRecipeResponse:(id)arg1 recipeId:(id)arg2 recordUUID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchRecipe:(id)arg1 recordUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_attemptRecipeMatchWithRecipes:(id)arg1 keepGoing:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleTelemetry:(id)arg1;
- (void)_fetchPolicyWithCompletion:(CDUnknownBlockType)arg1;
- (void)_runJSONPOSTRequest:(id)arg1 URL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runJSONPOSTRequest:(id)arg1 path:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runJSONGETRequestWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_parsecReturnRouteEnabled;
- (BOOL)_originReturnRouteEnabled;
- (id)initWithBaseURL:(id)arg1 records:(id)arg2 recordType:(id)arg3 localeIdentifier:(id)arg4 deviceIdentifier:(id)arg5 evaluator:(id)arg6 protocolClass:(Class)arg7 dataFetchBlock:(CDUnknownBlockType)arg8;
- (id)initWithBaseURL:(id)arg1 records:(id)arg2 recordType:(id)arg3 localeIdentifier:(id)arg4 evaluator:(id)arg5 protocolClass:(Class)arg6 dataFetchBlock:(CDUnknownBlockType)arg7;
- (id)initWithBaseURL:(id)arg1 records:(id)arg2 recordType:(id)arg3 localeIdentifier:(id)arg4 evaluator:(id)arg5 dataFetchBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

