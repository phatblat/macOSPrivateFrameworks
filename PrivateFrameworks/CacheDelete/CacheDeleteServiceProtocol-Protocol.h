//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary;

@protocol CacheDeleteServiceProtocol
- (void)serviceCallback:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)serviceNotify:(NSDictionary *)arg1 replyBlock:(void (^)(void))arg2;
- (void)servicePing:(void (^)(void))arg1;
- (void)serviceCancelPurge:(void (^)(void))arg1;
- (void)servicePeriodic:(int)arg1 info:(NSDictionary *)arg2 replyBlock:(void (^)(NSDictionary *))arg3;
- (void)servicePurge:(int)arg1 info:(NSDictionary *)arg2 replyBlock:(void (^)(NSDictionary *))arg3;
- (void)servicePurgeable:(int)arg1 info:(NSDictionary *)arg2 replyBlock:(void (^)(NSDictionary *))arg3;
@end

