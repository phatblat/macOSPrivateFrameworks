//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface WBSAnalyticsSafariCKBookmarksMigrationStartedEvent : PBCodable <NSCopying>
{
    long long _localState;
    long long _remoteState;
    unsigned long long _timestamp;
    int _migratorType;
    struct {
        unsigned int localState:1;
        unsigned int remoteState:1;
        unsigned int timestamp:1;
        unsigned int migratorType:1;
    } _has;
}

@property(nonatomic) long long remoteState; // @synthesize remoteState=_remoteState;
@property(nonatomic) long long localState; // @synthesize localState=_localState;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasRemoteState;
@property(nonatomic) BOOL hasLocalState;
- (int)StringAsMigratorType:(id)arg1;
- (id)migratorTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMigratorType;
@property(nonatomic) int migratorType; // @synthesize migratorType=_migratorType;
@property(nonatomic) BOOL hasTimestamp;

@end

