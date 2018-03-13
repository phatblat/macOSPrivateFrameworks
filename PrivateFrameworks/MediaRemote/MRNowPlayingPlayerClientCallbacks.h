//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRPlaybackQueueContentItemCallbacks, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface MRNowPlayingPlayerClientCallbacks : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    void *_playerPath;
    MRPlaybackQueueContentItemCallbacks *_createPlaybackQueueForRequestCallbacks;
    MRPlaybackQueueContentItemCallbacks *_createItemForIdentifierCallbacks;
    MRPlaybackQueueContentItemCallbacks *_createItemForOffsetCallbacks;
    MRPlaybackQueueContentItemCallbacks *_createChildItemCallbacks;
    MRPlaybackQueueContentItemCallbacks *_metadataCallbacks;
    MRPlaybackQueueContentItemCallbacks *_languageOptionCallbacks;
    MRPlaybackQueueContentItemCallbacks *_infoCallbacks;
    MRPlaybackQueueContentItemCallbacks *_lyricsCallbacks;
    MRPlaybackQueueContentItemCallbacks *_artworkCallbacks;
    MRPlaybackQueueContentItemCallbacks *_artworkURLTemplateCallbacks;
    CDUnknownBlockType _beginLyricsEventCallback;
    CDUnknownBlockType _endLyricsEventCallback;
    CDUnknownBlockType _videoThumbnailsCallback;
    CDUnknownBlockType _audioAmplitudeSamplesCallback;
    NSMutableDictionary *_commandHandlerBlocks;
}

@property(readonly, nonatomic) void *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, copy, nonatomic) NSArray *commandHandlerBlocks;
- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (void)addCommandHandlerBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType endLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType beginLyricsEventCallback;
- (BOOL)removeCallback:(void *)arg1;
@property(readonly, nonatomic) NSArray *artworkURLTemplateCallbacks;
- (void *)addArtworkURLTemplateCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *artworkCallbacks;
- (void *)addArtworkCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *lyricsCallbacks;
- (void *)addLyricsCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *infoCallbacks;
- (void *)addInfoCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *languageOptionsCallbacks;
- (void *)addLanguageOptionsCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *metadataCallbacks;
- (void *)addMetadataCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
- (id)fallbackArtworkAssetCallbacks;
- (id)fallbackAssetCallbacks;
@property(readonly, nonatomic) CDUnknownBlockType createChildItemCallback;
- (void *)addCreateChildItemCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(readonly, nonatomic) CDUnknownBlockType createItemForOffsetCallback;
- (void *)addCreateItemForOffsetCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(readonly, nonatomic) CDUnknownBlockType createPlaybackQueueForRequestCallback;
- (void *)addCreatePlaybackQueueForRequestCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
- (id)_callbacksFromList:(id)arg1;
- (void *)_addCallback:(id)arg1 toList:(id *)arg2 prepend:(BOOL)arg3;
- (void *)_onQueue_capabilities;
@property(readonly, nonatomic) void *capabilities;
@property(readonly, nonatomic) BOOL hasPlaybackQueueCallbacks;
@property(copy, nonatomic) CDUnknownBlockType audioAmplitudeSamplesCallback;
@property(copy, nonatomic) CDUnknownBlockType videoThumbnailsCallback;
- (void)dealloc;
- (id)initWithPlayerPath:(void *)arg1 queue:(id)arg2;

@end

