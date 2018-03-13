//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol CDPRecoveryKeyValidator <NSObject>
- (BOOL)confirmRecoveryKey:(NSString *)arg1 error:(id *)arg2;
- (NSString *)generateRecoveryKeyWithError:(id *)arg1;
- (void)generateRecoveryKey:(void (^)(NSString *, NSError *))arg1;
- (void)confirmRecoveryKey:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

