//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol _CPStartNetworkSearchFeedback <NSObject>
@property(readonly, nonatomic) unsigned long long whichTrigger;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) BOOL hasTuscanyStatus;
@property(nonatomic) int tuscanyStatus;
@property(readonly, nonatomic) BOOL hasLookupSelectionType;
@property(nonatomic) int lookupSelectionType;
@property(readonly, nonatomic) BOOL hasTriggerEvent;
@property(nonatomic) int triggerEvent;
@property(readonly, nonatomic) BOOL hasEndpoint;
@property(nonatomic) int endpoint;
@property(copy, nonatomic) NSDictionary *headers;
@property(readonly, nonatomic) BOOL hasUrl;
@property(copy, nonatomic) NSString *url;
@property(readonly, nonatomic) BOOL hasQueryId;
@property(nonatomic) unsigned long long queryId;
@property(readonly, nonatomic) BOOL hasUuid;
@property(copy, nonatomic) NSString *uuid;
@property(readonly, nonatomic) BOOL hasInput;
@property(copy, nonatomic) NSString *input;
@property(readonly, nonatomic) BOOL hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (void)setHeaders:(NSString *)arg1 forKey:(NSString *)arg2;
- (BOOL)getHeaders:(id *)arg1 forKey:(NSString *)arg2;
@end

