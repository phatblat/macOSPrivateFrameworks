//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PodcastServices/PODContentChange.h>

#import "PODSecureCoding.h"

@class NSString, PODEpisodeChangeEntityData, PODEpisodePlayMetadata;

@interface PODEpisodeChange : PODContentChange <PODSecureCoding>
{
    PODEpisodePlayMetadata *_playMetadata;
}

+ (BOOL)supportsSecureCoding;
+ (Class)entityDataClass;
+ (id)deleteWithEpisodeSyncID:(long long)arg1;
+ (id)updateWithPlayMetadata:(id)arg1;
+ (id)updateWithEpisodeEntityData:(id)arg1;
+ (id)insertWithEpisodeEntityData:(id)arg1;
@property(retain, nonatomic) PODEpisodePlayMetadata *playMetadata; // @synthesize playMetadata=_playMetadata;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_episodePlayMetadata;
@property(readonly, nonatomic) PODEpisodeChangeEntityData *entityData;
@property(readonly, nonatomic) long long episodeSyncID;
- (id)initWithUpdatedPlayMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

