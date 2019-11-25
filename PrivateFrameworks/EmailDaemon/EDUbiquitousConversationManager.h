//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDConversationRemoteStorageDelegate.h"
#import "EFLoggable.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface EDUbiquitousConversationManager : NSObject <EDConversationRemoteStorageDelegate, EFLoggable>
{
    BOOL _initialized;
    id <EDUbiquitousConversationManagerDelegate> _delegate;
    id <EDConversationRemoteStorage> _cloudStorage;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_conversationIDsBySyncKey;
    NSMutableSet *_unmatchedKeys;
}

+ (id)log;
@property(nonatomic) BOOL initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSMutableSet *unmatchedKeys; // @synthesize unmatchedKeys=_unmatchedKeys;
@property(retain, nonatomic) NSMutableDictionary *conversationIDsBySyncKey; // @synthesize conversationIDsBySyncKey=_conversationIDsBySyncKey;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <EDConversationRemoteStorage> cloudStorage; // @synthesize cloudStorage=_cloudStorage;
@property(nonatomic) __weak id <EDUbiquitousConversationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performDailyExportForChangedConversations:(id)arg1;
- (void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3;
- (void)pruneDatabasePurgingOldestEntries:(BOOL)arg1;
- (void)_mergeServerChanges:(id)arg1;
- (BOOL)_synchronize;
- (id)_syncKeyForConversationID:(long long)arg1;
- (void)_setCloudStorageValue:(id)arg1 forKey:(id)arg2;
- (void)setFlags:(unsigned long long)arg1 forConversations:(id)arg2;
- (id)syncKeyForUpdatedConversation:(long long)arg1 flags:(unsigned long long)arg2;
- (BOOL)hasSubscribedConversations;
- (void)performInitialSync;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

