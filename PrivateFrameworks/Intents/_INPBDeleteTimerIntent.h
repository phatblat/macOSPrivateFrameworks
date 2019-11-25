//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBDeleteTimerIntent.h"

@class NSString, _INPBIntentMetadata, _INPBTimer;

@interface _INPBDeleteTimerIntent : PBCodable <_INPBDeleteTimerIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int deleteMultiple:1;
    } _has;
    BOOL _deleteMultiple;
    BOOL __encodeLegacyGloryData;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTimer *_targetTimer;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBTimer *targetTimer; // @synthesize targetTimer=_targetTimer;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) BOOL deleteMultiple; // @synthesize deleteMultiple=_deleteMultiple;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTargetTimer;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(nonatomic) BOOL hasDeleteMultiple;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

