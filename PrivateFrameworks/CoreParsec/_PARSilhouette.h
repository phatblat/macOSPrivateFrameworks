//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_PARSilhouette.h"

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARSilhouette : PBCodable <_PARSilhouette, NSSecureCoding>
{
    int _portraitVersion;
    NSArray *_topics;
}

@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(nonatomic) int portraitVersion; // @synthesize portraitVersion=_portraitVersion;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (void)addTopics:(id)arg1;
- (void)clearTopics;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
