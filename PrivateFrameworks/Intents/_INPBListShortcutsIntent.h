//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBListShortcutsIntent.h"

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBListShortcutsIntent : PBCodable <_INPBListShortcutsIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int originDevice:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _originDevice;
    NSArray *_appTitles;
    _INPBIntentMetadata *_intentMetadata;
}

+ (BOOL)supportsSecureCoding;
+ (Class)appTitleType;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int originDevice; // @synthesize originDevice=_originDevice;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *appTitles; // @synthesize appTitles=_appTitles;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsOriginDevice:(id)arg1;
- (id)originDeviceAsString:(int)arg1;
@property(nonatomic) BOOL hasOriginDevice;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (id)appTitleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long appTitlesCount;
- (void)addAppTitle:(id)arg1;
- (void)clearAppTitles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

