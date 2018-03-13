//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPCardViewAppearFeedback.h"
#import "_CPProcessableFeedback.h"

@class NSData, NSDictionary, NSString, _CPCardForFeedback;

@interface _CPCardViewAppearFeedback : PBCodable <_CPProcessableFeedback, _CPCardViewAppearFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int level:1;
    } _has;
    unsigned int _level;
    unsigned long long _timestamp;
    _CPCardForFeedback *_card;
    NSString *_fbr;
}

@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) unsigned int level; // @synthesize level=_level;
@property(retain, nonatomic) _CPCardForFeedback *card; // @synthesize card=_card;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasFbr;
@property(readonly, nonatomic) BOOL hasLevel;
@property(readonly, nonatomic) BOOL hasCard;
@property(readonly, nonatomic) BOOL hasTimestamp;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) BOOL requiresQueryId;
@property(readonly, nonatomic) id feedbackJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

