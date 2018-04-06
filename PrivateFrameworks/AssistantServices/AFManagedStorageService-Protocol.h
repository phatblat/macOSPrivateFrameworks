//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol AFManagedStorageService <NSObject>
- (oneway void)resetKnowledgeStoreWithName:(NSString *)arg1 completion:(void (^)(void))arg2;
- (oneway void)getKnowledgeStoreDataForKey:(NSString *)arg1 inStoreWithName:(NSString *)arg2 completion:(void (^)(NSData *))arg3;
- (oneway void)setKnowledgeStoreData:(NSData *)arg1 forKey:(NSString *)arg2 inStoreWithName:(NSString *)arg3 completion:(void (^)(void))arg4;
- (oneway void)fetchManagedStoreObjectForKey:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (oneway void)setManagedStoreObject:(NSDictionary *)arg1 forKey:(NSString *)arg2;
@end
