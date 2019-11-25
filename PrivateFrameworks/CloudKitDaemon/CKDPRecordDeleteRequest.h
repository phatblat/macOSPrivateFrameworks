//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPRecordIdentifier, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordDeleteRequest : PBRequest <NSCopying>
{
    NSString *_etag;
    NSMutableArray *_pluginFields;
    NSMutableArray *_publicKeys;
    CKDPRecordIdentifier *_recordIdentifier;
    BOOL _participantKeyLost;
    struct {
        unsigned int participantKeyLost:1;
    } _has;
}

+ (Class)publicKeysType;
+ (Class)pluginFieldsType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *publicKeys; // @synthesize publicKeys=_publicKeys;
@property(nonatomic) BOOL participantKeyLost; // @synthesize participantKeyLost=_participantKeyLost;
@property(retain, nonatomic) NSMutableArray *pluginFields; // @synthesize pluginFields=_pluginFields;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)publicKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)publicKeysCount;
- (void)addPublicKeys:(id)arg1;
- (void)clearPublicKeys;
@property(nonatomic) BOOL hasParticipantKeyLost;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pluginFieldsCount;
- (void)addPluginFields:(id)arg1;
- (void)clearPluginFields;
@property(readonly, nonatomic) BOOL hasEtag;
@property(readonly, nonatomic) BOOL hasRecordIdentifier;

@end

