//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKAuthenticationSettings, CKDialog, CKPurchaseTransaction, NSString;

@protocol PurchaseQueueDelegate <NSObject>
- (void)promptTouchIDEnableForTransaction:(CKPurchaseTransaction *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)signChallenge:(NSString *)arg1 forTransaction:(CKPurchaseTransaction *)arg2 reply:(void (^)(BOOL, NSData *, NSData *, NSError *))arg3;
- (void)authenticateWithDialog:(CKDialog *)arg1 settings:(CKAuthenticationSettings *)arg2 forTransaction:(CKPurchaseTransaction *)arg3 reply:(void (^)(BOOL, BOOL, CKStoreAccount *, NSError *))arg4;
- (void)displayDialog:(CKDialog *)arg1 forTransaction:(CKPurchaseTransaction *)arg2 reply:(void (^)(BOOL, BOOL))arg3;
- (void)unsetDelegateForPurchaseQueueWithIdentifier:(NSString *)arg1;
@end

