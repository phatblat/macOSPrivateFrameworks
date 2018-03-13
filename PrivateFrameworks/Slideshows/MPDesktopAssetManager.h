//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MPAssetManager.h>

@class MLMediaLibrary, MLMediaSource, NSMutableDictionary, NSMutableSet;

@interface MPDesktopAssetManager : MPAssetManager
{
    MLMediaLibrary *_mediaLibrary;
    MLMediaSource *_iPhotoMediaSource;
    MLMediaSource *_apertureMediaSource;
    MLMediaSource *_iTunesMediaSource;
    MLMediaSource *_garageBandMediaSource;
    MLMediaSource *_logicMediaSource;
    MLMediaSource *_iMovieMediaSource;
    MLMediaSource *_foldersMediaSource;
    NSMutableSet *_pendingMediaGroups;
    NSMutableDictionary *_mediaObjects;
}

- (id)absolutePathFromPath:(id)arg1;
- (id)locationHierarchyForAssetAtPath:(id)arg1;
- (double)altitudeForAssetAtPath:(id)arg1;
- (double)longitudeForAssetAtPath:(id)arg1;
- (double)latitudeForAssetAtPath:(id)arg1;
- (id)keywordsForAssetAtPath:(id)arg1;
- (id)creationDateForAssetAtPath:(id)arg1;
- (struct CGSize)resolutionForAssetAtPath:(id)arg1;
- (double)stopTimeForAssetAtPath:(id)arg1;
- (double)startTimeForAssetAtPath:(id)arg1;
- (double)durationForAssetAtPath:(id)arg1;
- (unsigned long long)mediaTypeForAssetAtPath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;
- (id)initWithMediaSources:(unsigned long long)arg1;
- (id)findMediaObjectWithPathInILMB:(id)arg1;
- (id)contentCreationDateForImageAtPath:(id)arg1;
- (id)exifPropertiesForImageAtPath:(id)arg1;

@end

