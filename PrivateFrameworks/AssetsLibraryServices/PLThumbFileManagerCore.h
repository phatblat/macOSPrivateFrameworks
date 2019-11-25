//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLThumbPersistenceManager.h"

@class NSString, PLImageFormat, PLPhotoLibraryPathManager;

@interface PLThumbFileManagerCore : NSObject <PLThumbPersistenceManager>
{
    PLImageFormat *_format;
    BOOL _readOnly;
    PLPhotoLibraryPathManager *_pathManager;
    unsigned int _recipeId;
    NSString *_path;
}

+ (CDStruct_1ef3fb1f)maxMasterSizeFromSourceImageSize:(CDStruct_1ef3fb1f)arg1 format:(id)arg2;
@property(readonly) PLImageFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)_debugDescription;
- (BOOL)validateData:(id)arg1 withToken:(id)arg2;
- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void *)arg3;
- (void)preheatDataForThumbnailIndexes:(id)arg1;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (BOOL)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
- (void)deleteEntryWithIdentifier:(id)arg1;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 urlHandler:(CDUnknownBlockType)arg2;
- (id)thumbnailPathForThumbIdentifier:(id)arg1;
- (id)_fileIdentifierForThumbnailIdentifier:(id)arg1;
- (BOOL)usesThumbIdentifiers;
@property(readonly, nonatomic) BOOL isReadOnly;
@property(readonly, copy) NSString *description;
- (id)initWithImageFormat:(id)arg1 pathManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

