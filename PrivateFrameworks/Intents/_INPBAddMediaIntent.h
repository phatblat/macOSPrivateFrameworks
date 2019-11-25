//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBAddMediaIntent.h"

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaDestination, _INPBMediaSearch;

@interface _INPBAddMediaIntent : PBCodable <_INPBAddMediaIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBIntentMetadata *_intentMetadata;
    _INPBMediaDestination *_mediaDestination;
    NSArray *_mediaItems;
    _INPBMediaSearch *_mediaSearch;
}

+ (BOOL)supportsSecureCoding;
+ (Class)mediaItemsType;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBMediaSearch *mediaSearch; // @synthesize mediaSearch=_mediaSearch;
@property(copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) _INPBMediaDestination *mediaDestination; // @synthesize mediaDestination=_mediaDestination;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasMediaSearch;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long mediaItemsCount;
- (void)addMediaItems:(id)arg1;
- (void)clearMediaItems;
@property(readonly, nonatomic) BOOL hasMediaDestination;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

