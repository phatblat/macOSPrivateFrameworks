//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SASLMechanism : NSObject
{
    struct _SASLMechanismInternal *_internal;
}

+ (id)mechanisms;
+ (void)initialize;
- (id)saslInfo;
- (id)mechanisms;
- (BOOL)requiresEncoding;
- (BOOL)isPlaintextMethod;
- (id)lastResponse;
- (id)method;
- (void)_setLastResponse:(id)arg1;
- (void)_setMethod:(id)arg1;
- (id)decodedDataForData:(id)arg1;
- (id)encodedDataForData:(id)arg1;
- (long long)continueAuthenticationWithServerData:(id)arg1 response:(id *)arg2;
- (long long)selectAuthenticationMethodFromOptions:(id)arg1 selectedMethod:(id *)arg2 initalResponse:(id *)arg3;
- (void)_setupSecurityProps;
- (void)_setupCallbacks;
- (void)dealloc;
- (id)initWithSASLInfo:(id)arg1;

@end

