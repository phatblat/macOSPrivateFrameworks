//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMRemoteURLConnection.h"

#import "FTMessageDeliveryRemoteURLConnection.h"

@class NSString, NSURLRequest;

@interface IMRemoteURLConnection (FTMessageDelivery_HTTP) <FTMessageDeliveryRemoteURLConnection>

// Remaining properties
@property BOOL alwaysForceCellular;
@property(copy) CDUnknownBlockType block;
@property(retain) NSString *bundleIdentifierForDataUsage;
@property int concurrentConnections;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property BOOL disableKeepAlive;
@property BOOL forceCellularIfPossible;
@property(readonly) unsigned long long hash;
@property int keepAliveCell;
@property int keepAliveWifi;
@property(retain) NSURLRequest *request;
@property BOOL requireIDSHost;
@property BOOL shouldUsePipelining;
@property(readonly) Class superclass;
@end

