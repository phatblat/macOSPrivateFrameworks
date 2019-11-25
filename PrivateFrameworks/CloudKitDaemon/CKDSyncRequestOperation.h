//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

__attribute__((visibility("hidden")))
@interface CKDSyncRequestOperation : CKDOperation
{
    CDUnknownBlockType _willBeginSyncRequestWithClientsBlock;
    CDUnknownBlockType _clientSyncStartedBlock;
    CDUnknownBlockType _clientSyncProgressedBlock;
    CDUnknownBlockType _clientSyncCompletedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clientSyncCompletedBlock; // @synthesize clientSyncCompletedBlock=_clientSyncCompletedBlock;
@property(copy, nonatomic) CDUnknownBlockType clientSyncProgressedBlock; // @synthesize clientSyncProgressedBlock=_clientSyncProgressedBlock;
@property(copy, nonatomic) CDUnknownBlockType clientSyncStartedBlock; // @synthesize clientSyncStartedBlock=_clientSyncStartedBlock;
@property(copy, nonatomic) CDUnknownBlockType willBeginSyncRequestWithClientsBlock; // @synthesize willBeginSyncRequestWithClientsBlock=_willBeginSyncRequestWithClientsBlock;
- (void).cxx_destruct;
- (void)main;

@end

