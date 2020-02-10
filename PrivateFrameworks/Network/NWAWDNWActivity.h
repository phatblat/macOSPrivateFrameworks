//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, NWAWDNWL2Report;

__attribute__((visibility("hidden")))
@interface NWAWDNWActivity : PBCodable <NSCopying>
{
    unsigned long long _activityDomain;
    unsigned long long _activityLabel;
    unsigned long long _timestamp;
    NSString *_activityUUID;
    NWAWDNWL2Report *_l2Report;
    NSString *_parentActivityUUID;
    BOOL _isRetry;
    struct {
        unsigned int activityDomain:1;
        unsigned int activityLabel:1;
        unsigned int timestamp:1;
        unsigned int isRetry:1;
    } _has;
}

@property(retain, nonatomic) NWAWDNWL2Report *l2Report; // @synthesize l2Report=_l2Report;
@property(nonatomic) BOOL isRetry; // @synthesize isRetry=_isRetry;
@property(retain, nonatomic) NSString *parentActivityUUID; // @synthesize parentActivityUUID=_parentActivityUUID;
@property(retain, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(nonatomic) unsigned long long activityLabel; // @synthesize activityLabel=_activityLabel;
@property(nonatomic) unsigned long long activityDomain; // @synthesize activityDomain=_activityDomain;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasL2Report;
@property(nonatomic) BOOL hasIsRetry;
@property(readonly, nonatomic) BOOL hasParentActivityUUID;
@property(readonly, nonatomic) BOOL hasActivityUUID;
@property(nonatomic) BOOL hasActivityLabel;
@property(nonatomic) BOOL hasActivityDomain;
@property(nonatomic) BOOL hasTimestamp;

@end
