//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue, NSXPCListener;

@interface CKDCloudDatabaseServer : NSObject
{
    int _tccToken;
    NSXPCListener *_xpcListener;
    NSMutableArray *_connectedClients;
    NSMutableDictionary *_recentClientsByProcessName;
    NSObject<OS_dispatch_source> *_sighandlerSource;
    NSOperationQueue *_clientTeardownQueue;
    unsigned long long _stateHandle;
    NSObject<OS_dispatch_source> *_statusReportRequestSource;
    NSObject<OS_dispatch_queue> *_statusReportQueue;
    NSObject<OS_dispatch_queue> *_statusReportCallbackQueue;
    NSMutableArray *_statusReportCallbacks;
}

+ (id)sharedServer;
@property(nonatomic) int tccToken; // @synthesize tccToken=_tccToken;
@property(retain, nonatomic) NSMutableArray *statusReportCallbacks; // @synthesize statusReportCallbacks=_statusReportCallbacks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statusReportCallbackQueue; // @synthesize statusReportCallbackQueue=_statusReportCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statusReportQueue; // @synthesize statusReportQueue=_statusReportQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *statusReportRequestSource; // @synthesize statusReportRequestSource=_statusReportRequestSource;
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) NSOperationQueue *clientTeardownQueue; // @synthesize clientTeardownQueue=_clientTeardownQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *sighandlerSource; // @synthesize sighandlerSource=_sighandlerSource;
@property(retain, nonatomic) NSMutableDictionary *recentClientsByProcessName; // @synthesize recentClientsByProcessName=_recentClientsByProcessName;
@property(retain, nonatomic) NSMutableArray *connectedClients; // @synthesize connectedClients=_connectedClients;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void).cxx_destruct;
- (void)kickOffPendingLongLivedOperations;
- (void)statusReportWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dumpStatusReportToFileHandle:(id)arg1;
- (void)_dumpStatusReportToFileHandle:(id)arg1;
- (void)_dumpStatusReportArrayToOsTrace:(id)arg1;
- (id)CKStatusReportArray;
- (void)_cleanRecentClients;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)dealloc;
- (id)init;

@end

