//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDate, NSString;

@interface SARemoveFromActivityStream : SABaseClientBoundCommand
{
}

+ (id)removeFromActivityStreamWithDictionary:(id)arg1 context:(id)arg2;
+ (id)removeFromActivityStream;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *visibility;
@property(copy, nonatomic) NSDate *toDate;
@property(copy, nonatomic) NSString *taskType;
@property(copy, nonatomic) NSString *streamType;
@property(copy, nonatomic) NSDate *fromDate;
@property(copy, nonatomic) NSString *activityType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

