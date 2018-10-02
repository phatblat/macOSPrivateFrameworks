//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BiometricKitIdentity, NSData, NSDictionary;

@protocol BiometricKitDelegateXpcProtocol <NSObject>
- (BOOL)isDelegate;
- (void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;
- (void)templateUpdate:(BiometricKitIdentity *)arg1 details:(NSDictionary *)arg2 client:(unsigned long long)arg3;
- (void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (void)statusMessage:(unsigned int)arg1 details:(NSDictionary *)arg2 client:(unsigned long long)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)matchResult:(BiometricKitIdentity *)arg1 details:(NSDictionary *)arg2 client:(unsigned long long)arg3;
- (void)enrollFeedback:(NSData *)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(NSData *)arg1 client:(unsigned long long)arg2;
- (void)enrollResult:(BiometricKitIdentity *)arg1 client:(unsigned long long)arg2;
@end

