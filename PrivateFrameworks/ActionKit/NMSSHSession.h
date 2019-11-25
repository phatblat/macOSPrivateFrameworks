//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMSFTP, NMSSHChannel, NMSSHHostConfig, NSError, NSNumber, NSString;

@interface NMSSHSession : NSObject
{
    BOOL _connected;
    id <NMSSHSessionDelegate> _delegate;
    NMSSHHostConfig *_hostConfig;
    NSString *_host;
    NSNumber *_port;
    NSString *_username;
    long long _fingerprintHash;
    NSString *_banner;
    struct _LIBSSH2_SESSION *_session;
    struct __CFSocket *_socket;
    struct _LIBSSH2_AGENT *_agent;
    CDUnknownBlockType _kbAuthenticationBlock;
    NMSSHChannel *_channel;
    NMSFTP *_sftp;
}

+ (id)URLForHost:(id)arg1;
+ (id)connectToHost:(id)arg1 withUsername:(id)arg2;
+ (id)connectToHost:(id)arg1 port:(long long)arg2 withUsername:(id)arg3;
@property(retain, nonatomic) NMSFTP *sftp; // @synthesize sftp=_sftp;
@property(retain, nonatomic) NMSSHChannel *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) CDUnknownBlockType kbAuthenticationBlock; // @synthesize kbAuthenticationBlock=_kbAuthenticationBlock;
@property(nonatomic) struct _LIBSSH2_AGENT *agent; // @synthesize agent=_agent;
@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property(readonly, nonatomic) struct __CFSocket *socket; // @synthesize socket=_socket;
@property(nonatomic, getter=rawSession) struct _LIBSSH2_SESSION *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *banner; // @synthesize banner=_banner;
@property(nonatomic) long long fingerprintHash; // @synthesize fingerprintHash=_fingerprintHash;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NMSSHHostConfig *hostConfig; // @synthesize hostConfig=_hostConfig;
@property(nonatomic) __weak id <NMSSHSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)keyboardInteractiveRequest:(id)arg1;
- (BOOL)addKnownHostName:(id)arg1 port:(long long)arg2 toFile:(id)arg3 withSalt:(id)arg4;
- (long long)knownHostStatusWithFile:(id)arg1;
- (long long)knownHostStatusInFiles:(id)arg1;
- (id)systemKnownHostsFileName;
- (id)userKnownHostsFileName;
- (id)applicationSupportDirectory;
- (id)fingerprint:(long long)arg1;
- (BOOL)supportsAuthenticationMethod:(id)arg1;
- (id)supportedAuthenticationMethods;
- (BOOL)connectToAgent;
- (BOOL)authenticateByKeyboardInteractiveUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)authenticateByKeyboardInteractive;
- (BOOL)authenticateByInMemoryPublicKey:(id)arg1 privateKey:(id)arg2 andPassword:(id)arg3;
- (BOOL)authenticateByPublicKey:(id)arg1 privateKey:(id)arg2 andPassword:(id)arg3;
- (BOOL)authenticateByPassword:(id)arg1;
@property(readonly, nonatomic, getter=isAuthorized) BOOL authorized;
- (void)disconnect;
- (BOOL)connectWithTimeout:(id)arg1;
- (BOOL)connect;
@property(readonly, nonatomic) NSString *remoteBanner;
@property(readonly, nonatomic) NSError *lastError;
@property(retain, nonatomic) NSNumber *timeout;
- (id)hostIPAddresses;
- (id)initWithHost:(id)arg1 andUsername:(id)arg2;
- (id)initWithHost:(id)arg1 configs:(id)arg2 withDefaultPort:(long long)arg3 defaultUsername:(id)arg4;
- (id)initWithHost:(id)arg1 port:(long long)arg2 andUsername:(id)arg3;

@end

