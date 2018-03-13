//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTransitLineTileSource.h>

@class GEOMapItemIdentifier;

__attribute__((visibility("hidden")))
@interface VKSelectedTransitLineTileSource : VKTransitLineTileSource
{
    unsigned long long _selectedLineIDSequenceCounter;
    GEOMapItemIdentifier *_selectedLineID;
    unsigned int _maxZ;
}

@property(nonatomic) unsigned int maxZ; // @synthesize maxZ=_maxZ;
@property(retain, nonatomic) GEOMapItemIdentifier *selectedLineID; // @synthesize selectedLineID=_selectedLineID;
- (struct VKTileKey)sourceKeyForDownloadKey:(const struct _GEOTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (void)performDownload:(const struct _GEOTileKey *)arg1;
- (BOOL)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (BOOL)_shouldUseDecodedTile:(id)arg1 extraInfo:(id)arg2;
- (id)_extraInfoForPendingSourceKey:(const struct VKTileKey *)arg1;
- (unsigned char)mapLayerForZoomLevelRange;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(shared_ptr_e963992e)arg5 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator *)arg6 transitLineSharedResources:(const shared_ptr_f4e206f4 *)arg7;

@end

