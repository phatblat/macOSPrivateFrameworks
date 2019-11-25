//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@protocol PLSearchableAssetCollection <NSObject>
@property(readonly, nonatomic) unsigned long long numberOfAssets;
@property(readonly, nonatomic) NSDate *searchableEndDate;
@property(readonly, nonatomic) NSDate *searchableStartDate;
@property(readonly, nonatomic) NSDate *keyAssetCreationDate;
@property(readonly, nonatomic) NSString *keyAssetUUID;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (NSArray *)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (unsigned long long)searchIndexCategory;
- (NSString *)searchIndexContents;
- (NSString *)uuid;
@end

