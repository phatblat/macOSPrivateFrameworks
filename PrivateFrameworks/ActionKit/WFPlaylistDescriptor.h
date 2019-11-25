//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface WFPlaylistDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _entireMusicLibrary;
    NSString *_playlistName;
    NSNumber *_persistentIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSNumber *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(readonly, nonatomic) BOOL entireMusicLibrary; // @synthesize entireMusicLibrary=_entireMusicLibrary;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaylistName:(id)arg1 persistentIdentifier:(id)arg2;
- (id)initWithEntireMusicLibrary;

@end

