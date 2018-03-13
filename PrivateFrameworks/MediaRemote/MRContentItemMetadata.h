//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/_MRContentItemMetadataProtobuf.h>

@class NSDate, NSDictionary, NSObject<OS_dispatch_queue>, NSURL;

__attribute__((visibility("hidden")))
@interface MRContentItemMetadata : _MRContentItemMetadataProtobuf
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSURL *_assetURL;
    NSDictionary *_userInfo;
    NSDictionary *_appMetrics;
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_collectionInfo;
    NSDate *_currentPlaybackDate;
    NSDictionary *_deviceSpecificUserInfo;
}

+ (void)initialize;
- (id)customDictionaryRepresentation;
@property(copy, nonatomic) NSDictionary *deviceSpecificUserInfo;
@property(copy, nonatomic) NSDate *currentPlaybackDate;
@property(copy, nonatomic) NSDictionary *collectionInfo;
@property(copy, nonatomic) NSDictionary *nowPlayingInfo;
@property(copy, nonatomic) NSDictionary *appMetrics;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) NSURL *assetURL;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)mergeFrom:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

