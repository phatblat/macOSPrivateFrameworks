//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBMessageLinkMetadata.h"

@class NSArray, NSString, _INPBDateTime;

@interface _INPBMessageLinkMetadata : PBCodable <_INPBMessageLinkMetadata, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int linkMediaType:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _linkMediaType;
    NSString *_albumArtist;
    NSString *_albumName;
    NSString *_appleTvSubtitle;
    NSString *_appleTvTitle;
    NSString *_artistGenre;
    NSString *_artistName;
    NSString *_audioBookAuthor;
    NSString *_audioBookName;
    NSString *_audioBookNarrator;
    NSString *_bookAuthor;
    NSString *_bookName;
    NSString *_creator;
    NSString *_iTunesStoreFrontIdentifier;
    NSString *_iTunesStoreIdentifier;
    NSArray *_iconURLs;
    NSArray *_imageURLs;
    NSString *_itemType;
    NSString *_movieBundleGenre;
    NSString *_movieBundleName;
    NSString *_movieGenre;
    NSString *_movieName;
    NSString *_musicVideoArtist;
    NSString *_musicVideoName;
    NSString *_originalURL;
    NSString *_playlistCurator;
    NSString *_playlistName;
    NSString *_podcastArtist;
    NSString *_podcastEpisodeArtist;
    NSString *_podcastEpisodeName;
    NSString *_podcastEpisodePodcastName;
    _INPBDateTime *_podcastEpisodeReleaseDate;
    NSString *_podcastName;
    NSString *_radioCurator;
    NSString *_radioName;
    NSString *_siteName;
    NSString *_softwareGenre;
    NSString *_softwareName;
    NSString *_softwarePlatform;
    NSString *_songAlbum;
    NSString *_songArtist;
    NSString *_songTitle;
    NSString *_summary;
    NSString *_title;
    NSString *_tvEpisodeEpisodeName;
    NSString *_tvEpisodeGenre;
    NSString *_tvEpisodeSeasonName;
    NSString *_tvSeasonGenre;
    NSString *_tvSeasonName;
    NSString *_tvShowName;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *tvShowName; // @synthesize tvShowName=_tvShowName;
