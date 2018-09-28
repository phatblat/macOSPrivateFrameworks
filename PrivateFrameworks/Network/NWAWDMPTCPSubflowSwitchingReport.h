//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NWAWDMPTCPSubflowSwitchingReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _switchCount;
    NSString *_switchFromInterfaceName;
    NSString *_switchToInterfaceName;
    struct {
        unsigned int timestamp:1;
        unsigned int switchCount:1;
    } _has;
}

@property(nonatomic) int switchCount; // @synthesize switchCount=_switchCount;
@property(retain, nonatomic) NSString *switchToInterfaceName; // @synthesize switchToInterfaceName=_switchToInterfaceName;
@property(retain, nonatomic) NSString *switchFromInterfaceName; // @synthesize switchFromInterfaceName=_switchFromInterfaceName;
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
@property(nonatomic) BOOL hasSwitchCount;
@property(readonly, nonatomic) BOOL hasSwitchToInterfaceName;
@property(readonly, nonatomic) BOOL hasSwitchFromInterfaceName;
@property(nonatomic) BOOL hasTimestamp;

@end

