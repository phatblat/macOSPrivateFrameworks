//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL, NSUUID;

@protocol DESService <NSObject>
- (void)runLiveEvaluationForAllBundlesWithBaseURL:(NSURL *)arg1 localeIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)runLiveEvaluationForBundleId:(NSString *)arg1 baseURL:(NSURL *)arg2 localeIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)runEvaluationForBundleId:(NSString *)arg1 recipe:(NSDictionary *)arg2 recordUUID:(NSUUID *)arg3 attachments:(NSArray *)arg4 completion:(void (^)(NSDictionary *, NSError *))arg5;
- (void)runEvaluationForBundleId:(NSString *)arg1 recipe:(NSDictionary *)arg2 recordInfo:(NSDictionary *)arg3 recordData:(NSData *)arg4 attachments:(NSArray *)arg5 completion:(void (^)(NSDictionary *, NSError *))arg6;
- (void)deleteSavedRecordForBundleId:(NSString *)arg1 identfier:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteAllSavedRecordsForBundleId:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchSavedRecordInfoForBundleId:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)saveRecordForBundleId:(NSString *)arg1 data:(NSData *)arg2 recordInfo:(NSDictionary *)arg3 completion:(void (^)(NSUUID *, NSError *))arg4;
- (void)fetchInstalledBundlesIdsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

