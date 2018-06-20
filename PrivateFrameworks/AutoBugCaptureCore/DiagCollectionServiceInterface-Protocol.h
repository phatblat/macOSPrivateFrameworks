//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol DiagCollectionServiceInterface <NSObject>
- (void)purgePayloadsForIdentifiers:(NSArray *)arg1 reply:(void (^)(BOOL))arg2;
- (void)purgeAllPayloads:(void (^)(BOOL))arg1;
- (void)collectPayloadsWithIdentifier:(NSString *)arg1 diagnosticExtensionsWithParameters:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)collectPayloadsWithIdentifier:(NSString *)arg1 diagnosticExtensions:(NSArray *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
@end

