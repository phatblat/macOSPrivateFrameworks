//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol _CPCBAEngagementFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) BOOL hasUrl;
@property(copy, nonatomic) NSString *url;
@property(readonly, nonatomic) BOOL hasCbaType;
@property(nonatomic) int cbaType;
@property(readonly, nonatomic) BOOL hasQueryId;
@property(nonatomic) unsigned long long queryId;
@property(readonly, nonatomic) BOOL hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

