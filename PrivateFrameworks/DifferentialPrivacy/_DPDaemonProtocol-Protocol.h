//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString;

@protocol _DPDaemonProtocol
- (void)retireReports:(NSArray *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)reportsNotYetSubmittedWithReply:(void (^)(BOOL, NSArray *, NSError *))arg1;
- (void)recordWords:(NSArray *)arg1 forKey:(NSString *)arg2 withReply:(void (^)(BOOL, NSError *))arg3;
- (void)recordStrings:(NSArray *)arg1 forKey:(NSString *)arg2 withReply:(void (^)(BOOL, NSError *))arg3;
- (void)recordNumbers:(NSArray *)arg1 forKey:(NSString *)arg2 withReply:(void (^)(BOOL, NSError *))arg3;
@end
