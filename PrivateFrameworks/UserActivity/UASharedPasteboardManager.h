//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UASharedPasteboardManagerResponseProtocol.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, NSXPCConnection, UAPasteboardGeneration;

@interface UASharedPasteboardManager : NSObject <UASharedPasteboardManagerResponseProtocol>
{
    BOOL _remotePasteboardAvaliable;
    BOOL _currentGenerationHasUpdates;
    BOOL _updateScheduled;
    int _disableCount;
    CDUnknownBlockType _localPasteboardWasFetched;
    UAPasteboardGeneration *_currentGeneration;
    NSObject<OS_dispatch_queue> *_serverQ;
    NSXPCConnection *_connection;
    NSXPCConnection *_controllConnection;
    id _controllSyncObject;
    NSObject<OS_dispatch_queue> *_pasteboardReadQ;
    NSSet *_disallowdTypes;
    NSSet *_bomCheckTypes;
    NSDictionary *_typeBOMs;
    NSDictionary *_typeAliases;
    CDUnknownBlockType _completionBlock;
}

+ (BOOL)dontConnectToServer;
+ (id)sharedManager;
+ (void)initialize;
@property CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) NSDictionary *typeAliases; // @synthesize typeAliases=_typeAliases;
@property(retain) NSDictionary *typeBOMs; // @synthesize typeBOMs=_typeBOMs;
@property(retain) NSSet *bomCheckTypes; // @synthesize bomCheckTypes=_bomCheckTypes;
@property(retain) NSSet *disallowdTypes; // @synthesize disallowdTypes=_disallowdTypes;
@property(retain) NSObject<OS_dispatch_queue> *pasteboardReadQ; // @synthesize pasteboardReadQ=_pasteboardReadQ;
@property BOOL updateScheduled; // @synthesize updateScheduled=_updateScheduled;
@property BOOL currentGenerationHasUpdates; // @synthesize currentGenerationHasUpdates=_currentGenerationHasUpdates;
@property BOOL remotePasteboardAvaliable; // @synthesize remotePasteboardAvaliable=_remotePasteboardAvaliable;
@property(retain) id controllSyncObject; // @synthesize controllSyncObject=_controllSyncObject;
@property int disableCount; // @synthesize disableCount=_disableCount;
@property(retain) NSXPCConnection *controllConnection; // @synthesize controllConnection=_controllConnection;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) NSObject<OS_dispatch_queue> *serverQ; // @synthesize serverQ=_serverQ;
@property(retain) UAPasteboardGeneration *currentGeneration; // @synthesize currentGeneration=_currentGeneration;
@property(copy) CDUnknownBlockType localPasteboardWasFetched; // @synthesize localPasteboardWasFetched=_localPasteboardWasFetched;
- (void).cxx_destruct;
- (void)tellClientDebuggingEnabled:(BOOL)arg1 logFileHandle:(id)arg2;
- (void)fetchPasteboardStatus:(CDUnknownBlockType)arg1;
- (void)fetchPasteboardDataForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)doClearLocalPasteboardInfo;
- (void)fetchPasteboardTypesForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)requestPasteboardFetchReturnEarly;
- (void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)isRemotePasteboardAvaliable;
- (id)serializeType:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3;
- (id)serializeFileType:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3 intoDir:(id)arg4;
- (id)serializeItem:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3 intoDir:(id)arg4;
- (void)pickupLocalChanges:(id)arg1 iterNumber:(long long)arg2 cloneDir:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeLocalPasteboardToFile:(id)arg1 itemDir:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)clearLocalPasteboardInformation;
- (void)sendUpdateToServer:(id)arg1;
- (BOOL)addData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3;
- (void)stopPreventingPasteboardSharing;
- (void)startPreventingPasteboardSharing;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

