//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudRecord.h>

@class NSData;

@interface HMDCloudLegacyHomeDataRecord : HMDCloudRecord
{
}

+ (id)legacyModelWithHomeDataV0:(id)arg1 homeDataV2:(id)arg2;
- (unsigned long long)objectEncoding;
- (void)clearData;
@property(retain, nonatomic) NSData *dataVersion2;
- (void)setData:(id)arg1;
- (id)data;
- (id)recordType;
- (BOOL)encodeObjectChange:(id)arg1;
- (id)extractObjectChange;

@end

