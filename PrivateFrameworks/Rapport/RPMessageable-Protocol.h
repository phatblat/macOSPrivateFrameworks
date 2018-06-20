//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@protocol RPMessageable
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)sendRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 destinationID:(NSString *)arg3 options:(NSDictionary *)arg4 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg5;
- (void)deregisterRequestID:(NSString *)arg1;
- (void)registerRequestID:(NSString *)arg1 options:(NSDictionary *)arg2 handler:(void (^)(NSDictionary *, NSDictionary *, void (^)(NSDictionary *, NSDictionary *, NSError *)))arg3;
- (void)sendEventID:(NSString *)arg1 event:(NSDictionary *)arg2 destinationID:(NSString *)arg3 options:(NSDictionary *)arg4 completion:(void (^)(NSError *))arg5;
- (void)deregisterEventID:(NSString *)arg1;
- (void)registerEventID:(NSString *)arg1 options:(NSDictionary *)arg2 handler:(void (^)(NSDictionary *, NSDictionary *))arg3;
@end

