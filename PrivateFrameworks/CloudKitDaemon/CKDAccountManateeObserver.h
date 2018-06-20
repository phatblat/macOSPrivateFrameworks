//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_queue>;

@interface CKDAccountManateeObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_statusQueue;
    long long _manateeAvailableForLoggedInAccount;
    NSError *_lastCDPError;
}

+ (id)sharedObserver;
@property(copy, nonatomic) NSError *lastCDPError; // @synthesize lastCDPError=_lastCDPError;
@property(nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) long long manateeAvailableForLoggedInAccount; // @synthesize manateeAvailableForLoggedInAccount=_manateeAvailableForLoggedInAccount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue; // @synthesize statusQueue=_statusQueue;
- (void).cxx_destruct;
- (BOOL)isManateeAvailable:(id *)arg1;
- (void)statusForCurrentlyLoggedInAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (void)handleUpdateNotificationWithAvailability:(id)arg1;
- (long long)_fetchManateeAvailability:(id *)arg1;
- (id)init;

@end

