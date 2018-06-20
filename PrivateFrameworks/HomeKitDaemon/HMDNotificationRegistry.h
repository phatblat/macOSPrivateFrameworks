//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSSecureCoding.h"

@class NSMutableDictionary;

@interface HMDNotificationRegistry : HMFObject <NSSecureCoding>
{
    NSMutableDictionary *_notificationRegistry;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)doesKey:(id)arg1 matchMediaProfile:(id)arg2;
+ (id)keyForProperty:(id)arg1 mediaProfile:(id)arg2;
+ (id)keyForCharacteristic:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *notificationRegistry; // @synthesize notificationRegistry=_notificationRegistry;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)auditUsersForNotifications:(id)arg1 forHome:(id)arg2;
- (void)disableNotification:(id)arg1 user:(id)arg2 ignoreLockReq:(BOOL)arg3 home:(id)arg4;
- (void)deregisterUsers:(id)arg1 forHome:(id)arg2;
- (id)allCharacteristicIdentifiers;
- (id)usersRegisteredForNotificationsForProperties:(id)arg1;
- (id)usersRegisteredForNotificationsForCharacteristics:(id)arg1;
- (id)filterProperties:(id)arg1 forUser:(id)arg2;
- (id)filterCharacteristics:(id)arg1 forUser:(id)arg2;
- (BOOL)removeRegistrationsForMediaProfile:(id)arg1;
- (BOOL)disableNotificationForProperties:(id)arg1 forUser:(id)arg2;
- (BOOL)enableNotificationForProperties:(id)arg1 forUser:(id)arg2;
- (BOOL)disableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2 characteristicsToDisableEvents:(id *)arg3;
- (BOOL)enableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2;
- (id)shortDescription;
- (id)init;

@end

