//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol _CPCardSectionForFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *resultId;
@property(copy, nonatomic) NSString *actionDestination;
@property(copy, nonatomic) NSString *actionTarget;
@property(copy, nonatomic) NSString *cardSectionId;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

