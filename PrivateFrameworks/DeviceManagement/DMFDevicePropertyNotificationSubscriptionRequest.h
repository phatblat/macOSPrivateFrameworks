//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSArray;

@interface DMFDevicePropertyNotificationSubscriptionRequest : CATTaskRequest
{
    NSArray *_propertyKeys;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

