//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol OSASyncProxyServices <NSObject>
- (void)request:(NSString *)arg1 transferLog:(NSString *)arg2 onComplete:(void (^)(id, NSError *))arg3;
- (void)request:(NSString *)arg1 logList:(void (^)(id, NSError *))arg2;
- (void)listDevices:(void (^)(id, NSError *))arg1;
- (void)synchronize:(NSString *)arg1 withOptions:(NSDictionary *)arg2 onComplete:(void (^)(id, NSError *))arg3;
- (void)deliver:(NSString *)arg1 tasking:(NSString *)arg2 taskId:(NSString *)arg3 fromBlob:(NSData *)arg4;
- (void)requestProxyMetadata:(NSString *)arg1 onComplete:(void (^)(id, NSError *))arg2;
- (void)request:(NSString *)arg1 transferLog:(NSString *)arg2 withOptions:(NSDictionary *)arg3 onComplete:(void (^)(id, NSError *))arg4;
- (void)request:(NSString *)arg1 logListWithOptions:(NSDictionary *)arg2 onComplete:(void (^)(id, NSError *))arg3;
- (void)request:(NSString *)arg1 transferGroupWithOptions:(NSDictionary *)arg2 onComplete:(void (^)(id, NSError *))arg3;
@end
