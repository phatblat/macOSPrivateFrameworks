//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CommerceClient.h"

@class NSMutableDictionary, NSString;

@interface CommerceClient : NSObject <CommerceClient>
{
    NSMutableDictionary *_accountObservers;
    NSMutableDictionary *_purchaseObservers;
    NSMutableDictionary *_downloadObservers;
    NSMutableDictionary *_remoteDialogContexts;
}

@property(retain) NSMutableDictionary *remoteDialogContexts; // @synthesize remoteDialogContexts=_remoteDialogContexts;
@property(retain) NSMutableDictionary *downloadObservers; // @synthesize downloadObservers=_downloadObservers;
@property(retain) NSMutableDictionary *purchaseObservers; // @synthesize purchaseObservers=_purchaseObservers;
@property(retain) NSMutableDictionary *accountObservers; // @synthesize accountObservers=_accountObservers;
- (void).cxx_destruct;
- (void)signChallenge:(id)arg1 withStoreClient:(id)arg2 contextIdentifier:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)authenticateWithDialog:(id)arg1 contextIdentifier:(id)arg2 storeClient:(id)arg3 settings:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)displayDialog:(id)arg1 withContextIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_dialogContextForIdentifier:(id)arg1;
- (void)unsetContextForIdentifier:(id)arg1;
- (void)purchaseQueueWithIdentifier:(id)arg1 updatedTransactions:(id)arg2;
- (void)purchaseQueueWithIdentifier:(id)arg1 addedTransactions:(id)arg2;
- (void)downloadQueueWithIdentifier:(id)arg1 statusChangedForDownloads:(id)arg2;
- (void)downloadQueueWithIdentifier:(id)arg1 addedDownloads:(id)arg2;
- (void)storeClient:(id)arg1 changedPrimaryAccount:(id)arg2;
- (void)setRemoteDialogContext:(id)arg1 forIdentifier:(id)arg2;
- (void)removeDownloadObserver:(id)arg1 forDownloadQueue:(id)arg2;
- (id)addDownloadObserver:(id)arg1 forDownloadQueue:(id)arg2;
- (void)removePurchaseObserver:(id)arg1 forPurchaseQueue:(id)arg2;
- (id)addPurchaseObserver:(id)arg1 forPurchaseQueue:(id)arg2;
- (void)removeAccountObserver:(id)arg1 forAccountStore:(id)arg2;
- (id)addAccountObserver:(id)arg1 forAccountStore:(id)arg2;
- (void)resetServiceObservers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
