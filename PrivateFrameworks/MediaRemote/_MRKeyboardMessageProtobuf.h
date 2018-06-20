//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, _MRTextEditingAttributesProtobuf;

@interface _MRKeyboardMessageProtobuf : PBCodable <NSCopying>
{
    _MRTextEditingAttributesProtobuf *_attributes;
    NSData *_encryptedTextCyphertext;
    int _state;
    CDStruct_5accba53 _has;
}

@property(retain, nonatomic) NSData *encryptedTextCyphertext; // @synthesize encryptedTextCyphertext=_encryptedTextCyphertext;
@property(retain, nonatomic) _MRTextEditingAttributesProtobuf *attributes; // @synthesize attributes=_attributes;
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
@property(readonly, nonatomic) BOOL hasEncryptedTextCyphertext;
@property(readonly, nonatomic) BOOL hasAttributes;
- (int)StringAsState:(id)arg1;
- (id)stateAsString:(int)arg1;
@property(nonatomic) BOOL hasState;
@property(nonatomic) int state; // @synthesize state=_state;

@end

