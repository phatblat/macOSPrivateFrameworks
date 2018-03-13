//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, _MRLyricsTokenProtobuf;

@interface _MRLyricsItemProtobuf : PBCodable <NSCopying>
{
    NSString *_lyrics;
    _MRLyricsTokenProtobuf *_token;
    BOOL _userProvided;
    struct {
        unsigned int userProvided:1;
    } _has;
}

@property(retain, nonatomic) _MRLyricsTokenProtobuf *token; // @synthesize token=_token;
@property(nonatomic) BOOL userProvided; // @synthesize userProvided=_userProvided;
@property(retain, nonatomic) NSString *lyrics; // @synthesize lyrics=_lyrics;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasToken;
@property(nonatomic) BOOL hasUserProvided;
@property(readonly, nonatomic) BOOL hasLyrics;
- (void)dealloc;

@end

