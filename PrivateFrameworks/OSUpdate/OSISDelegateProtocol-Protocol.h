//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol OSISDelegateProtocol <NSObject>
- (void)clientShouldRebootWithShutdownOverReboot:(BOOL)arg1 withResponse:(void (^)(BOOL))arg2;
- (void)helperToolDied;
- (void)prepareRecoveryDidSucceed;
- (void)prepareRecoveryDidFailWithError:(NSError *)arg1;
- (void)prepareRecoveryDidStart;
- (void)prepareOSInstallDidSucceed;
- (void)prepareOSInstallDidFailWithError:(NSError *)arg1;
- (void)prepareOSInstallMessage:(NSString *)arg1;
- (void)prepareOSInstallTimeRemaining:(double)arg1;
- (void)prepareOSInstallProgess:(double)arg1;
- (void)prepareOSInstallDidStart;

@optional
- (void)presentUI:(NSString *)arg1 withResponse:(void (^)(NSDictionary *))arg2;
@end
