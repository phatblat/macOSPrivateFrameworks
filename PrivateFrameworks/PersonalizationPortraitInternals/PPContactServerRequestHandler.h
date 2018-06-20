//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PPContactServerProtocol.h"

@class NSString, PPXPCServerPipelinedBatchQueryManager;

@interface PPContactServerRequestHandler : NSObject <PPContactServerProtocol>
{
    id <PPContactClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
}

@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void).cxx_destruct;
- (void)contactNameRecordChangesForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (void)contactNameRecordChangesForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contactNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (void)unblockPendingQueries;
- (void)setRemoteObjectProxy:(id)arg1;
- (id)init;

@end

