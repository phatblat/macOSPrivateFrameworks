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
@property(copy, nonatomic) NSData *bodyData;
@property(nonatomic) int tuscanyStatus;
@property(nonatomic) int lookupSelectionType;
@property(nonatomic) int triggerEvent;
@property(nonatomic) int endpoint;
@property(copy, nonatomic) NSDictionary *headers;
@property(copy, nonatomic) NSString *url;
@property(nonatomic) unsigned long long queryId;
@property(copy, nonatomic) NSString *uuid;
@property(copy, nonatomic) NSString *input;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (void)setHeaders:(NSString *)arg1 forKey:(NSString *)arg2;
- (BOOL)getHeaders:(id *)arg1 forKey:(NSString *)arg2;
@end

