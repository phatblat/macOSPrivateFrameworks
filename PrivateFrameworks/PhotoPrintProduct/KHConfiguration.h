//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

#import "KHJSONGeneratorProtocol.h"

@class NSMutableDictionary, NSString;

@interface KHConfiguration : KHModel <KHJSONGeneratorProtocol>
{
    long long _categoryId;
    long long _productId;
    NSString *_name;
    double _backingScaleFactor;
    NSMutableDictionary *_treatments;
    NSMutableDictionary *_assetCache;
}

+ (id)configurationIdsForCategory:(long long)arg1 fromDatabase:(id)arg2;
+ (id)configurationForKey:(long long)arg1 fromDatabase:(id)arg2;
+ (id)modifyModelFromJSON:(id)arg1 inDatabase:(id)arg2 bundlePath:(id)arg3;
+ (id)generateModelFromJSON:(id)arg1 inDatabase:(id)arg2 bundlePath:(id)arg3;
@property(nonatomic) double backingScaleFactor; // @synthesize backingScaleFactor=_backingScaleFactor;
- (BOOL)isSimilarToModel:(id)arg1 skippingFields:(id)arg2 differences:(id *)arg3;
- (Class)configurationTreatmentClass;
- (id)thumbnailWithOffset:(struct CGPoint)arg1;
- (id)thumbnailAsset;
- (id)uniqueName;
- (id)supportedTreatmentsForContentEntityClass:(id)arg1 withCaption:(BOOL)arg2;
- (id)supportedTreatmentsForFrame:(id)arg1 withCaption:(BOOL)arg2;
- (id)supportedTreatmentsForLayout:(id)arg1 withTheme:(id)arg2;
- (id)configurationTreatmentsForType:(unsigned long long)arg1;
- (void)remove;
- (BOOL)isPaletteGenerated;
- (id)supportedTextColors;
- (id)defaultTextStyleForFrame:(id)arg1;
- (void)setName:(id)arg1;
- (void)cacheName:(id)arg1;
- (id)name;
- (void)setProductId:(long long)arg1;
- (void)cacheProductId:(long long)arg1;
- (long long)productId;
- (void)setCategoryId:(long long)arg1;
- (void)cacheCategoryId:(long long)arg1;
- (long long)categoryId;
- (void)dealloc;
- (id)JSONRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
