//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields;

@interface _INPBValueMetadata : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _requiredEntitlements;
    NSString *_canonicalValue;
    NSString *_input;
    NSString *_source;
    NSString *_sourceAppBundleIdentifier;
    NSString *_uuid;
    BOOL _confirmed;
    struct {
        unsigned int confirmed:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) NSString *sourceAppBundleIdentifier; // @synthesize sourceAppBundleIdentifier=_sourceAppBundleIdentifier;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *input; // @synthesize input=_input;
@property(nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *canonicalValue; // @synthesize canonicalValue=_canonicalValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsRequiredEntitlements:(id)arg1;
- (id)requiredEntitlementsAsString:(int)arg1;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (void)clearRequiredEntitlements;
@property(readonly, nonatomic) int *requiredEntitlements;
@property(readonly, nonatomic) unsigned long long requiredEntitlementsCount;
@property(readonly, nonatomic) BOOL hasSourceAppBundleIdentifier;
@property(readonly, nonatomic) BOOL hasSource;
@property(readonly, nonatomic) BOOL hasInput;
@property(nonatomic) BOOL hasConfirmed;
@property(readonly, nonatomic) BOOL hasUuid;
@property(readonly, nonatomic) BOOL hasCanonicalValue;
- (void)dealloc;

@end

