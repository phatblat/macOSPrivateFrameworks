//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IAAccountSetupInput, IAAccountSetupResult, IAProvider, NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSXPCConnection;

@interface IAAccountCreator : NSObject
{
    NSDictionary *_settings;
    IAAccountSetupResult *_result;
    IAProvider *_provider;
    NSError *_error;
    NSString *_appleID;
    NSString *_createdUID;
    NSObject<OS_dispatch_semaphore> *_accountSetupSema;
    NSString *_providerID;
    NSString *_pluginID;
    NSString *_token;
    BOOL _continueThroughError;
    BOOL _continueWithoutSSL;
    NSXPCConnection *_connection;
    id <IAXPCProtocol> _agent;
    NSObject<OS_dispatch_queue> *_replyQueue;
    IAAccountSetupInput *_input;
}

+ (id)_possibleAppleIDForSettings:(id)arg1;
+ (id)_createIChatAccountWithSettings:(id)arg1 providerID:(id)arg2 error:(id *)arg3;
+ (id)_createAddressBookAccountWithSettings:(id)arg1 providerID:(id)arg2 error:(id *)arg3;
+ (id)_createRemindersAccountWithSettings:(id)arg1 providerID:(id)arg2 error:(id *)arg3;
+ (id)_createICalAccountWithSettings:(id)arg1 providerID:(id)arg2 error:(id *)arg3;
+ (id)_createNotesAccountWithSettings:(id)arg1 providerID:(id)arg2 error:(id *)arg3;
+ (id)_createMailAccountWithSettings:(id)arg1 providerID:(id)arg2 error:(id *)arg3;
+ (id)inputForSettings:(id)arg1 pluginID:(id)arg2;
+ (id)createAccountForApp:(id)arg1 settings:(id)arg2 providerID:(id)arg3 error:(id *)arg4;
+ (id)accountCreatorWithSettings:(id)arg1 pluginID:(id)arg2 providerID:(id)arg3;
@property BOOL continueWithoutSSL; // @synthesize continueWithoutSSL=_continueWithoutSSL;
@property BOOL continueThroughError; // @synthesize continueThroughError=_continueThroughError;
@property(retain) NSString *token; // @synthesize token=_token;
@property(retain) NSString *pluginID; // @synthesize pluginID=_pluginID;
@property(retain) NSString *providerID; // @synthesize providerID=_providerID;
@property(retain) NSDictionary *settings; // @synthesize settings=_settings;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSString *createdUID; // @synthesize createdUID=_createdUID;
@property(retain) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain) IAProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)setResult:(id)arg1;
- (void)_dataPluginSetupCertificateRefused:(id)arg1;
- (void)_dataPluginSetupSucceeded:(id)arg1;
- (void)_dataPluginSetupFailed:(id)arg1;
- (id)_digForAccountType;
- (BOOL)_createForOSXServer;
- (id)_exchangeAutodiscoverForSettings:(id)arg1;
- (BOOL)_createForExchange;
- (BOOL)create;
- (id)_serverAddressForService:(id)arg1;
- (BOOL)_warnAboutMigrationSyncIfNecessary;
- (id)input;
- (void)createAccountWithReply:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1 pluginID:(id)arg2;
- (id)initWithSettings:(id)arg1 plugin:(id)arg2;

@end

