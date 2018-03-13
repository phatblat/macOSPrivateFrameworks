//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol _CPCacheHitFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) BOOL hasUuid;
@property(copy, nonatomic) NSString *uuid;
@property(readonly, nonatomic) BOOL hasTriggerEvent;
@property(nonatomic) int triggerEvent;
@property(readonly, nonatomic) BOOL hasInput;
@property(copy, nonatomic) NSString *input;
@property(readonly, nonatomic) BOOL hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

