//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKAgentServiceDelegate, NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSURL, NSXPCConnection;

@interface BKAgent : NSObject
{
    BKAgentServiceDelegate *_serviceDelegate;
    NSMutableSet *_interruptionHandlers;
    NSDictionary *_libraryTokens;
    int _notifyToken;
    BOOL _libraryOnline;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id <BKAgentService> _agentService;
    NSXPCConnection *_agentServiceConnection;
    NSURL *_currentLibraryDirectory;
    unsigned long long _libraryVersion;
}

+ (id)_securityScopedURLWithTokenPair:(id)arg1;
@property(readonly, nonatomic) unsigned long long libraryVersion; // @synthesize libraryVersion=_libraryVersion;
@property(readonly, nonatomic) BOOL libraryOnline; // @synthesize libraryOnline=_libraryOnline;
@property(readonly, nonatomic) NSURL *currentLibraryDirectory; // @synthesize currentLibraryDirectory=_currentLibraryDirectory;
@property(retain, nonatomic) NSXPCConnection *agentServiceConnection; // @synthesize agentServiceConnection=_agentServiceConnection;
@property(retain, nonatomic) id <BKAgentService> agentService; // @synthesize agentService=_agentService;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void).cxx_destruct;
- (void)simulateUploadFailure:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)simulateUploadEnd:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)simulateUploadProgress:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)performUbiquityMigration:(CDUnknownBlockType)arg1;
- (void)getUseriCloudSettingWithReply:(CDUnknownBlockType)arg1;
- (void)setUseriCloudSetting:(BOOL)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)shutdown:(CDUnknownBlockType)arg1;
- (void)fetchSampleForAssetID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)removeRedactedBook:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchRedactedBooks:(CDUnknownBlockType)arg1;
- (void)redactBook:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)examineBook:(id)arg1 includeCover:(BOOL)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)uncompressBook:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)chooseLibrary:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)reconnectToLibrary:(CDUnknownBlockType)arg1;
- (void)fixOrphanedFiles:(CDUnknownBlockType)arg1;
- (void)rebuildLibrary:(CDUnknownBlockType)arg1;
- (void)moveLibrary:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)applyPendingUpdates:(CDUnknownBlockType)arg1;
- (void)migrateBook:(id)arg1 withMetadata:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)evictBook:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)trashBook:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)removeBook:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)updateBook:(id)arg1 withMetadata:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)prioritizeImport:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)importBook:(id)arg1 withMetadata:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)importBook:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchImportingBooks:(CDUnknownBlockType)arg1;
- (void)fetchBooksWithAssetIDs:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)fetchBookAssetIDs:(CDUnknownBlockType)arg1;
- (void)fetchBooks:(CDUnknownBlockType)arg1;
- (void)removeInterruptionHandler:(CDUnknownBlockType)arg1;
- (void)addInterruptionHandler:(CDUnknownBlockType)arg1;
- (void)removeBookLibrarySaveListener:(CDUnknownBlockType)arg1;
- (void)addBookLibrarySaveListener:(CDUnknownBlockType)arg1;
- (void)removeChangeListener:(CDUnknownBlockType)arg1;
- (void)addChangeListener:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSURL *defaultLibraryDirectory;
@property(readonly, nonatomic) NSURL *booksDirectory;
@property(readonly, nonatomic) NSURL *downloadsDirectory;
- (id)_libraryDirectory:(id)arg1;
- (void)_bookLibraryUpdated:(id)arg1;
- (void)_resetLibraryTokens;
- (void)_agentServiceRestarted;
- (void)_installServiceRestartListener;
- (id)_startupService;
- (void)dealloc;
- (id)init;
- (id)initWithError:(out id *)arg1;
- (void)resetLibraryTokens;
- (void)simulateUbiquityDidLoadWithFilesPaths:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)simulateUbiquityFileDidBecomeUnavilableAtPath:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)simulateUbiquityFileDidBecomeAvailableAtPath:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setUserDefaultsEnabled:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setUbiquityDirectoriesSubpath:(id)arg1 withReply:(CDUnknownBlockType)arg2;

@end

