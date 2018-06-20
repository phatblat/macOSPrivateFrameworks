//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceLayerIndex, GEOMapLayerDataServiceVersion;

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServiceVersionUpdate : PBCodable <NSCopying>
{
    GEOMapLayerDataServiceLayerIndex *_index;
    GEOMapLayerDataServiceLayer *_layer;
    GEOMapLayerDataServiceVersion *_sourceVersion;
    GEOMapLayerDataServiceVersion *_targetVersion;
}

@property(retain, nonatomic) GEOMapLayerDataServiceLayerIndex *index; // @synthesize index=_index;
@property(retain, nonatomic) GEOMapLayerDataServiceVersion *targetVersion; // @synthesize targetVersion=_targetVersion;
@property(retain, nonatomic) GEOMapLayerDataServiceVersion *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(retain, nonatomic) GEOMapLayerDataServiceLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasIndex;
@property(readonly, nonatomic) BOOL hasTargetVersion;
@property(readonly, nonatomic) BOOL hasSourceVersion;
@property(readonly, nonatomic) BOOL hasLayer;

@end

