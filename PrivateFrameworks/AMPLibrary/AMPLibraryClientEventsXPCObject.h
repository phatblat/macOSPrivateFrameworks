//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMPLibraryClientEventsProtocol.h"

@interface AMPLibraryClientEventsXPCObject : NSObject <AMPLibraryClientEventsProtocol>
{
    id <AMPLMediaAppClientEventsProtocol> _eventsDelegate;
}

@property(nonatomic) __weak id <AMPLMediaAppClientEventsProtocol> eventsDelegate; // @synthesize eventsDelegate=_eventsDelegate;
- (void).cxx_destruct;
- (void)triggerCheckForNewCloudTracks:(_Bool)arg1 withFinishImport:(_Bool)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)synchronousIsProcessingNewTrackForUpload:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)synchronousNotifyClientDisableIsComplete;
- (void)synchronousCancelUploadLibraryClientCommand:(unsigned int)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)synchronousStartUploadLibraryClientCommand:(unsigned int)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)notifyCloudAddTooManyCloudTracksError;
- (void)notifyCloudEditCommandStateChanged:(unsigned long long)arg1 newState:(unsigned char)arg2 optionalFinalStatus:(int)arg3;
- (void)notifyCloudTrackRedownload:(unsigned int)arg1 forPersistentIDs:(id)arg2;
- (void)notifyAuthenticateCloudServer:(unsigned int)arg1;
- (void)notifyShowCloudServerErrorForClientID:(unsigned int)arg1 error:(int)arg2;
- (void)notifyShowHideCloudUIForClientID:(unsigned int)arg1;
- (void)notifyStartEditNewPlaylistAction:(unsigned long long)arg1;
- (void)notifyCloudDAAPPlaylistIsSharedComplete:(unsigned long long)arg1 withStatus:(int)arg2;
- (void)notifyCloudDAAPServerMessage:(unsigned int)arg1 withKind:(unsigned int)arg2 withFlag:(_Bool)arg3 withStatus:(int)arg4;
- (void)notifyCloudClientFlagsChangeEventForClientID:(unsigned int)arg1 forFlag:(unsigned int)arg2 withValue:(_Bool)arg3;
- (void)notifyCloudClientRemoteLoadStateEventForClientID:(unsigned int)arg1 newState:(unsigned int)arg2;
- (void)notifyCloudClientStateChangeEventForClientID:(unsigned int)arg1 newState:(unsigned int)arg2;
- (void)notifyLibraryCommandComplete:(id)arg1 forClientID:(unsigned int)arg2 forCommandID:(unsigned int)arg3;
- (void)notifyLibraryRevisionChange:(unsigned int)arg1;

@end

