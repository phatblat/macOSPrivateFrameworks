//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WFPodcastUtilities : NSObject
{
}

+ (void)getPodcastsFromLibraryFetchingDetailsFromServer:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void *)createPlayerPath;
+ (struct _MRSystemAppPlaybackQueue *)createPlaybackQueueWithURLs:(id)arg1 setImmediatePlayback:(BOOL)arg2;
+ (id)generatePlaybackQueueURL:(id)arg1 withQueryDictionary:(id)arg2;

@end
