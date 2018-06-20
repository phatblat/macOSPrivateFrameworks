//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFSessionInterface.h"

@class NSData, NSString;

@protocol NFReaderSessionInterface <NFSessionInterface>
- (oneway void)updateSharingUIScanText:(NSString *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)checkPresence:(void (^)(NSError *, BOOL))arg1;
- (oneway void)transceive:(NSData *)arg1 callback:(void (^)(NSData *, NSError *))arg2;
- (oneway void)disconnect:(void (^)(NSError *))arg1;
- (oneway void)connect:(id <NFTag>)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)stopPolling:(void (^)(NSError *))arg1;
- (oneway void)startPollingForNDEFMessagesFromMultipleTags:(BOOL)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)startPollingForTags:(unsigned long long)arg1 callback:(void (^)(NSError *))arg2;
@end

