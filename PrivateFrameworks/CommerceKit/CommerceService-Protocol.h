//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKStoreAccount, CKStoreClient, CKStoreRequest, CKStoreResponse, NSArray, NSData, NSDictionary, NSString, NSURLResponse;

@protocol CommerceService <NSObject>
- (void)closeSigningSession:(id)arg1;
- (void)signingSession:(id)arg1 processSignature:(NSData *)arg2;
- (void)signingSession:(id)arg1 signData:(NSData *)arg2 reply:(void (^)(BOOL, NSData *, NSError *))arg3;
- (void)openSigningSessionForClient:(CKStoreClient *)arg1 primed:(BOOL)arg2 reply:(void (^)(BOOL, id, NSData *, NSError *))arg3;
- (void)signTouchIDChallenge:(NSString *)arg1 withCaller:(id)arg2 reply:(void (^)(BOOL, NSData *, NSData *, NSError *))arg3;
- (void)clearTouchIDPrivateKeyWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)touchIDAttestationBlobWithReply:(void (^)(BOOL, NSData *, NSError *))arg1;
- (void)touchIDPublicKeyWithReply:(void (^)(BOOL, NSData *, NSError *))arg1;
- (void)setTouchIDState:(long long)arg1 forAccount:(CKStoreAccount *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)touchIDStateForAccount:(CKStoreAccount *)arg1 reply:(void (^)(long long))arg2;
- (void)setGlobalTouchIDState:(long long)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)globalTouchIDStateWithReply:(void (^)(long long, NSDate *))arg1;
- (void)finishDownloadsWithIdentifiers:(NSArray *)arg1 onQueueWithIdentifier:(NSString *)arg2;
- (void)cancelDownloadsWithIdentifiers:(NSArray *)arg1 onQueueWithIdentifier:(NSString *)arg2;
- (void)resumeDownloadsWithIdentifiers:(NSArray *)arg1 onQueueWithIdentifier:(NSString *)arg2;
- (void)pauseDownloadsWithIdentifiers:(NSArray *)arg1 onQueueWithIdentifier:(NSString *)arg2;
- (void)unsetObserverForDownloadQueueWithIdentifier:(NSString *)arg1;
- (void)setObserverForDownloadQueueWithIdentifier:(NSString *)arg1;
- (void)addDownloads:(NSArray *)arg1 toQueueWithIdentifier:(NSString *)arg2;
- (void)downloadsForQueueWithIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)unsetObserverForPurchaseQueueWithIdentifier:(NSString *)arg1;
- (void)setObserverForPurchaseQueueWithIdentifier:(NSString *)arg1;
- (void)resumePurchaseTransactionWithResumeData:(NSData *)arg1 storeResponse:(CKStoreResponse *)arg2;
- (void)cancelPurchaseTransactionWithResumeData:(NSData *)arg1;
- (void)addPurchaseTransactions:(NSArray *)arg1 toQueueWithIdentifier:(NSString *)arg2;
- (void)deleteKeyBagForAccount:(CKStoreAccount *)arg1;
- (void)importKeyBag:(NSData *)arg1 diversityBag:(NSData *)arg2;
- (void)kbSyncForTransactionType:(unsigned char)arg1 account:(CKStoreAccount *)arg2 reply:(void (^)(BOOL, NSData *, BOOL, NSError *))arg3;
- (void)unsetAccountObserverForClient:(CKStoreClient *)arg1;
- (void)setAccountObserverForClient:(CKStoreClient *)arg1;
- (void)primaryAccountSignedOutForStoreClient:(CKStoreClient *)arg1;
- (void)addAccount:(CKStoreAccount *)arg1 makePrimary:(BOOL)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)knownAccountsForClient:(CKStoreClient *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)primaryAccountForClient:(CKStoreClient *)arg1 reply:(void (^)(CKStoreAccount *))arg2;
- (void)demoAccountWithReply:(void (^)(CKDemoAccount *))arg1;
- (void)demoModeEnabledWithReply:(void (^)(BOOL))arg1;
- (void)processURLResponse:(NSURLResponse *)arg1 forClient:(CKStoreClient *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)cookieHeaderForStoreRequest:(CKStoreRequest *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)URLRequestForStoreRequest:(CKStoreRequest *)arg1 reply:(void (^)(NSURLRequest *, NSError *))arg2;
- (void)runStoreRequest:(CKStoreRequest *)arg1 reply:(void (^)(BOOL, CKStoreResponse *, NSError *))arg2;
- (void)unsetRemoteDialogContextForIdentifier:(NSString *)arg1;
- (void)setRemoteDialogContextForIdentifier:(NSString *)arg1;
- (void)bagDictionaryForClient:(CKStoreClient *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)bagValuesForKeys:(NSArray *)arg1 client:(CKStoreClient *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)setStorefront:(NSString *)arg1 forClient:(CKStoreClient *)arg2;
- (void)storefrontForClient:(CKStoreClient *)arg1 reply:(void (^)(NSString *))arg2;
- (void)setupClient:(CKStoreClient *)arg1 withSetupAssistantResponse:(NSDictionary *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)deviceROMAddressWithReply:(void (^)(NSString *))arg1;
- (void)deviceSerialNumberWithReply:(void (^)(NSString *))arg1;
@end

