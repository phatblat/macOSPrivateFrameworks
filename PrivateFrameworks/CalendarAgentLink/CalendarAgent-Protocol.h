//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalendarLink.h"

@class ACAccount, CalDateRange, CalDelegateUserInfo, CalLocation, NSArray, NSData, NSDate, NSString, NSURL;

@protocol CalendarAgent <CalendarLink>
- (void)openURL:(NSURL *)arg1;
- (void)setPreventShutdownAfterIAMigration:(BOOL)arg1;
- (void)processAccountRemove:(ACAccount *)arg1;
- (void)processAccountChange:(ACAccount *)arg1 withChangedKeys:(NSArray *)arg2;
- (void)processAccountChangeFailure;
- (void)processAccountAdd:(ACAccount *)arg1;
- (void)migrateLocalDataIntoParentAccountWithID:(NSString *)arg1 reply:(void (^)(BOOL))arg2;
- (void)migrateIntoLocalFromAccountWithID:(NSString *)arg1 includeEvents:(BOOL)arg2 includeReminders:(BOOL)arg3 reply:(void (^)(BOOL))arg4;
- (void)itemsExistForAccountWithID:(NSString *)arg1 withReply:(void (^)(BOOL, BOOL))arg2;
- (void)localCalendarsExistsWithReply:(void (^)(BOOL, BOOL))arg1;
- (void)parentAccountForAccountWithID:(NSString *)arg1 returnCachedVersion:(BOOL)arg2 reply:(void (^)(ACAccount *))arg3;
- (void)moveUnmigratedPrincipalsToSpecialDirectory;
- (void)internetAccountsMigrationWillStartWithReply:(void (^)(void))arg1;
- (void)internetAccountsMigrationDidFinish;
- (void)authenticateAccount:(ACAccount *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)temporarilyAcceptCertificates:(NSArray *)arg1 forHost:(NSString *)arg2;
- (void)remindersBadgeCount:(void (^)(NSNumber *))arg1;
- (void)calendarBadgeCount:(void (^)(NSNumber *))arg1;
- (void)attemptLocationGeocodeOnEvents;
- (void)calMeCardWithReply:(void (^)(CalMeCard *))arg1;
- (void)cacheWeatherForEventsWithStartDateBetweenStart:(NSDate *)arg1 andEnd:(NSDate *)arg2;
- (void)sendEmailTo:(NSArray *)arg1 withSubject:(NSString *)arg2 withBody:(NSString *)arg3 withAttachment:(NSString *)arg4 attachmentFilename:(NSString *)arg5;
- (void)restoreToBackupWithBookmark:(NSData *)arg1 reply:(void (^)(BOOL))arg2;
- (void)travelTimeFrom:(CalLocation *)arg1 to:(CalLocation *)arg2 arrivalDate:(NSDate *)arg3 withRouteTypes:(NSArray *)arg4 withCompletionBlock:(void (^)(NSDictionary *))arg5;
- (void)travelTimeFrom:(CalLocation *)arg1 to:(CalLocation *)arg2 arrivalDate:(NSDate *)arg3 withRouteType:(NSString *)arg4 withCompletionBlock:(void (^)(CalRoute *, NSError *))arg5;
- (void)toggleAllowWriteForGrantedDelegate:(CalDelegateUserInfo *)arg1 inAccount:(ACAccount *)arg2 reply:(void (^)(CalDelegateUserInfo *, NSError *))arg3;
- (void)removeGrantedDelegate:(CalDelegateUserInfo *)arg1 fromAccount:(ACAccount *)arg2 reply:(void (^)(CalDelegateUserInfo *, NSError *))arg3;
- (void)addGrantedDelegate:(CalDelegateUserInfo *)arg1 toAccount:(ACAccount *)arg2 reply:(void (^)(CalDelegateUserInfo *, NSError *))arg3;
- (void)getGrantedDelegateListForAccount:(ACAccount *)arg1 reply:(void (^)(NSArray *, ACAccount *, NSError *))arg2;
- (void)removeDelegate:(CalDelegateUserInfo *)arg1 fromAccount:(ACAccount *)arg2 reply:(void (^)(ACAccount *, CalDelegateUserInfo *, NSError *))arg3;
- (void)addDelegate:(CalDelegateUserInfo *)arg1 toAccount:(ACAccount *)arg2 reply:(void (^)(ACAccount *, CalDelegateUserInfo *, NSError *))arg3;
- (void)refreshDelegateListForAccount:(ACAccount *)arg1 reply:(void (^)(NSArray *, ACAccount *, NSError *))arg2;
- (void)expandGroupForCalDAVprincipalWithObjectIDString:(NSString *)arg1 groupIdentifier:(NSString *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)principalPropertSearchForCalDAVPrincipalWithObjectIDString:(NSString *)arg1 searchString:(NSString *)arg2 searchTypes:(NSArray *)arg3 reply:(void (^)(NSArray *))arg4;
- (void)isLocalToServerInProgressForEvents:(void (^)(BOOL))arg1;
- (void)isLocalToServerInProgressForReminders:(void (^)(BOOL))arg1;
- (void)isPersistenceAvailableWithReply:(void (^)(BOOL))arg1;
- (void)getUserAvailabilityForObjectID:(NSString *)arg1 maskedSharedUID:(NSString *)arg2 addresses:(NSArray *)arg3 timeRange:(CalDateRange *)arg4 reply:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg5;
- (void)setOfficeHoursForPrincipalObjectIDString:(NSString *)arg1 officeHours:(NSData *)arg2;
- (void)getOfficeHoursForPrincipalObjectIDString:(NSString *)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)setDefaultCalendarForRemindersToCalendarIdentifier:(NSString *)arg1;
- (void)getDefaultCalendarForRemindersCalendarIdentifierWithReply:(void (^)(NSString *))arg1;
- (void)setDefaultCalendarForEventsToCalendarIdentifier:(NSString *)arg1;
- (void)getDefaultCalendarForEventsCalendarIdentifierWithReply:(void (^)(NSString *))arg1;
- (void)getPreference:(NSString *)arg1 reply:(void (^)(NSObject *))arg2;
- (void)clearETags;
- (void)clearCTagsAndSyncTokens;
- (void)processServerToLocalMigrationGroups;
- (void)refreshAllWithFlags:(long long)arg1;
- (void)refreshPrincipalWithObjectID:(NSString *)arg1 withFlags:(long long)arg2;
- (void)refreshNodeWithID:(NSString *)arg1 withFlags:(long long)arg2;
- (void)refreshPropertiesOnAllPrincipalsWithBackoff:(unsigned long long)arg1;
- (void)updateSessionCacheWithReply:(void (^)(NSDictionary *))arg1;
- (void)stopDebugQueueWithObjectID:(NSString *)arg1;
- (void)startDebugQueueWithObjectID:(NSString *)arg1;
- (void)sessionDebugInfoWithObjectID:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)pokeNotificationService;
- (void)fullySynchronizeAllSessions;
- (void)reactivateSessionsWithObjectIDs:(NSArray *)arg1;
- (void)refreshSettingsChangedWithObjectIDs:(NSArray *)arg1;
- (void)calDAVCalendarDeletedWithUID:(NSString *)arg1;
- (void)principalDeletedWithObjectID:(NSString *)arg1;
- (void)updatePushStateForObjectIDs:(NSArray *)arg1;
- (void)reloadNetworkObjects;
- (void)removeNaturalLanguageSuggestedEventCalendar;
- (void)removeSuggestedEventCalendar;
- (void)createNaturalLanguageSuggestedEventCalendar;
- (void)createSuggestedEventCalendar;
- (void)registerWithAgent;
- (void)disableBirthdayCalendars;
- (void)addBirthdayCalendars;
- (void)disableHolidayCalendars;
- (void)addHolidayCalendars;
- (void)reinviteSharees:(NSArray *)arg1 withCalendarObjectIDString:(NSString *)arg2;
- (void)setupCoreDataXPCServerWithCompletionHandler:(void (^)(BOOL))arg1;
@end

