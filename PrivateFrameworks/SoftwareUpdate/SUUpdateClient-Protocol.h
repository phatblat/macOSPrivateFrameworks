//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURLAuthenticationChallenge, SUUpdateStatus;

@protocol SUUpdateClient <NSObject>
- (void)installStateDidChange:(SUUpdateStatus *)arg1 forUpdateWithProductKey:(NSString *)arg2;
- (void)availableUpdatesDidChange;

@optional
- (void)hiddenUpdatesDidChange;
- (void)catalogURLDidChange;
- (void)authChallengeWasReceived:(NSURLAuthenticationChallenge *)arg1 handled:(char *)arg2;
@end

