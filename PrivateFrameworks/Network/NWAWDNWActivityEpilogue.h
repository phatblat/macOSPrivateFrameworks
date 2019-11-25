//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NWAWDNWActivity, NWAWDNWL2Report;

__attribute__((visibility("hidden")))
@interface NWAWDNWActivityEpilogue : PBCodable <NSCopying>
{
    unsigned long long _durationMsecs;
    unsigned long long _fragmentsQuenched;
    unsigned long long _timestamp;
    NWAWDNWActivity *_activity;
    int _completionReason;
    NWAWDNWL2Report *_l2Report;
    struct {
        unsigned int durationMsecs:1;
        unsigned int fragmentsQuenched:1;
        unsigned int timestamp:1;
        unsigned int completionReason:1;
    } _has;
}

@property(retain, nonatomic) NWAWDNWL2Report *l2Report; // @synthesize l2Report=_l2Report;
@property(nonatomic) unsigned long long fragmentsQuenched; // @synthesize fragmentsQuenched=_fragmentsQuenched;
@property(nonatomic) unsigned long long durationMsecs; // @synthesize durationMsecs=_durationMsecs;
@property(retain, nonatomic) NWAWDNWActivity *activity; // @synthesize activity=_activity;
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
- (int)StringAsCompletionReason:(id)arg1;
- (id)completionReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasCompletionReason;
@property(nonatomic) int completionReason; // @synthesize completionReason=_completionReason;
@property(nonatomic) BOOL hasFragmentsQuenched;
@property(nonatomic) BOOL hasDurationMsecs;
@property(readonly, nonatomic) BOOL hasActivity;
@property(nonatomic) BOOL hasTimestamp;

@end

