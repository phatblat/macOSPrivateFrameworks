//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSMutableArray;

@interface KTDevice : NSObject <NSSecureCoding>
{
    NSData *_deviceID;
    NSData *_deviceIDVRFOutput;
    NSMutableArray *_clientDatas;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSMutableArray *clientDatas; // @synthesize clientDatas=_clientDatas;
@property(retain) NSData *deviceIDVRFOutput; // @synthesize deviceIDVRFOutput=_deviceIDVRFOutput;
@property(retain) NSData *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (BOOL)updateWithMutation:(id)arg1 error:(id *)arg2;
- (void)markClientDatasForAppVersion:(unsigned long long)arg1 mutationMs:(unsigned long long)arg2;
- (void)addClientDatasObject:(id)arg1;
- (void)removeClientDatasObject:(id)arg1;
- (id)clientRecordsForVRFOutput:(id)arg1;
- (id)clientRecordForAppVersion:(unsigned long long)arg1 clientDataVRFOutput:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)initWithMutation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)debugDescription;

@end

