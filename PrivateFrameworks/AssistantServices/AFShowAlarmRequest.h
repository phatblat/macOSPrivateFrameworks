//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFShowAlarmRequest : AFSiriRequest
{
    NSArray *_alarms;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;

@end

