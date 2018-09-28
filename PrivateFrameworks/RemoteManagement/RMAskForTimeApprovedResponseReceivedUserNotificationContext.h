//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteManagement/RMUserNotificationContext.h>

@class NSString;

@interface RMAskForTimeApprovedResponseReceivedUserNotificationContext : RMUserNotificationContext
{
    NSString *_parentName;
    NSString *_requestedResourceName;
    double _amountGranted;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double amountGranted; // @synthesize amountGranted=_amountGranted;
@property(copy, nonatomic) NSString *requestedResourceName; // @synthesize requestedResourceName=_requestedResourceName;
@property(copy, nonatomic) NSString *parentName; // @synthesize parentName=_parentName;
- (void).cxx_destruct;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 parentName:(id)arg2 requestedResourceName:(id)arg3 amountGranted:(double)arg4;

@end

