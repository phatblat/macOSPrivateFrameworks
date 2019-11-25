//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface AMPLibraryAddToCloudMusicLibraryRequest : NSObject <NSSecureCoding>
{
    BOOL _flag;
    unsigned int _command;
    unsigned long long _commandID;
    unsigned long long _playlistID;
    unsigned long long _parentPlaylistID;
    unsigned long long _curatorAdamID;
    NSString *_playlistTitle;
    NSString *_cloudPlaylistUUID;
    NSArray *_adamIDs;
    NSArray *_itemIdentifiers;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(retain, nonatomic) NSArray *adamIDs; // @synthesize adamIDs=_adamIDs;
@property(retain, nonatomic) NSString *cloudPlaylistUUID; // @synthesize cloudPlaylistUUID=_cloudPlaylistUUID;
@property(retain, nonatomic) NSString *playlistTitle; // @synthesize playlistTitle=_playlistTitle;
@property(nonatomic) BOOL flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned long long curatorAdamID; // @synthesize curatorAdamID=_curatorAdamID;
@property(nonatomic) unsigned long long parentPlaylistID; // @synthesize parentPlaylistID=_parentPlaylistID;
@property(nonatomic) unsigned long long playlistID; // @synthesize playlistID=_playlistID;
@property(nonatomic) unsigned long long commandID; // @synthesize commandID=_commandID;
@property(nonatomic) unsigned int command; // @synthesize command=_command;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

