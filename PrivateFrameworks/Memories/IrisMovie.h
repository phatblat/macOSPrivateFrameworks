//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/VideoMovie.h>

__attribute__((visibility("hidden")))
@interface IrisMovie : VideoMovie
{
    CDStruct_1b6d18a9 _cachedPreciseAssetStart;
}

@property(nonatomic) CDStruct_1b6d18a9 cachedPreciseAssetStart; // @synthesize cachedPreciseAssetStart=_cachedPreciseAssetStart;
- (int)duration;
- (CDStruct_1b6d18a9)startTime;
- (void)cacheVideoTrackInformationOfAsset:(id)arg1;
@property(readonly, nonatomic) BOOL front;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 front:(BOOL)arg3;

@end
