//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary;

@protocol WDXPCService
- (void)stopServerWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)startServerWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)configureServerWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)getServerStatusWithCompletionHandler:(void (^)(BOOL, NSDictionary *))arg1;
@end
