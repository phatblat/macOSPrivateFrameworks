//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFCompanionAdvertiserDelegate.h"

@class CSSearchableItemAttributeSet, NSData, NSDate, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, NSURL, NSUUID, NSUserActivity, SFCompanionAdvertiser, UAUserActivityManager;

@interface UAUserActivity : NSObject <SFCompanionAdvertiserDelegate>
{
    NSMutableDictionary *_frameworkPayload;
    NSString *_title;
    NSURL *_webpageURL;
    NSURL *_referrerURL;
    SFCompanionAdvertiser *_advertiser;
    SFCompanionAdvertiser *_resumerAdvertiser;
    NSMutableSet *_dirtyPayloadIdentifiers;
    double _lastSaveTime;
    BOOL _saveScheduled;
    BOOL _createsNewUUIDIfSaved;
    NSError *_decodeUserInfoError;
    BOOL _needsSave;
    BOOL _needsSaveValueAtEndOfWillSaveCallback;
    BOOL _dirty;
    BOOL _sendToServerPending;
    BOOL _activityHasBeenSentToServer;
    BOOL _supportsContinuationStreams;
    BOOL _forceImmediateSendToServer;
    BOOL _encodedContainsUnsynchronizedCloudDocument;
    BOOL _encodedFileProviderURL;
    BOOL _userActivityWasCreatedSent;
    BOOL _indexInProcess;
    long long _inWillSaveCallback;
    NSDate *_expirationDate;
    NSString *_contentUserAction;
    NSString *_teamIdentifier;
    unsigned long long _os_state_handler;
    int _forwardToCoreSpotlightIndexerCount;
    BOOL _eligibleForHandoff;
    BOOL _eligibleForSearch;
    BOOL _eligibleForReminders;
    BOOL _eligibleForPublicIndexing;
    BOOL _invalidated;
    BOOL _userInfoContainsFileURLs;
    BOOL _canCreateStreams;
    NSData *_cachedEncodedUserInfo;
    NSSet *_keywords;
    NSSet *_requiredUserInfoKeys;
    NSDictionary *_userInfo;
    id <UAUserActivityDelegate> _delegate;
    UAUserActivityManager *_manager;
    NSString *_typeIdentifier;
    NSString *_dynamicIdentifier;
    NSUUID *_uniqueIdentifier;
    unsigned long long _suggestedActionType;
    NSDictionary *_options;
    NSUUID *_originalUniqueIdentifier;
    NSMutableDictionary *_payloadObjects;
    NSMutableDictionary *_payloadUpdateBlocks;
    NSMutableDictionary *_payloadDataCache;
    NSObject<OS_dispatch_queue> *_willCallSaveSerializationQueue;
}

