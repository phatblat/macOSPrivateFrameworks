//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FPOperationClient.h"

@class FPActionOperationLocator, NSError;

@protocol FPDaemonActionOperationClient <FPOperationClient>
- (void)remoteOperationFinishedSendingPastUpdates;
- (void)remoteOperationProgressesAreReady;
- (void)remoteOperationCompletedRoot:(FPActionOperationLocator *)arg1 resultingItem:(FPActionOperationLocator *)arg2 error:(NSError *)arg3 completion:(void (^)(void))arg4;
- (void)remoteOperationCreatedRoot:(FPActionOperationLocator *)arg1 resultingItem:(FPActionOperationLocator *)arg2 completion:(void (^)(void))arg3;
@end
