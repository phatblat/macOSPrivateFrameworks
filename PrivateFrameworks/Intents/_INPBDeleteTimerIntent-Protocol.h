//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _INPBIntentMetadata, _INPBTimer;

@protocol _INPBDeleteTimerIntent <NSObject>
@property(readonly, nonatomic) BOOL hasTargetTimer;
@property(retain, nonatomic) _INPBTimer *targetTimer;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) BOOL hasDeleteMultiple;
@property(nonatomic) BOOL deleteMultiple;
@end

