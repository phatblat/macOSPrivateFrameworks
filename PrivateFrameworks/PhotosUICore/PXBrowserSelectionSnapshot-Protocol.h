//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol PXBrowserSelectionSnapshot <NSObject>
@property(readonly, nonatomic) NSArray *modelObjects;
@property(readonly, nonatomic) long long estimatedModelObjectsCount;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) long long assetCount;
@property(readonly, nonatomic) long long estimatedAssetCount;
- (long long)indexOfAssetReference:(id)arg1;
- (id)assetReferenceAtIndex:(long long)arg1;
- (id <PXDisplayAsset>)displayAssetAtIndex:(long long)arg1;
@end
