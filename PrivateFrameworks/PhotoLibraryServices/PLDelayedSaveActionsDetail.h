//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSSet;

@interface PLDelayedSaveActionsDetail : NSObject <NSSecureCoding>
{
    NSArray *_cloudFeedAlbumUpdates;
    NSArray *_cloudFeedAssetInserts;
    NSArray *_cloudFeedAssetUpdates;
    NSArray *_cloudFeedCommentInserts;
    NSArray *_cloudFeedInvitationRecordUpdates;
    NSArray *_cloudFeedDeletionEntries;
    NSArray *_momentInsertsAndUpdates;
    NSDictionary *_momentDeletes;
    NSArray *_updatedAssetIDsForHighlights;
    NSArray *_updatedMomentIDsForHighlights;
    NSArray *_dupeAnalysisNormalInserts;
    NSArray *_dupeAnalysisCloudInserts;
    NSArray *_assetsForFilesystemPersistency;
    NSDictionary *_searchIndexUpdates;
    NSSet *_albumCountsAndDateRangeUpdates;
    NSDictionary *_assetsForAnalysis;
    NSSet *_assetsForDuetDelete;
}

+ (id)_decodeMomentDeletes:(id)arg1 urlToObjectID:(CDUnknownBlockType)arg2;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSSet *assetsForDuetDelete; // @synthesize assetsForDuetDelete=_assetsForDuetDelete;
@property(copy, nonatomic) NSDictionary *assetsForAnalysis; // @synthesize assetsForAnalysis=_assetsForAnalysis;
@property(copy, nonatomic) NSSet *albumCountsAndDateRangeUpdates; // @synthesize albumCountsAndDateRangeUpdates=_albumCountsAndDateRangeUpdates;
@property(copy, nonatomic) NSDictionary *searchIndexUpdates; // @synthesize searchIndexUpdates=_searchIndexUpdates;
@property(copy, nonatomic) NSArray *assetsForFilesystemPersistency; // @synthesize assetsForFilesystemPersistency=_assetsForFilesystemPersistency;
@property(copy, nonatomic) NSArray *dupeAnalysisCloudInserts; // @synthesize dupeAnalysisCloudInserts=_dupeAnalysisCloudInserts;
@property(copy, nonatomic) NSArray *dupeAnalysisNormalInserts; // @synthesize dupeAnalysisNormalInserts=_dupeAnalysisNormalInserts;
@property(copy, nonatomic) NSArray *updatedMomentIDsForHighlights; // @synthesize updatedMomentIDsForHighlights=_updatedMomentIDsForHighlights;
@property(copy, nonatomic) NSArray *updatedAssetIDsForHighlights; // @synthesize updatedAssetIDsForHighlights=_updatedAssetIDsForHighlights;
@property(copy, nonatomic) NSDictionary *momentDeletes; // @synthesize momentDeletes=_momentDeletes;
@property(copy, nonatomic) NSArray *momentInsertsAndUpdates; // @synthesize momentInsertsAndUpdates=_momentInsertsAndUpdates;
@property(copy, nonatomic) NSArray *cloudFeedDeletionEntries; // @synthesize cloudFeedDeletionEntries=_cloudFeedDeletionEntries;
@property(copy, nonatomic) NSArray *cloudFeedInvitationRecordUpdates; // @synthesize cloudFeedInvitationRecordUpdates=_cloudFeedInvitationRecordUpdates;
@property(copy, nonatomic) NSArray *cloudFeedCommentInserts; // @synthesize cloudFeedCommentInserts=_cloudFeedCommentInserts;
@property(copy, nonatomic) NSArray *cloudFeedAssetUpdates; // @synthesize cloudFeedAssetUpdates=_cloudFeedAssetUpdates;
@property(copy, nonatomic) NSArray *cloudFeedAssetInserts; // @synthesize cloudFeedAssetInserts=_cloudFeedAssetInserts;
@property(copy, nonatomic) NSArray *cloudFeedAlbumUpdates; // @synthesize cloudFeedAlbumUpdates=_cloudFeedAlbumUpdates;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)_encodableMomentDeletes;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL shouldHandleMoments;
- (id)init;

@end

