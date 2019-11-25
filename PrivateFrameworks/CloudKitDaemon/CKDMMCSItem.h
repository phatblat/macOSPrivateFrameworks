//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKAsset, CKAssetDownloadPreauthorization, CKDAssetZoneKey, CKDMMCSItemCommandWriter, CKPackage, CKRecordID, NSData, NSDictionary, NSError, NSFileHandle, NSMutableArray, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDMMCSItem : NSObject
{
    BOOL _inMemoryDownloadLooksOkay;
    BOOL _hasSize;
    BOOL _hasOffset;
    BOOL _finished;
    BOOL _temporary;
    BOOL _shouldReadRawEncryptedData;
    BOOL _shouldReadAssetContentUsingClientProxy;
    BOOL _isAlreadyRegistered;
    BOOL _isReaderReadFrom;
    BOOL _isRereferencedAssetUpload;
    unsigned int _chunkCount;
    NSURL *_fileURL;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    NSFileHandle *_clientOpenedFileHandle;
    NSNumber *_modTimeInSeconds;
    unsigned long long _itemID;
    double _progress;
    unsigned long long _fileSize;
    unsigned long long _paddedFileSize;
    unsigned long long _offset;
    unsigned long long _packageIndex;
    NSString *_putPackageSectionIdentifier;
    CKAsset *_asset;
    CKPackage *_package;
    CKRecordID *_recordID;
    NSString *_recordType;
    NSString *_recordKey;
    NSData *_signature;
    NSString *_itemTypeHint;
    NSURL *_contentBaseURL;
    NSString *_owner;
    NSString *_requestor;
    NSString *_authToken;
    CKAssetDownloadPreauthorization *_downloadPreauthorization;
    NSString *_uploadReceipt;
    double _uploadReceiptExpiration;
    NSMutableArray *_sectionItems;
    NSError *_error;
    NSData *_assetKey;
    NSData *_wrappedAssetKey;
    NSData *_clearAssetKey;
    NSData *_boundaryKey;
    NSData *_referenceSignature;
    CKDMMCSItemCommandWriter *_writer;
    unsigned long long _uploadTokenExpiration;
    unsigned long long _downloadTokenExpiration;
    NSDictionary *_assetChunkerOptions;
    CKDAssetZoneKey *_assetZoneKey;
    NSURL *_constructedAssetDownloadURL;
    unsigned long long _constructedAssetEstimatedSize;
    NSString *_trackingUUID;
}

@property(nonatomic) BOOL isRereferencedAssetUpload; // @synthesize isRereferencedAssetUpload=_isRereferencedAssetUpload;
@property(nonatomic) BOOL isReaderReadFrom; // @synthesize isReaderReadFrom=_isReaderReadFrom;
@property(nonatomic) BOOL isAlreadyRegistered; // @synthesize isAlreadyRegistered=_isAlreadyRegistered;
@property(nonatomic) BOOL shouldReadAssetContentUsingClientProxy; // @synthesize shouldReadAssetContentUsingClientProxy=_shouldReadAssetContentUsingClientProxy;
@property(nonatomic) BOOL shouldReadRawEncryptedData; // @synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData;
@property(nonatomic, getter=isTemporary) BOOL temporary; // @synthesize temporary=_temporary;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic) BOOL hasOffset; // @synthesize hasOffset=_hasOffset;
@property(nonatomic) BOOL hasSize; // @synthesize hasSize=_hasSize;
@property(retain, nonatomic) NSString *trackingUUID; // @synthesize trackingUUID=_trackingUUID;
@property(nonatomic) unsigned long long constructedAssetEstimatedSize; // @synthesize constructedAssetEstimatedSize=_constructedAssetEstimatedSize;
@property(retain, nonatomic) NSURL *constructedAssetDownloadURL; // @synthesize constructedAssetDownloadURL=_constructedAssetDownloadURL;
@property(retain, nonatomic) CKDAssetZoneKey *assetZoneKey; // @synthesize assetZoneKey=_assetZoneKey;
@property(retain, nonatomic) NSDictionary *assetChunkerOptions; // @synthesize assetChunkerOptions=_assetChunkerOptions;
@property(nonatomic) unsigned long long downloadTokenExpiration; // @synthesize downloadTokenExpiration=_downloadTokenExpiration;
@property(nonatomic) unsigned long long uploadTokenExpiration; // @synthesize uploadTokenExpiration=_uploadTokenExpiration;
@property(nonatomic) BOOL inMemoryDownloadLooksOkay; // @synthesize inMemoryDownloadLooksOkay=_inMemoryDownloadLooksOkay;
@property(retain, nonatomic) CKDMMCSItemCommandWriter *writer; // @synthesize writer=_writer;
@property(retain, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(retain, nonatomic) NSData *boundaryKey; // @synthesize boundaryKey=_boundaryKey;
@property(retain, nonatomic) NSData *clearAssetKey; // @synthesize clearAssetKey=_clearAssetKey;
@property(retain, nonatomic) NSData *wrappedAssetKey; // @synthesize wrappedAssetKey=_wrappedAssetKey;
@property(retain, nonatomic) NSData *assetKey; // @synthesize assetKey=_assetKey;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *sectionItems; // @synthesize sectionItems=_sectionItems;
@property(nonatomic) double uploadReceiptExpiration; // @synthesize uploadReceiptExpiration=_uploadReceiptExpiration;
@property(retain, nonatomic) NSString *uploadReceipt; // @synthesize uploadReceipt=_uploadReceipt;
@property(retain, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization; // @synthesize downloadPreauthorization=_downloadPreauthorization;
@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSString *requestor; // @synthesize requestor=_requestor;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSURL *contentBaseURL; // @synthesize contentBaseURL=_contentBaseURL;
@property(retain, nonatomic) NSString *itemTypeHint; // @synthesize itemTypeHint=_itemTypeHint;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
@property(retain, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) CKPackage *package; // @synthesize package=_package;
@property(retain, nonatomic) CKAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *putPackageSectionIdentifier; // @synthesize putPackageSectionIdentifier=_putPackageSectionIdentifier;
@property(nonatomic) unsigned long long packageIndex; // @synthesize packageIndex=_packageIndex;
@property(nonatomic) unsigned int chunkCount; // @synthesize chunkCount=_chunkCount;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long paddedFileSize; // @synthesize paddedFileSize=_paddedFileSize;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSNumber *modTimeInSeconds; // @synthesize modTimeInSeconds=_modTimeInSeconds;
@property(retain, nonatomic) NSFileHandle *clientOpenedFileHandle; // @synthesize clientOpenedFileHandle=_clientOpenedFileHandle;
@property(retain, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (id)readBytesOfInMemoryAssetContentWithProxy:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;
- (id)getFileMetadataWithFileHandle:(id)arg1 error:(id *)arg2;
- (id)getFileMetadataWithProxy:(id)arg1 fileHandle:(id)arg2 error:(id *)arg3;
- (id)getFileSizeWithError:(id *)arg1;
- (id)getFileSizeWithProxy:(id)arg1 error:(id *)arg2;
- (id)openWithError:(id *)arg1;
- (id)openWithProxy:(id)arg1 error:(id *)arg2;
- (id)_openInfo;
- (id)description;
- (id)CKPropertiesDescription;
- (void)clearFileSize;
- (BOOL)canBeRegistered;
- (id)initWithPackage:(id)arg1;
- (void)setupForGetChunkKeysWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end

