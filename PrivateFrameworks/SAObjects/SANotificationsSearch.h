//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SANotificationsSearch : SABaseClientBoundCommand
{
}

+ (id)notificationsSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)notificationsSearch;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *supportsSpokenNotifications;
@property(copy, nonatomic) NSString *sourceAppId;
@property(copy, nonatomic) NSString *priority;
@property(copy, nonatomic) NSString *afterNotificationId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
