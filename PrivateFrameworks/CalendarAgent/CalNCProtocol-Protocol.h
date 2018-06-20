//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol CalNCProtocol <NSObject>
@property(nonatomic) BOOL hideAllNotifications;
- (void)updateNCMessages;
- (void)remindersBadgeCountForContactIdentifier:(NSString *)arg1 reply:(void (^)(NSNumber *))arg2;
- (void)remindersBadgeCount:(void (^)(NSNumber *))arg1;
- (void)calendarBadgeCount:(void (^)(NSNumber *))arg1;
- (void)removeNotificationIDs:(NSArray *)arg1;
- (void)start;
@end
