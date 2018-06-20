//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol CXCallDirectoryManagerDefaultHostProtocol <NSObject>
- (oneway void)setPrioritizedExtensionIdentifiers:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)getExtensionsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)setEnabled:(BOOL)arg1 forExtensionWithIdentifier:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (oneway void)getEnabledStatusForExtensionWithIdentifier:(NSString *)arg1 reply:(void (^)(long long, NSError *))arg2;
- (oneway void)reloadExtensionWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
@end

