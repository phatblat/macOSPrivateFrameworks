//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProgress.h"

@class NSString;

@interface NSProgress (SFAirDropTransferProgressAdditions)
+ (id)sf_transferStateAsString:(long long)arg1;
+ (id)sf_publishingKeyForApp:(id)arg1 sessionID:(id)arg2;
@property(readonly, nonatomic) NSString *sf_error;
- (void)sf_failedWithError:(id)arg1;
@property(nonatomic) long long sf_transferState;
@property(nonatomic) unsigned int sf_initiator;
- (id)sf_initWithFileURL:(id)arg1;
@property(readonly, nonatomic) NSString *sf_personRealName;
@property(readonly, nonatomic) NSString *sf_sessionID;
@property(readonly, nonatomic) NSString *sf_bundleID;
@property(readonly, nonatomic) NSString *sf_publishingKey;
- (id)sf_initWithAppBundle:(id)arg1 sessionID:(id)arg2 andPersonRealName:(id)arg3;
@end

