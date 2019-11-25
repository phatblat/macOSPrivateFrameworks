//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSSet, NSString, TUHandle;

@protocol TUCallFilterControllerActions <NSObject>
- (BOOL)isUnknownAddress:(NSString *)arg1 normalizedAddress:(NSString *)arg2 forBundleIdentifier:(NSString *)arg3;
- (BOOL)willRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;
- (NSDictionary *)policyForAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;
- (BOOL)shouldRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;
- (BOOL)containsRestrictedHandle:(TUHandle *)arg1 forBundleIdentifier:(NSString *)arg2;
@end

