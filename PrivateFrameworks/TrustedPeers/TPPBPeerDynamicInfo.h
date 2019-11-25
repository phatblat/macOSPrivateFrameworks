//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface TPPBPeerDynamicInfo : PBCodable <NSCopying>
{
    unsigned long long _clock;
    NSMutableArray *_dispositions;
    NSMutableArray *_excludeds;
    NSMutableArray *_includeds;
    NSMutableArray *_preapprovals;
    struct {
        unsigned int clock:1;
    } _has;
}

+ (Class)preapprovalsType;
+ (Class)dispositionsType;
+ (Class)excludedType;
+ (Class)includedType;
@property(retain, nonatomic) NSMutableArray *preapprovals; // @synthesize preapprovals=_preapprovals;
@property(retain, nonatomic) NSMutableArray *dispositions; // @synthesize dispositions=_dispositions;
@property(retain, nonatomic) NSMutableArray *excludeds; // @synthesize excludeds=_excludeds;
@property(retain, nonatomic) NSMutableArray *includeds; // @synthesize includeds=_includeds;
@property(nonatomic) unsigned long long clock; // @synthesize clock=_clock;
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
- (id)preapprovalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)preapprovalsCount;
- (void)addPreapprovals:(id)arg1;
- (void)clearPreapprovals;
- (id)dispositionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dispositionsCount;
- (void)addDispositions:(id)arg1;
- (void)clearDispositions;
- (id)excludedAtIndex:(unsigned long long)arg1;
- (unsigned long long)excludedsCount;
- (void)addExcluded:(id)arg1;
- (void)clearExcludeds;
- (id)includedAtIndex:(unsigned long long)arg1;
- (unsigned long long)includedsCount;
- (void)addIncluded:(id)arg1;
- (void)clearIncludeds;
@property(nonatomic) BOOL hasClock;

@end

