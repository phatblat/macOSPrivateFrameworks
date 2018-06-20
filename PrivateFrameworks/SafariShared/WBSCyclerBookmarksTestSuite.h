//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCyclerTestSuite.h"

@class NSArray, NSString, WBSCyclerBookmarkListRepresentation, WBSCyclerBookmarkOperationContext, WBSCyclerTestSuiteBookmarkAuxiliary;

@interface WBSCyclerBookmarksTestSuite : NSObject <WBSCyclerTestSuite>
{
    NSArray *_operations;
    NSArray *_relativeProbabilitiesForOperations;
    WBSCyclerBookmarkOperationContext *_operationContext;
    WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;
    unsigned long long _iterationCount;
    WBSCyclerBookmarkListRepresentation *_expectedTopLevelBookmarksFromPreviousIteration;
}

+ (BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2;
- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (void)_performFinalServerBookmarkValidationAfterClearingAndSyncingWithInitialBookmarks:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performCloudKitSecondaryMigrationAfterClearingBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_validateServerBookmarksAfterClearingLocallyWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_validateServerBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_validateServerBookmarksAfterInitialSyncWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_validateServerBookmarksWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)canHandleRequest:(id)arg1;
- (void)runWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
- (void)tearDown;
- (void)setUp;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

