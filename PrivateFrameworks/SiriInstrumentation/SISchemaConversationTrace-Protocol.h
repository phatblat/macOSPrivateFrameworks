//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

@protocol SISchemaConversationTrace <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSData *previousTurnID;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

