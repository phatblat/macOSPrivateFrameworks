//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKDatabaseOperationInfo.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CKDFetchBatchedRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    BOOL _shouldFetchAssetContents;
    BOOL _fetchAllChanges;
    BOOL _forcePCSDecryptionAttempt;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL forcePCSDecryptionAttempt; // @synthesize forcePCSDecryptionAttempt=_forcePCSDecryptionAttempt;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(nonatomic) BOOL fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) BOOL shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

