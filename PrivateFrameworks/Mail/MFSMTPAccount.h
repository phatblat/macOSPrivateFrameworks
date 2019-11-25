//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFDeliveryAccount.h>

@class ECSMTPAccount, MFSMTPConnection, NSOperationQueue, NSTimer;

@interface MFSMTPAccount : MFDeliveryAccount
{
    MFSMTPConnection *_connection;
    id _smtpAccountLock;
    NSTimer *_timer;
    NSOperationQueue *_connectionCleanupQueue;
    long long _lastTimerSetTime;
}

+ (id)standardSSLPorts;
+ (id)standardPorts;
+ (id)csAccountTypeString;
+ (id)accountTypeString;
@property(nonatomic) long long lastTimerSetTime; // @synthesize lastTimerSetTime=_lastTimerSetTime;
@property(readonly, nonatomic) NSOperationQueue *connectionCleanupQueue; // @synthesize connectionCleanupQueue=_connectionCleanupQueue;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)_disconnect:(id)arg1;
- (void)releaseAllConnections;
- (void)_connectionExpired:(id)arg1;
- (void)_setTimer;
- (BOOL)canAuthenticateWithCurrentCredentials;
- (void)checkInConnection:(id)arg1;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
- (id)saslProfileName;
- (BOOL)_parentSystemAccountDidUpdateProperties:(id)arg1 changedSystemAccount:(char *)arg2;
- (id)newDelivererWithMessage:(id)arg1;
- (id)init;
- (id)initWithSystemAccount:(id)arg1;
- (id)objectSpecifier;

// Remaining properties
@property(readonly) ECSMTPAccount *baseAccount; // @dynamic baseAccount;

@end

