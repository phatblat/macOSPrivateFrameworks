//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBRunActionEvent : PBCodable <NSCopying>
{
    NSString *_actionName;
    NSString *_key;
    NSString *_runSource;
    int _source;
    BOOL _completed;
    struct {
        unsigned int source:1;
        unsigned int completed:1;
    } _has;
}

@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSString *runSource; // @synthesize runSource=_runSource;
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
@property(readonly, nonatomic) BOOL hasActionName;
@property(readonly, nonatomic) BOOL hasRunSource;
- (int)StringAsSource:(id)arg1;
- (id)sourceAsString:(int)arg1;
@property(nonatomic) BOOL hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) BOOL hasKey;

@end

