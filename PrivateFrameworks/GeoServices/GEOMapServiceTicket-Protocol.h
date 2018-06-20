//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOApplicationAuditToken, GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEORPCorrectedSearch, GEORPPlaceInfo, GEORelatedSearchSuggestion, GEOResolvedItem, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@protocol GEOMapServiceTicket <NSObject>
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property(nonatomic) unsigned long long cachePolicy;
@property(readonly, nonatomic) BOOL showDymSuggestionCloseButton;
@property(readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property(readonly, nonatomic) NSArray *retainedSearchMetadata;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent;
@property(readonly, nonatomic) GEOResolvedItem *clientResolvedResult;
@property(readonly, nonatomic) BOOL shouldEnableRedoSearch;
@property(readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property(readonly, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) int searchResultType;
@property(readonly, nonatomic) NSString *resultSectionHeader;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property(readonly, nonatomic) NSArray *browseCategories;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property(readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet;
@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)applyToPlaceInfo:(GEORPPlaceInfo *)arg1;
- (void)applyToCorrectedSearch:(GEORPCorrectedSearch *)arg1;
- (void)cancel;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 timeout:(long long)arg3 networkActivity:(void (^)(BOOL))arg4 queue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(BOOL))arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 timeout:(long long)arg3 networkActivity:(void (^)(BOOL))arg4 queue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(BOOL))arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 timeout:(long long)arg3 networkActivity:(void (^)(BOOL))arg4;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 timeout:(long long)arg3 networkActivity:(void (^)(BOOL))arg4;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(BOOL))arg3;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(BOOL))arg3;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
@end

