//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import "PDCloudStoreServiceExportedInterface.h"

@class NSString, PDCloudStoreNotificationCoordinator, PKEntitlementWhitelist;

@interface PDCloudStoreService : PDXPCService <PDCloudStoreServiceExportedInterface>
{
    PKEntitlementWhitelist *_whitelist;
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;
}

@property(retain, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator; // @synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator;
- (void).cxx_destruct;
- (void)noteAccountDeletedWithHandler:(CDUnknownBlockType)arg1;
- (void)noteCloudSyncPassesSwitchChangedWithHandler:(CDUnknownBlockType)arg1;
- (void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)simulateCloudStorePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetContainerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetContainerWithHandler:(CDUnknownBlockType)arg1;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

