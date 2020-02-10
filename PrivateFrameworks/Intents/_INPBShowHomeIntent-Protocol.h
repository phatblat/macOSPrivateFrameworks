//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBDateTimeRange, _INPBHomeFilter, _INPBIntentMetadata;

@protocol _INPBShowHomeIntent <NSObject>
+ (Class)filtersType;
@property(readonly, nonatomic) BOOL hasTime;
@property(retain, nonatomic) _INPBDateTimeRange *time;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long filtersCount;
@property(copy, nonatomic) NSArray *filters;
- (_INPBHomeFilter *)filtersAtIndex:(unsigned long long)arg1;
- (void)addFilters:(_INPBHomeFilter *)arg1;
- (void)clearFilters;
@end
