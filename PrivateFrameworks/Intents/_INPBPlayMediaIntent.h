//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPlayMediaIntent.h"

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaItemValue, _INPBMediaSearch, _INPBString, _INPBTimestamp;

@interface _INPBPlayMediaIntent : PBCodable <_INPBPlayMediaIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int playShuffled:1;
        unsigned int playbackQueueLocation:1;
        unsigned int playbackRepeatMode:1;
        unsigned int playbackSpeed:1;
        unsigned int resumePlayback:1;
    } _has;
    BOOL _playShuffled;
    BOOL _resumePlayback;
    BOOL __encodeLegacyGloryData;
    int _playbackQueueLocation;
    int _playbackRepeatMode;
    NSArray *_alternativeResults;
    NSArray *_audioSearchResults;
    _INPBString *_audiobookAuthor;
    _INPBString *_audiobookTitle;
    NSArray *_buckets;
    _INPBTimestamp *_expirationDate;
    NSArray *_hashedRouteUIDs;
    _INPBIntentMetadata *_intentMetadata;
    _INPBMediaItemValue *_mediaContainer;
    NSArray *_mediaItems;
    _INPBMediaSearch *_mediaSearch;
    _INPBString *_mediaUserContext;
    _INPBString *_musicArtistName;
    double _playbackSpeed;
    _INPBString *_playlistTitle;
    NSString *_proxiedBundleIdentifier;
    NSString *_recoID;
    _INPBString *_showTitle;
}

+ (BOOL)supportsSecureCoding;
+ (Class)mediaItemsType;
+ (Class)hashedRouteUIDsType;
+ (Class)bucketType;
+ (Class)audioSearchResultsType;
+ (Class)alternativeResultsType;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBString *showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) BOOL resumePlayback; // @synthesize resumePlayback=_resumePlayback;
@property(copy, nonatomic) NSString *recoID; // @synthesize recoID=_recoID;
@property(copy, nonatomic) NSString *proxiedBundleIdentifier; // @synthesize proxiedBundleIdentifier=_proxiedBundleIdentifier;
@property(retain, nonatomic) _INPBString *playlistTitle; // @synthesize playlistTitle=_playlistTitle;
@property(nonatomic) double playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property(nonatomic) int playbackRepeatMode; // @synthesize playbackRepeatMode=_playbackRepeatMode;
@property(nonatomic) int playbackQueueLocation; // @synthesize playbackQueueLocation=_playbackQueueLocation;
@property(nonatomic) BOOL playShuffled; // @synthesize playShuffled=_playShuffled;
@property(retain, nonatomic) _INPBString *musicArtistName; // @synthesize musicArtistName=_musicArtistName;
@property(retain, nonatomic) _INPBString *mediaUserContext; // @synthesize mediaUserContext=_mediaUserContext;
@property(retain, nonatomic) _INPBMediaSearch *mediaSearch; // @synthesize mediaSearch=_mediaSearch;
@property(copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) _INPBMediaItemValue *mediaContainer; // @synthesize mediaContainer=_mediaContainer;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *hashedRouteUIDs; // @synthesize hashedRouteUIDs=_hashedRouteUIDs;
@property(retain, nonatomic) _INPBTimestamp *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSArray *buckets; // @synthesize buckets=_buckets;
@property(retain, nonatomic) _INPBString *audiobookTitle; // @synthesize audiobookTitle=_audiobookTitle;
@property(retain, nonatomic) _INPBString *audiobookAuthor; // @synthesize audiobookAuthor=_audiobookAuthor;
@property(copy, nonatomic) NSArray *audioSearchResults; // @synthesize audioSearchResults=_audioSearchResults;
@property(copy, nonatomic) NSArray *alternativeResults; // @synthesize alternativeResults=_alternativeResults;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasShowTitle;
@property(nonatomic) BOOL hasResumePlayback;
@property(readonly, nonatomic) BOOL hasRecoID;
@property(readonly, nonatomic) BOOL hasProxiedBundleIdentifier;
@property(readonly, nonatomic) BOOL hasPlaylistTitle;
@property(nonatomic) BOOL hasPlaybackSpeed;
- (int)StringAsPlaybackRepeatMode:(id)arg1;
- (id)playbackRepeatModeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaybackRepeatMode;
- (int)StringAsPlaybackQueueLocation:(id)arg1;
- (id)playbackQueueLocationAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaybackQueueLocation;
@property(nonatomic) BOOL hasPlayShuffled;
@property(readonly, nonatomic) BOOL hasMusicArtistName;
@property(readonly, nonatomic) BOOL hasMediaUserContext;
@property(readonly, nonatomic) BOOL hasMediaSearch;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long mediaItemsCount;
- (void)addMediaItems:(id)arg1;
- (void)clearMediaItems;
@property(readonly, nonatomic) BOOL hasMediaContainer;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (id)hashedRouteUIDsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long hashedRouteUIDsCount;
- (void)addHashedRouteUIDs:(id)arg1;
- (void)clearHashedRouteUIDs;
@property(readonly, nonatomic) BOOL hasExpirationDate;
- (id)bucketAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long bucketsCount;
- (void)addBucket:(id)arg1;
- (void)clearBuckets;
@property(readonly, nonatomic) BOOL hasAudiobookTitle;
@property(readonly, nonatomic) BOOL hasAudiobookAuthor;
- (id)audioSearchResultsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long audioSearchResultsCount;
- (void)addAudioSearchResults:(id)arg1;
- (void)clearAudioSearchResults;
- (id)alternativeResultsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long alternativeResultsCount;
- (void)addAlternativeResults:(id)arg1;
- (void)clearAlternativeResults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

