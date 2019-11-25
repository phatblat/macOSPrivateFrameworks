//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol SPKCoreParsecInterfaceProtocol
+ (id)getSharedInstance;
- (double)searchRenderTimeout;
- (void)unitConversion:(NSString *)arg1 withReply:(void (^)(PRSConversionResult *))arg2;
- (void)deactivate;
- (void)activate:(double)arg1 isSiri:(BOOL)arg2;
- (void)activate:(double)arg1;
- (void)getSQFDataAndParsecOrderWithReply:(void (^)(NSDictionary *, NSArray *))arg1;
- (void)getRankingKnobsWithReply:(void (^)(PRSRankingServerKnobs *))arg1;
- (void)getCannedCEPDataWithReply:(void (^)(SSPlistDataReader *))arg1;
- (void)getCEPDataWithReply:(void (^)(SSPlistDataReader *))arg1;
- (void)getFTEStringsWithReply:(void (^)(NSString *, NSString *, NSArray *))arg1;
- (void)setParsecState:(BOOL)arg1;
- (void)cancelQuery:(long long)arg1;
- (void)resumeQuery:(long long)arg1 withReply:(void (^)(long long, NSString *, NSArray *, NSDictionary *, NSArray *, NSArray *, NSArray *))arg2;
- (void)queryWithString:(NSString *)arg1 keyboardLanguage:(NSString *)arg2 externalId:(unsigned int)arg3 scaleFactor:(double)arg4 withReply:(void (^)(long long))arg5;
@end

