//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPParticipant, CKDPRecordType, NSData, NSString;

@interface CKDPShareMetadata : PBCodable <NSCopying>
{
    CKDPParticipant *_callerParticipant;
    CKDPParticipant *_ownerParticipant;
    int _participantPermission;
    int _participantState;
    int _participantType;
    NSData *_protectedFullToken;
    CKDPRecordType *_rootRecordType;
    NSString *_routingKey;
    struct {
        unsigned int participantPermission:1;
        unsigned int participantState:1;
        unsigned int participantType:1;
    } _has;
}

@property(retain, nonatomic) CKDPRecordType *rootRecordType; // @synthesize rootRecordType=_rootRecordType;
@property(retain, nonatomic) CKDPParticipant *callerParticipant; // @synthesize callerParticipant=_callerParticipant;
@property(retain, nonatomic) CKDPParticipant *ownerParticipant; // @synthesize ownerParticipant=_ownerParticipant;
@property(retain, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
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
@property(readonly, nonatomic) BOOL hasRootRecordType;
- (int)StringAsParticipantType:(id)arg1;
- (id)participantTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasParticipantType;
@property(nonatomic) int participantType; // @synthesize participantType=_participantType;
- (int)StringAsParticipantState:(id)arg1;
- (id)participantStateAsString:(int)arg1;
@property(nonatomic) BOOL hasParticipantState;
@property(nonatomic) int participantState; // @synthesize participantState=_participantState;
- (int)StringAsParticipantPermission:(id)arg1;
- (id)participantPermissionAsString:(int)arg1;
@property(nonatomic) BOOL hasParticipantPermission;
@property(nonatomic) int participantPermission; // @synthesize participantPermission=_participantPermission;
@property(readonly, nonatomic) BOOL hasCallerParticipant;
@property(readonly, nonatomic) BOOL hasOwnerParticipant;
@property(readonly, nonatomic) BOOL hasProtectedFullToken;
@property(readonly, nonatomic) BOOL hasRoutingKey;
- (id)_participantTypeCKLogValue;
- (id)_participantStateCKLogValue;
- (id)_participantPermissionCKLogValue;

@end

