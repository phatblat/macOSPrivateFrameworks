//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBDateTime;

@protocol _INPBMessageLinkMetadata <NSObject>
@property(readonly, nonatomic) BOOL hasTvSeasonName;
@property(copy, nonatomic) NSString *tvSeasonName;
@property(readonly, nonatomic) BOOL hasTvSeasonGenre;
@property(copy, nonatomic) NSString *tvSeasonGenre;
@property(readonly, nonatomic) BOOL hasTvEpisodeSeasonName;
@property(copy, nonatomic) NSString *tvEpisodeSeasonName;
@property(readonly, nonatomic) BOOL hasTvEpisodeGenre;
@property(copy, nonatomic) NSString *tvEpisodeGenre;
@property(readonly, nonatomic) BOOL hasTvEpisodeEpisodeName;
@property(copy, nonatomic) NSString *tvEpisodeEpisodeName;
@property(readonly, nonatomic) BOOL hasTitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) BOOL hasSummary;
@property(copy, nonatomic) NSString *summary;
@property(readonly, nonatomic) BOOL hasSongTitle;
@property(copy, nonatomic) NSString *songTitle;
@property(readonly, nonatomic) BOOL hasSongArtist;
@property(copy, nonatomic) NSString *songArtist;
@property(readonly, nonatomic) BOOL hasSongAlbum;
@property(copy, nonatomic) NSString *songAlbum;
@property(readonly, nonatomic) BOOL hasSoftwarePlatform;
@property(copy, nonatomic) NSString *softwarePlatform;
@property(readonly, nonatomic) BOOL hasSoftwareName;
@property(copy, nonatomic) NSString *softwareName;
@property(readonly, nonatomic) BOOL hasSoftwareGenre;
@property(copy, nonatomic) NSString *softwareGenre;
@property(readonly, nonatomic) BOOL hasSiteName;
@property(copy, nonatomic) NSString *siteName;
@property(readonly, nonatomic) BOOL hasRadioName;
@property(copy, nonatomic) NSString *radioName;
@property(readonly, nonatomic) BOOL hasRadioCurator;
@property(copy, nonatomic) NSString *radioCurator;
@property(readonly, nonatomic) BOOL hasPodcastName;
@property(copy, nonatomic) NSString *podcastName;
@property(readonly, nonatomic) BOOL hasPodcastEpisodeReleaseDate;
@property(retain, nonatomic) _INPBDateTime *podcastEpisodeReleaseDate;
@property(readonly, nonatomic) BOOL hasPodcastEpisodePodcastName;
@property(copy, nonatomic) NSString *podcastEpisodePodcastName;
@property(readonly, nonatomic) BOOL hasPodcastEpisodeName;
@property(copy, nonatomic) NSString *podcastEpisodeName;
@property(readonly, nonatomic) BOOL hasPodcastEpisodeArtist;
@property(copy, nonatomic) NSString *podcastEpisodeArtist;
@property(readonly, nonatomic) BOOL hasPodcastArtist;
@property(copy, nonatomic) NSString *podcastArtist;
@property(readonly, nonatomic) BOOL hasPlaylistName;
@property(copy, nonatomic) NSString *playlistName;
@property(readonly, nonatomic) BOOL hasPlaylistCurator;
@property(copy, nonatomic) NSString *playlistCurator;
@property(readonly, nonatomic) BOOL hasOriginalURL;
@property(copy, nonatomic) NSString *originalURL;
@property(readonly, nonatomic) BOOL hasMusicVideoName;
@property(copy, nonatomic) NSString *musicVideoName;
@property(readonly, nonatomic) BOOL hasMusicVideoArtist;
@property(copy, nonatomic) NSString *musicVideoArtist;
@property(readonly, nonatomic) BOOL hasMovieName;
@property(copy, nonatomic) NSString *movieName;
@property(readonly, nonatomic) BOOL hasMovieGenre;
@property(copy, nonatomic) NSString *movieGenre;
@property(nonatomic) BOOL hasLinkMediaType;
@property(nonatomic) int linkMediaType;
@property(readonly, nonatomic) BOOL hasItemType;
@property(copy, nonatomic) NSString *itemType;
@property(readonly, nonatomic) unsigned long long imageURLsCount;
@property(copy, nonatomic) NSArray *imageURLs;
@property(readonly, nonatomic) unsigned long long iconURLsCount;
@property(copy, nonatomic) NSArray *iconURLs;
@property(readonly, nonatomic) BOOL hasITunesStoreIdentifier;
@property(copy, nonatomic) NSString *iTunesStoreIdentifier;
@property(readonly, nonatomic) BOOL hasITunesStoreFrontIdentifier;
@property(copy, nonatomic) NSString *iTunesStoreFrontIdentifier;
@property(readonly, nonatomic) BOOL hasCreator;
@property(copy, nonatomic) NSString *creator;
@property(readonly, nonatomic) BOOL hasBookName;
@property(copy, nonatomic) NSString *bookName;
@property(readonly, nonatomic) BOOL hasBookAuthor;
@property(copy, nonatomic) NSString *bookAuthor;
@property(readonly, nonatomic) BOOL hasAudioBookNarrator;
@property(copy, nonatomic) NSString *audioBookNarrator;
@property(readonly, nonatomic) BOOL hasAudioBookName;
@property(copy, nonatomic) NSString *audioBookName;
@property(readonly, nonatomic) BOOL hasAudioBookAuthor;
@property(copy, nonatomic) NSString *audioBookAuthor;
@property(readonly, nonatomic) BOOL hasArtistName;
@property(copy, nonatomic) NSString *artistName;
@property(readonly, nonatomic) BOOL hasArtistGenre;
@property(copy, nonatomic) NSString *artistGenre;
@property(readonly, nonatomic) BOOL hasAlbumName;
@property(copy, nonatomic) NSString *albumName;
@property(readonly, nonatomic) BOOL hasAlbumArtist;
@property(copy, nonatomic) NSString *albumArtist;
- (int)StringAsLinkMediaType:(NSString *)arg1;
- (NSString *)linkMediaTypeAsString:(int)arg1;
- (NSString *)imageURLAtIndex:(unsigned long long)arg1;
- (void)addImageURL:(NSString *)arg1;
- (void)clearImageURLs;
- (NSString *)iconURLAtIndex:(unsigned long long)arg1;
- (void)addIconURL:(NSString *)arg1;
- (void)clearIconURLs;
@end

