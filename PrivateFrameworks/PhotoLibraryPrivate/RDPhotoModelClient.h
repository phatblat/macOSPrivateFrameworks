//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection, PFDispatchQueue;

@interface RDPhotoModelClient : NSObject
{
    NSXPCConnection *_connection;
    PFDispatchQueue *_queue;
}

- (void).cxx_destruct;
- (void)performMaintenanceWithLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)collectContactsForContactIdentifiers:(id)arg1 withLibrary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unquarantineModelAtAddress:(id)arg1 withLibrary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processUnpairingMasterList:(id)arg1 withLibrary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processPairingList:(id)arg1 duplicateDetection:(BOOL)arg2 withLibrary:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)processDuplicateGraphPersonsInDuplicateSets:(id)arg1 withLibrary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processDuplicatesWithPersonSelectionList:(id)arg1 withLibrary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processDuplicatesWithMasterSelectionList:(id)arg1 forceRefingerprintingUnsyncedMastersInSelectionList:(BOOL)arg2 withLibrary:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)emptyTrashWithLibrary:(id)arg1 withReason:(unsigned short)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)emptyTrashItemsImmediatelyForModelIds:(id)arg1 option:(unsigned char)arg2 withLibrary:(id)arg3 withReason:(unsigned short)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)disconnect;
- (void)_connectToLibrary:(id)arg1 WithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
