//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBCreateTaskListIntent.h"

@class NSArray, NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBCreateTaskListIntent : PBCodable <_INPBCreateTaskListIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBDataString *_groupName;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_taskTitles;
    _INPBDataString *_title;
}

+ (Class)taskTitlesType;
@property(retain, nonatomic) _INPBDataString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *taskTitles; // @synthesize taskTitles=_taskTitles;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDataString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTitle;
- (id)taskTitlesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long taskTitlesCount;
- (void)addTaskTitles:(id)arg1;
- (void)clearTaskTitles;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(readonly, nonatomic) BOOL hasGroupName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

