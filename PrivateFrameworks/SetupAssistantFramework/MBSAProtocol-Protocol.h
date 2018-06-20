//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL, NSUUID;

@protocol MBSAProtocol <NSObject>
- (void)readInitialSwitchedServerState:(void (^)(NSDictionary *))arg1;
- (void)switchServerOfType:(NSString *)arg1 toEnvironment:(NSString *)arg2 withCompletionBlock:(void (^)(BOOL))arg3;
- (void)setHardwareWarrantyCookie:(void (^)(BOOL))arg1;
- (void)requestConfigurationFinalizationForUserUUID:(NSUUID *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)requestBridgedProfileWithAuthorization:(NSDictionary *)arg1 reply:(void (^)(BOOL, NSData *, NSDictionary *, NSError *))arg2;
- (void)requestCachedActivationRecordWithReply:(void (^)(BOOL, NSDictionary *, NSError *))arg1;
- (void)abortActivationStatusRequest;
- (void)requestBridgedActivationRecordWithReply:(void (^)(BOOL, NSDictionary *, NSError *))arg1;
- (void)requestBridgedActivationStatusWithReply:(void (^)(BOOL, NSDictionary *, NSError *))arg1;
- (void)removeHardwareWarrantyCookie:(void (^)(BOOL))arg1;
- (void)setDidRunFLOCookie:(void (^)(BOOL))arg1;
- (void)setDiagnosticsCookie:(void (^)(BOOL))arg1;
- (void)setSendDiagnosticsToApple:(BOOL)arg1 sendThirdPartyDiagnostics:(BOOL)arg2 withCompletionBlock:(void (^)(BOOL))arg3;
- (void)removeLanguageChooserCookie:(void (^)(BOOL))arg1;
- (void)removeResumeBuddyCookie:(void (^)(BOOL))arg1;
- (void)getResumeBuddyCookieReason:(void (^)(BOOL, NSString *))arg1;
- (void)setResumeBuddyCookieForReason:(NSString *)arg1 withCompletionBlock:(void (^)(BOOL))arg2;
- (void)removeMigrationCookie:(void (^)(BOOL))arg1;
- (void)setMigrationCookie:(void (^)(BOOL))arg1;
- (void)setMacBuddyDoneCookie:(void (^)(BOOL))arg1;
- (void)setAutoTimeZoneEnabled:(void (^)(BOOL))arg1;
- (void)fmmIsEnabled:(void (^)(BOOL))arg1;
- (void)setOSVersioniCloudCreatedForUser:(NSString *)arg1 withCompletionBlock:(void (^)(BOOL))arg2;
- (void)saveDocumentationData:(NSData *)arg1 withLocalizedName:(NSString *)arg2 forLocale:(NSString *)arg3 toFileNamed:(NSString *)arg4 completionBlock:(void (^)(BOOL))arg5;
- (void)removeIncompatibleApplicationDataFileAtRoot:(NSURL *)arg1 reply:(void (^)(BOOL))arg2;
- (void)restart:(void (^)(BOOL))arg1;
- (void)shutdown:(void (^)(BOOL))arg1;
- (void)facelessConfigureFromInstallerCookie:(void (^)(BOOL))arg1;
- (void)getFacelessConfigurationDictionary:(void (^)(BOOL, NSDictionary *))arg1;
- (void)createTeslaUsersWithInfo:(NSArray *)arg1 completionBlock:(void (^)(BOOL, BOOL))arg2;
- (void)createUserWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(unsigned int))arg2;
- (void)writeMachineDefaults:(NSDictionary *)arg1 toApplicationID:(NSString *)arg2 withCompletionHandler:(void (^)(BOOL))arg3;
- (void)removeBuddyUserHome:(void (^)(BOOL))arg1;
- (void)tellBuddyAppToQuit:(void (^)(BOOL))arg1;
- (void)terminateBuddySessionTransitioningToUID:(unsigned int)arg1 withCompletionBlock:(void (^)(BOOL))arg2;
- (void)getBuddyWindowRepresentation:(void (^)(NSDictionary *))arg1;
- (void)switchToBuddySession:(void (^)(BOOL))arg1;
- (void)buddyUserIsLoggedIn:(void (^)(BOOL))arg1;
- (void)getBuddyUser:(void (^)(BOOL, unsigned long long, unsigned long long, NSDictionary *, unsigned int))arg1;
- (void)establishMacBuddyUserWithPrimaryType:(unsigned long long)arg1 secondaryType:(unsigned long long)arg2 additionalInfo:(NSDictionary *)arg3 fromUID:(unsigned int)arg4 withCompletionBlock:(void (^)(BOOL))arg5;
- (void)setTimeServer:(void (^)(BOOL))arg1;
- (void)postMacBuddyTasks:(void (^)(BOOL))arg1;
- (void)preMacBuddyTasks:(void (^)(BOOL))arg1;
- (void)establishConnection:(void (^)(BOOL))arg1;
@end

