//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, _DKObject;

@protocol _DKKnowledgeSynchronizing
- (NSString *)sourceDeviceIdentityWithError:(id *)arg1;
- (NSString *)sourceDeviceIdentityFromObject:(_DKObject *)arg1 error:(id *)arg2;
- (BOOL)deleteRemoteState:(id *)arg1;
- (BOOL)synchronizeWithUrgency:(unsigned long long)arg1 client:(NSString *)arg2 error:(id *)arg3;
- (BOOL)synchronizeWithError:(id *)arg1;
@end
