//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentSession.h>

@interface PKApplePayTrustSession : PKPaymentSession
{
}

- (id)signatureForRequest:(id)arg1 withAuthorization:(id)arg2;
- (BOOL)deleteKeyWithIdentifier:(id)arg1;
- (id)keyWithIdentifier:(id)arg1;
- (id)createKeyWithRequest:(id)arg1 error:(id *)arg2;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;

@end

