//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, NSMutableArray, NSMutableIndexSet, NSString;

@interface PXTilingLayoutInvalidationContext : NSObject
{
    NSMutableArray *_invalidatedTileIdentifiers;
    NSMutableIndexSet *_invalidatedTileGroups;
    BOOL _invalidatedAllTiles;
    BOOL _invalidatedContentBounds;
    BOOL _invalidatedScrollBounds;
    BOOL _invalidatedVisibleRect;
    BOOL _invalidatedScrollInfo;
    NSString *_tag;
}

@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) BOOL invalidatedScrollInfo; // @synthesize invalidatedScrollInfo=_invalidatedScrollInfo;
@property(readonly, nonatomic) BOOL invalidatedVisibleRect; // @synthesize invalidatedVisibleRect=_invalidatedVisibleRect;
@property(readonly, nonatomic) BOOL invalidatedScrollBounds; // @synthesize invalidatedScrollBounds=_invalidatedScrollBounds;
@property(readonly, nonatomic) BOOL invalidatedContentBounds; // @synthesize invalidatedContentBounds=_invalidatedContentBounds;
@property(readonly, nonatomic) BOOL invalidatedAllTiles; // @synthesize invalidatedAllTiles=_invalidatedAllTiles;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSIndexSet *invalidatedTileGroups;
- (void)invalidateEverything;
- (void)invalidateScrollInfo;
- (void)invalidateVisibleRect;
- (void)invalidateScrollBounds;
- (void)invalidateContentBounds;
- (void)invalidateAllTiles;
- (void)enumerateInvalidatedTileIdentifiersUsingBlock:(CDUnknownBlockType)arg1;
- (void)invalidateTilesInGroup:(unsigned long long)arg1;
- (void)invalidateTileWithIdentifier:(struct PXTileIdentifier)arg1;

@end
