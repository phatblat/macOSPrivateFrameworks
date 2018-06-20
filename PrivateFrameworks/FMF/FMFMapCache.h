//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface FMFMapCache : NSObject
{
    BOOL _fileProtectionDeactivated;
    NSMutableDictionary *_cacheMetaData;
    NSMutableDictionary *_gridImageMetaData;
    NSMutableDictionary *_noLocationImageMetaData;
    NSMutableDictionary *_mapImageMetaData;
    NSMutableDictionary *_pendingMapImageMetaData;
    NSString *_cachePath;
    NSString *_imageCachePath;
    NSObject<OS_dispatch_queue> *_cacheMetaQueue;
    NSObject<OS_dispatch_queue> *_gridImageQueue;
    NSObject<OS_dispatch_queue> *_noLocationImageQueue;
    NSObject<OS_dispatch_queue> *_mapImageQueue;
    NSObject<OS_dispatch_queue> *_pendingImageQueue;
    double _mapLocationDistanceThreshold;
}

@property(nonatomic) BOOL fileProtectionDeactivated; // @synthesize fileProtectionDeactivated=_fileProtectionDeactivated;
@property(nonatomic) double mapLocationDistanceThreshold; // @synthesize mapLocationDistanceThreshold=_mapLocationDistanceThreshold;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pendingImageQueue; // @synthesize pendingImageQueue=_pendingImageQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mapImageQueue; // @synthesize mapImageQueue=_mapImageQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *noLocationImageQueue; // @synthesize noLocationImageQueue=_noLocationImageQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *gridImageQueue; // @synthesize gridImageQueue=_gridImageQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheMetaQueue; // @synthesize cacheMetaQueue=_cacheMetaQueue;
@property(retain, nonatomic) NSString *imageCachePath; // @synthesize imageCachePath=_imageCachePath;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSMutableDictionary *pendingMapImageMetaData; // @synthesize pendingMapImageMetaData=_pendingMapImageMetaData;
@property(retain, nonatomic) NSMutableDictionary *mapImageMetaData; // @synthesize mapImageMetaData=_mapImageMetaData;
@property(retain, nonatomic) NSMutableDictionary *noLocationImageMetaData; // @synthesize noLocationImageMetaData=_noLocationImageMetaData;
@property(retain, nonatomic) NSMutableDictionary *gridImageMetaData; // @synthesize gridImageMetaData=_gridImageMetaData;
@property(retain, nonatomic) NSMutableDictionary *cacheMetaData; // @synthesize cacheMetaData=_cacheMetaData;
- (void).cxx_destruct;
- (id)mapImageKeyForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;
- (id)noLocationKeyForWidth:(double)arg1 andHeight:(double)arg2;
- (id)gridKeyForWidth:(double)arg1 andHeight:(double)arg2;
- (void)saveMetaData;
- (void)readMetaData;
- (BOOL)pendingMapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;
- (BOOL)pendingMapImageForRequest:(id)arg1;
- (void)cacheMapImage:(id)arg1 forLocation:(id)arg2 altitude:(double)arg3 pitch:(double)arg4 width:(double)arg5 andHeight:(double)arg6;
- (void)cacheMapImage:(id)arg1 forRequest:(id)arg2;
- (id)cachedMapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;
- (id)cachedMapImageForRequest:(id)arg1;
- (void)cacheNoLocationImage:(id)arg1 forWidth:(double)arg2 andHeight:(double)arg3;
- (id)cachedNoLocationImageForWidth:(double)arg1 andHeight:(double)arg2;
- (void)cacheGridImage:(id)arg1 forWidth:(double)arg2 andHeight:(double)arg3;
- (id)cachedGridImageForWidth:(double)arg1 andHeight:(double)arg2;
- (id)init;

@end

