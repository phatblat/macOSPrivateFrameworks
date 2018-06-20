//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VCCallInfoBlob : PBCodable <NSCopying>
{
    unsigned int _callID;
    unsigned int _clientVersion;
    NSString *_deviceType;
    NSString *_frameworkVersion;
    NSString *_osVersion;
}

@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *frameworkVersion; // @synthesize frameworkVersion=_frameworkVersion;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) unsigned int clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) unsigned int callID; // @synthesize callID=_callID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end

