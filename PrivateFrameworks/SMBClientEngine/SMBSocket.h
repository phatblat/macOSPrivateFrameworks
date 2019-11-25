//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSObject<OS_nw_connection>, NSObject<OS_nw_endpoint>, NSString, SMBPiston;

@interface SMBSocket : NSObject
{
    SMBPiston *pd;
    unsigned long long state;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_endpoint> *remote_endpoint;
    NSObject<OS_dispatch_semaphore> *event_semaphore;
    int nw_conn_state;
    NSObject<OS_dispatch_queue> *nw_conn_queue;
    unsigned int is_NetBIOS;
    unsigned char ipv4v6DotName[46];
    const struct sockaddr *server_addr;
    struct _opaque_pthread_mutex_t io_rqlock;
    NSMutableArray *io_rqlist;
    NSObject<OS_dispatch_queue> *send_queue;
    struct _opaque_pthread_mutex_t skt_lock;
    NSObject<OS_dispatch_queue> *timer_queue;
    NSObject<OS_dispatch_source> *timer;
    unsigned int timer_running;
    NSObject<OS_dispatch_semaphore> *timer_semaphore;
    CDUnknownBlockType event_handler_callback;
    unsigned short _port;
    unsigned int _connectTimeOut;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_dispatch_queue> *_recv_queue;
    NSObject<OS_dispatch_queue> *_signing_queue;
    NSString *_netBiosName;
    NSString *_serverName;
    struct timespec _last_recv;
    struct timespec _last_echo;
}

@property struct timespec last_echo; // @synthesize last_echo=_last_echo;
@property struct timespec last_recv; // @synthesize last_recv=_last_recv;
@property unsigned int connectTimeOut; // @synthesize connectTimeOut=_connectTimeOut;
@property unsigned short port; // @synthesize port=_port;
@property(retain) NSString *serverName; // @synthesize serverName=_serverName;
@property(retain) NSString *netBiosName; // @synthesize netBiosName=_netBiosName;
@property(retain) NSObject<OS_dispatch_queue> *signing_queue; // @synthesize signing_queue=_signing_queue;
@property(retain) NSObject<OS_dispatch_queue> *recv_queue; // @synthesize recv_queue=_recv_queue;
@property(retain) NSObject<OS_nw_connection> *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (int)writeEnabled;
- (void)timeOutCheck;
- (void)setNetBIOSHeader:(unsigned int *)arg1 nbType:(unsigned char)arg2 length:(unsigned int)arg3;
- (int)sendRequest:(id)arg1;
- (int)send:(id)arg1;
- (void)readNBHeader;
- (void)readData:(const void *)arg1;
- (int)processReply:(void *)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (unsigned int)isPerAppVPN;
- (const struct sockaddr *)getServerAddress;
- (unsigned int)getIPv4IPv6DotNameMaxLength;
- (char *)getIPv4IPv6DotName;
- (CDUnknownBlockType)getEventHandler;
- (void)callEventHandler:(unsigned int)arg1 contextPtr:(id)arg2 returnValue:(unsigned int)arg3;
- (void)closeSocket;
- (int)connectSocket;
- (int)openSocket:(id)arg1;

@end

