//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol ACC2SVControllerDelegate <NSObject>
- (void)twoSVControllerWillClose:(id <ACC2SVControllerProtocol>)arg1;
- (void)twoSVController:(id <ACC2SVControllerProtocol>)arg1 prepareUIWithCompletion:(void (^)(void))arg2;
- (void)twoSVControllerEnterCredentials:(id <ACC2SVControllerProtocol>)arg1;
- (void)twoSVController:(id <ACC2SVControllerProtocol>)arg1 openMyAppleConnectForRealm:(NSString *)arg2;

@optional
- (NSString *)twoSVController:(id <ACC2SVControllerProtocol>)arg1 myAppleConnectURLForRealm:(NSString *)arg2;
@end
