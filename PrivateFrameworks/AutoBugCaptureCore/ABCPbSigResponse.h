//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABCPbSigResponse : PBCodable <NSCopying>
{
    unsigned int _caseCount;
    unsigned int _caseCountTarget;
    NSString *_caseIdentifier;
    NSString *_caseStatus;
    BOOL _decision;
    struct {
        unsigned int caseCount:1;
        unsigned int caseCountTarget:1;
        unsigned int decision:1;
    } _has;
}

@property(nonatomic) BOOL decision; // @synthesize decision=_decision;
@property(retain, nonatomic) NSString *caseStatus; // @synthesize caseStatus=_caseStatus;
@property(nonatomic) unsigned int caseCountTarget; // @synthesize caseCountTarget=_caseCountTarget;
@property(nonatomic) unsigned int caseCount; // @synthesize caseCount=_caseCount;
@property(retain, nonatomic) NSString *caseIdentifier; // @synthesize caseIdentifier=_caseIdentifier;
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
@property(nonatomic) BOOL hasDecision;
@property(readonly, nonatomic) BOOL hasCaseStatus;
@property(nonatomic) BOOL hasCaseCountTarget;
@property(nonatomic) BOOL hasCaseCount;
@property(readonly, nonatomic) BOOL hasCaseIdentifier;

@end

