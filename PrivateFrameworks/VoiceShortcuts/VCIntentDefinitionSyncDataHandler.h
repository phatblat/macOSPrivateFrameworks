//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VoiceShortcuts/VCSyncDataHandler.h>

@class VCDaemonXPCEventHandler;

@interface VCIntentDefinitionSyncDataHandler : VCSyncDataHandler
{
    VCDaemonXPCEventHandler *_eventHandler;
}

+ (id)syncDirectoryURLForBundleIdentifier:(id)arg1;
+ (id)definitionDirectoryURL;
+ (int)messageType;
@property(readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (BOOL)deleteSyncedData:(id *)arg1;
- (BOOL)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id *)arg3;
- (BOOL)resetSyncStateForService:(id)arg1 error:(id *)arg2;
- (BOOL)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id *)arg4;
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;
- (void)installedApplicationsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithEventHandler:(id)arg1;

@end

