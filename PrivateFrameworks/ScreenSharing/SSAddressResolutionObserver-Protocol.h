//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IDSMessageContext, NSArray, NSDate, NSDictionary, NSString;

@protocol SSAddressResolutionObserver
- (void)IDSServiceMessageReceived:(NSDictionary *)arg1 context:(IDSMessageContext *)arg2;
- (void)resolvedBonjourName:(NSString *)arg1;
- (void)startedBonjourResolveAtTimestamp:(NSDate *)arg1;
- (void)resolvedAddresses:(NSArray *)arg1 withStatus:(int)arg2;
@end

