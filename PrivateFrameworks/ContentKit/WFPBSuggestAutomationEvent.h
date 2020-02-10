//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBSuggestAutomationEvent : PBCodable <NSCopying>
{
    NSString *_key;
    NSString *_suggestedAutomationIdentifier;
    BOOL _completed;
    BOOL _interacted;
    struct {
        unsigned int completed:1;
        unsigned int interacted:1;
    } _has;
}

@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(nonatomic) BOOL interacted; // @synthesize interacted=_interacted;
@property(retain, nonatomic) NSString *suggestedAutomationIdentifier; // @synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
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
@property(nonatomic) BOOL hasCompleted;
@property(nonatomic) BOOL hasInteracted;
@property(readonly, nonatomic) BOOL hasSuggestedAutomationIdentifier;
@property(readonly, nonatomic) BOOL hasKey;

@end