@property(copy, nonatomic) NSString *tvSeasonName; // @synthesize tvSeasonName=_tvSeasonName;
@property(copy, nonatomic) NSString *tvSeasonGenre; // @synthesize tvSeasonGenre=_tvSeasonGenre;
@property(copy, nonatomic) NSString *tvEpisodeSeasonName; // @synthesize tvEpisodeSeasonName=_tvEpisodeSeasonName;
@property(copy, nonatomic) NSString *tvEpisodeGenre; // @synthesize tvEpisodeGenre=_tvEpisodeGenre;
@property(copy, nonatomic) NSString *tvEpisodeEpisodeName; // @synthesize tvEpisodeEpisodeName=_tvEpisodeEpisodeName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *songTitle; // @synthesize songTitle=_songTitle;
@property(copy, nonatomic) NSString *songArtist; // @synthesize songArtist=_songArtist;
@property(copy, nonatomic) NSString *songAlbum; // @synthesize songAlbum=_songAlbum;
@property(copy, nonatomic) NSString *softwarePlatform; // @synthesize softwarePlatform=_softwarePlatform;
@property(copy, nonatomic) NSString *softwareName; // @synthesize softwareName=_softwareName;
@property(copy, nonatomic) NSString *softwareGenre; // @synthesize softwareGenre=_softwareGenre;
@property(copy, nonatomic) NSString *siteName; // @synthesize siteName=_siteName;
@property(copy, nonatomic) NSString *radioName; // @synthesize radioName=_radioName;
@property(copy, nonatomic) NSString *radioCurator; // @synthesize radioCurator=_radioCurator;
@property(copy, nonatomic) NSString *podcastName; // @synthesize podcastName=_podcastName;
@property(retain, nonatomic) _INPBDateTime *podcastEpisodeReleaseDate; // @synthesize podcastEpisodeReleaseDate=_podcastEpisodeReleaseDate;
@property(copy, nonatomic) NSString *podcastEpisodePodcastName; // @synthesize podcastEpisodePodcastName=_podcastEpisodePodcastName;
@property(copy, nonatomic) NSString *podcastEpisodeName; // @synthesize podcastEpisodeName=_podcastEpisodeName;
@property(copy, nonatomic) NSString *podcastEpisodeArtist; // @synthesize podcastEpisodeArtist=_podcastEpisodeArtist;
@property(copy, nonatomic) NSString *podcastArtist; // @synthesize podcastArtist=_podcastArtist;
@property(copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(copy, nonatomic) NSString *playlistCurator; // @synthesize playlistCurator=_playlistCurator;
@property(copy, nonatomic) NSString *originalURL; // @synthesize originalURL=_originalURL;
@property(copy, nonatomic) NSString *musicVideoName; // @synthesize musicVideoName=_musicVideoName;
@property(copy, nonatomic) NSString *musicVideoArtist; // @synthesize musicVideoArtist=_musicVideoArtist;
@property(copy, nonatomic) NSString *movieName; // @synthesize movieName=_movieName;
@property(copy, nonatomic) NSString *movieGenre; // @synthesize movieGenre=_movieGenre;
@property(copy, nonatomic) NSString *movieBundleName; // @synthesize movieBundleName=_movieBundleName;
@property(copy, nonatomic) NSString *movieBundleGenre; // @synthesize movieBundleGenre=_movieBundleGenre;
@property(nonatomic) int linkMediaType; // @synthesize linkMediaType=_linkMediaType;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(copy, nonatomic) NSArray *iconURLs; // @synthesize iconURLs=_iconURLs;
@property(copy, nonatomic) NSString *iTunesStoreIdentifier; // @synthesize iTunesStoreIdentifier=_iTunesStoreIdentifier;
@property(copy, nonatomic) NSString *iTunesStoreFrontIdentifier; // @synthesize iTunesStoreFrontIdentifier=_iTunesStoreFrontIdentifier;
@property(copy, nonatomic) NSString *creator; // @synthesize creator=_creator;
@property(copy, nonatomic) NSString *bookName; // @synthesize bookName=_bookName;
@property(copy, nonatomic) NSString *bookAuthor; // @synthesize bookAuthor=_bookAuthor;
@property(copy, nonatomic) NSString *audioBookNarrator; // @synthesize audioBookNarrator=_audioBookNarrator;
@property(copy, nonatomic) NSString *audioBookName; // @synthesize audioBookName=_audioBookName;
@property(copy, nonatomic) NSString *audioBookAuthor; // @synthesize audioBookAuthor=_audioBookAuthor;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *artistGenre; // @synthesize artistGenre=_artistGenre;
@property(copy, nonatomic) NSString *appleTvTitle; // @synthesize appleTvTitle=_appleTvTitle;
@property(copy, nonatomic) NSString *appleTvSubtitle; // @synthesize appleTvSubtitle=_appleTvSubtitle;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *albumArtist; // @synthesize albumArtist=_albumArtist;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTvShowName;
@property(readonly, nonatomic) BOOL hasTvSeasonName;
@property(readonly, nonatomic) BOOL hasTvSeasonGenre;
@property(readonly, nonatomic) BOOL hasTvEpisodeSeasonName;
@property(readonly, nonatomic) BOOL hasTvEpisodeGenre;
@property(readonly, nonatomic) BOOL hasTvEpisodeEpisodeName;
@property(readonly, nonatomic) BOOL hasTitle;
@property(readonly, nonatomic) BOOL hasSummary;
@property(readonly, nonatomic) BOOL hasSongTitle;
@property(readonly, nonatomic) BOOL hasSongArtist;
@property(readonly, nonatomic) BOOL hasSongAlbum;
@property(readonly, nonatomic) BOOL hasSoftwarePlatform;
@property(readonly, nonatomic) BOOL hasSoftwareName;
@property(readonly, nonatomic) BOOL hasSoftwareGenre;
@property(readonly, nonatomic) BOOL hasSiteName;
@property(readonly, nonatomic) BOOL hasRadioName;
@property(readonly, nonatomic) BOOL hasRadioCurator;
@property(readonly, nonatomic) BOOL hasPodcastName;
@property(readonly, nonatomic) BOOL hasPodcastEpisodeReleaseDate;
@property(readonly, nonatomic) BOOL hasPodcastEpisodePodcastName;
@property(readonly, nonatomic) BOOL hasPodcastEpisodeName;
@property(readonly, nonatomic) BOOL hasPodcastEpisodeArtist;
@property(readonly, nonatomic) BOOL hasPodcastArtist;
@property(readonly, nonatomic) BOOL hasPlaylistName;
@property(readonly, nonatomic) BOOL hasPlaylistCurator;
@property(readonly, nonatomic) BOOL hasOriginalURL;
@property(readonly, nonatomic) BOOL hasMusicVideoName;
@property(readonly, nonatomic) BOOL hasMusicVideoArtist;
@property(readonly, nonatomic) BOOL hasMovieName;
@property(readonly, nonatomic) BOOL hasMovieGenre;
@property(readonly, nonatomic) BOOL hasMovieBundleName;
@property(readonly, nonatomic) BOOL hasMovieBundleGenre;
- (int)StringAsLinkMediaType:(id)arg1;
- (id)linkMediaTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasLinkMediaType;
@property(readonly, nonatomic) BOOL hasItemType;
- (id)imageURLAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long imageURLsCount;
- (void)addImageURL:(id)arg1;
- (void)clearImageURLs;
- (id)iconURLAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long iconURLsCount;
- (void)addIconURL:(id)arg1;
- (void)clearIconURLs;
@property(readonly, nonatomic) BOOL hasITunesStoreIdentifier;
@property(readonly, nonatomic) BOOL hasITunesStoreFrontIdentifier;
@property(readonly, nonatomic) BOOL hasCreator;
@property(readonly, nonatomic) BOOL hasBookName;
@property(readonly, nonatomic) BOOL hasBookAuthor;
@property(readonly, nonatomic) BOOL hasAudioBookNarrator;
@property(readonly, nonatomic) BOOL hasAudioBookName;
@property(readonly, nonatomic) BOOL hasAudioBookAuthor;
@property(readonly, nonatomic) BOOL hasArtistName;
@property(readonly, nonatomic) BOOL hasArtistGenre;
@property(readonly, nonatomic) BOOL hasAppleTvTitle;
@property(readonly, nonatomic) BOOL hasAppleTvSubtitle;
@property(readonly, nonatomic) BOOL hasAlbumName;
@property(readonly, nonatomic) BOOL hasAlbumArtist;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

