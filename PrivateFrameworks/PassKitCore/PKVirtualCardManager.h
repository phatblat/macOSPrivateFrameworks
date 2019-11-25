//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKAccountService, PKInAppPaymentService;

@interface PKVirtualCardManager : NSObject
{
    PKInAppPaymentService *_inAppPaymentService;
    PKAccountService *_accountService;
}

- (void).cxx_destruct;
- (void)queryKeychainForVirtualCard:(CDUnknownBlockType)arg1;
- (void)dismissDetailsForVirtualCard:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)promptDetailsForVirtualCard:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)urlToPassDetailsForVirtualCard:(id)arg1;
- (void)credentialsForVirtualCard:(id)arg1 authorization:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)activeVirtualCardsWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

