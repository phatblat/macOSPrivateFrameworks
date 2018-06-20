//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PPConnectionsServerProtocol.h"

@class NSString, PPXPCServerPipelinedBatchQueryManager;

@interface PPConnectionsServerRequestHandler : NSObject <PPConnectionsServerProtocol>
{
    id <PPConnectionsClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
}

@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void).cxx_destruct;
- (void)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 queryId:(unsigned long long)arg6;
- (void)recentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 queryId:(unsigned long long)arg3;
- (void)unblockPendingQueries;
- (void)setRemoteObjectProxy:(id)arg1;
- (id)init;

@end

