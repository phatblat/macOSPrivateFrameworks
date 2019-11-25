//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSendMessageAttachment.h"

@class NSString, _INPBFileDataAttachment, _INPBURLValue;

@interface _INPBSendMessageAttachment : PBCodable <_INPBSendMessageAttachment, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL _currentLocation;
    BOOL __encodeLegacyGloryData;
    _INPBFileDataAttachment *_file;
    _INPBURLValue *_fileURL;
    _INPBURLValue *_speechDataURL;
    unsigned long long _whichDatasource;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(readonly, nonatomic) unsigned long long whichDatasource; // @synthesize whichDatasource=_whichDatasource;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasSpeechDataURL;
@property(retain, nonatomic) _INPBURLValue *speechDataURL; // @synthesize speechDataURL=_speechDataURL;
@property(readonly, nonatomic) BOOL hasFileURL;
@property(retain, nonatomic) _INPBURLValue *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) BOOL hasFile;
@property(retain, nonatomic) _INPBFileDataAttachment *file; // @synthesize file=_file;
@property(readonly, nonatomic) BOOL hasCurrentLocation;
@property(nonatomic) BOOL currentLocation; // @synthesize currentLocation=_currentLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