+ (void)removeUserActivityObserver:(id)arg1;
+ (void)addUserActivityObserver:(id)arg1;
+ (id)observers;
+ (void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2;
+ (void)addDynamicUserActivity:(id)arg1 matching:(id)arg2;
+ (id)fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)userActivityFromUUID:(id)arg1 withError:(id *)arg2;
+ (id)userActivityFromUUID:(id)arg1 timeout:(double)arg2 withError:(id *)arg3;
+ (BOOL)userActivityContinuationSupported;
+ (void)setIndexPending:(BOOL)arg1 forUUID:(id)arg2;
+ (BOOL)isIndexPendingForUUID:(id)arg1;
+ (BOOL)checkWebpageURL:(id)arg1 actionType:(unsigned long long)arg2 throwIfFailed:(BOOL)arg3;
+ (id)allowedWebpageURLSchemes;
+ (void)unregisterForSuggestedActionNudgeOfType:(id)arg1;
+ (id)registerForSuggestedActionNudgeOfType:(unsigned long long)arg1 withOptions:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (BOOL)determineIfUserActivityIsCurrent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)currentUserActivityUUID;
+ (BOOL)supportsUserActivityAppLinks;
+ (id)_decodeFromString:(id)arg1;
+ (id)_decodeFromScanner:(id)arg1;
+ (id)_encodeKeyAndValueIntoString:(id)arg1 value:(id)arg2;
+ (id)_encodeToString:(id)arg1;
@property(readonly, retain) NSObject<OS_dispatch_queue> *willCallSaveSerializationQueue; // @synthesize willCallSaveSerializationQueue=_willCallSaveSerializationQueue;
@property(retain) NSMutableSet *dirtyPayloadIdentifiers; // @synthesize dirtyPayloadIdentifiers=_dirtyPayloadIdentifiers;
@property(retain) NSMutableDictionary *payloadDataCache; // @synthesize payloadDataCache=_payloadDataCache;
@property(retain) NSMutableDictionary *payloadUpdateBlocks; // @synthesize payloadUpdateBlocks=_payloadUpdateBlocks;
@property(retain) NSMutableDictionary *payloadObjects; // @synthesize payloadObjects=_payloadObjects;
@property(readonly, copy) NSUUID *originalUniqueIdentifier; // @synthesize originalUniqueIdentifier=_originalUniqueIdentifier;
@property BOOL canCreateStreams; // @synthesize canCreateStreams=_canCreateStreams;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(readonly) unsigned long long suggestedActionType; // @synthesize suggestedActionType=_suggestedActionType;
@property(readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy) NSString *dynamicIdentifier; // @synthesize dynamicIdentifier=_dynamicIdentifier;
@property(copy) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(readonly) __weak UAUserActivityManager *manager; // @synthesize manager=_manager;
@property id <UAUserActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSSet *requiredUserInfoKeys; // @synthesize requiredUserInfoKeys=_requiredUserInfoKeys;
@property(copy) NSSet *keywords; // @synthesize keywords=_keywords;
@property BOOL userInfoContainsFileURLs; // @synthesize userInfoContainsFileURLs=_userInfoContainsFileURLs;
@property(readonly) unsigned long long os_state_handler; // @synthesize os_state_handler=_os_state_handler;
@property(readonly, getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(copy) NSData *cachedEncodedUserInfo; // @synthesize cachedEncodedUserInfo=_cachedEncodedUserInfo;
@property(readonly) BOOL activityHasBeenSentToServer; // @synthesize activityHasBeenSentToServer=_activityHasBeenSentToServer;
@property BOOL encodedContainsUnsynchronizedCloudDocument; // @synthesize encodedContainsUnsynchronizedCloudDocument=_encodedContainsUnsynchronizedCloudDocument;
@property BOOL encodedFileProviderURL; // @synthesize encodedFileProviderURL=_encodedFileProviderURL;
@property(retain) NSError *decodeUserInfoError; // @synthesize decodeUserInfoError=_decodeUserInfoError;
@property BOOL createsNewUUIDIfSaved; // @synthesize createsNewUUIDIfSaved=_createsNewUUIDIfSaved;
@property BOOL forceImmediateSendToServer; // @synthesize forceImmediateSendToServer=_forceImmediateSendToServer;
@property BOOL sendToServerPending; // @synthesize sendToServerPending=_sendToServerPending;
@property(copy) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
- (void).cxx_destruct;
- (id)stateString;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1;
- (void)pinUserActivityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)decodeUserInfo:(id)arg1;
- (id)encodeUserInfo:(id)arg1;
- (id)encodeUserInfo:(id)arg1 error:(id *)arg2;
- (BOOL)encodeUserInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)unarchiveURL:(id)arg1 error:(id *)arg2;
- (BOOL)archiveURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)resignCurrent;
- (void)_resignCurrent;
- (void)becomeCurrent;
- (void)getContinuationStreamsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property BOOL supportsContinuationStreams; // @dynamic supportsContinuationStreams;
@property(copy) NSData *streamsData;
@property __weak NSUserActivity *parentUserActivity;
- (id)teamID;
@property BOOL needsSave; // @dynamic needsSave;
@property BOOL dirty; // @dynamic dirty;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
@property(copy) NSURL *referrerURL; // @dynamic referrerURL;
@property(copy) NSURL *webpageURL; // @dynamic webpageURL;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSString *title; // @dynamic title;
- (void)dealloc;
- (id)initDynamicActivityWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 suggestedActionType:(unsigned long long)arg3 options:(id)arg4;
- (id)initWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 options:(id)arg3;
- (id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned long long)arg2 options:(id)arg3;
- (id)initWithTypeIdentifier:(id)arg1 options:(id)arg2;
- (id)initWithTypeIdentifier:(id)arg1;
- (id)init;
- (void)removeContentAttribute:(id)arg1;
- (void)addContentAttribute:(id)arg1 forKey:(id)arg2;
- (void)setContentAttributes:(id)arg1;
- (id)contentAttributes;
- (void)setContentType:(id)arg1;
- (id)contentType;
@property(copy) NSString *subtitle; // @dynamic subtitle;
- (void)advertiser:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)displayInDtrace;
- (long long)priority;
- (void)sendUserActivityInfoToLSUserActivityd:(BOOL)arg1 onAsyncQueue:(BOOL)arg2;
- (id)callWillSaveDelegateIfDirtyAndPackageUpData:(BOOL)arg1 clearDirty:(BOOL)arg2;
- (id)userActivityInfoForSelfWithPayload:(BOOL)arg1;
- (id)userActivityInfoForSelf;
- (void)scheduleSendUserActivityInfoToLSUserActivityd;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)didSynchronizeUserActivity;
- (void)willSynchronizeUserActivityWithHandler:(CDUnknownBlockType)arg1;
- (void)tellDaemonAboutNewLSUserActivity;
- (id)copyWithNewUUID:(BOOL)arg1;
- (id)initWithManager:(id)arg1 userActivityInfo:(id)arg2;
@property(getter=isEligibleForPublicIndexing) BOOL eligibleForPublicIndexing; // @dynamic eligibleForPublicIndexing;
@property(getter=isEligibleForReminders) BOOL eligibleForReminders; // @dynamic eligibleForReminders;
@property(getter=isEligibleForSearch) BOOL eligibleForSearch; // @dynamic eligibleForSearch;
@property(getter=isEligibleForHandoff) BOOL eligibleForHandoff; // @dynamic eligibleForHandoff;
- (void)addKeywordsFromArray:(id)arg1;
@property(copy) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy) NSString *contentIdentifier; // @dynamic contentIdentifier;
@property(copy) NSString *contentUserAction; // @dynamic contentUserAction;
- (BOOL)createUserActivityDataWithSaving:(BOOL)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_encodeIntoUserActivityDataWithSave:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)createUserActivityStringsWithSaving:(BOOL)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_encodeIntoUserActivityStringWithSave:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithUserActivityData:(id)arg1 options:(id)arg2;
- (id)initWithUserActivityStrings:(id)arg1 optionalString:(id)arg2 tertiaryData:(id)arg3 options:(id)arg4;
- (void)indexActivity:(double)arg1 forceIndexing:(BOOL)arg2;
- (void)sendToCoreSpotlightIndexer;
- (void)updateForwardToCoreSpotlightIndexer:(BOOL)arg1;
@property(readonly) BOOL forwardToCoreSpotlightIndexer;
@property(copy) CSSearchableItemAttributeSet *contentAttributeSet; // @dynamic contentAttributeSet;
- (void)setDirty:(BOOL)arg1 identifier:(id)arg2;
- (BOOL)isPayloadDirty:(id)arg1;
- (CDUnknownBlockType)payloadUpdateBlockForIdentifier:(id)arg1;
- (void)setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(BOOL)arg4;
- (void)setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3;
- (id)payloadForIdentifier:(id)arg1;
- (id)objectForIdentifier:(id)arg1;
- (id)payloadIdentifiers;

// Remaining properties
@property(readonly) Class superclass;

@end

