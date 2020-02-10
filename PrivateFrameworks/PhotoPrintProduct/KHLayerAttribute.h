//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHAttribute.h>

#import "KHJSONGeneratorProtocol.h"

@class NSString;

@interface KHLayerAttribute : KHAttribute <KHJSONGeneratorProtocol>
{
    long long _layerId;
    NSString *_category;
}

+ (void)preloadAttributesForLayers:(id)arg1;
+ (id)generateModelFromJSON:(id)arg1 inDatabase:(id)arg2 bundlePath:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)setCategory:(id)arg1;
- (void)cacheCategory:(id)arg1;
- (id)category;
- (void)setLayerId:(long long)arg1;
- (void)cacheLayerId:(long long)arg1;
- (long long)layerId;
- (void)dealloc;
- (id)JSONRepresentation;
- (id)stringFromLayerAttributeAssetId:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
