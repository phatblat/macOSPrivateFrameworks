//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CKDMMCSItemGroupContext, CKFileMetadata, NSError;

@protocol CDKMMCSItemGroupContextDelegate
- (BOOL)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 didReadFromItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 offset:(unsigned long long)arg3 bytes:(char *)arg4 length:(unsigned long long)arg5 bytesRead:(unsigned long long *)arg6 error:(id *)arg7;
- (BOOL)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 willReadFromItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 offset:(unsigned long long)arg3 bytes:(char *)arg4 length:(unsigned long long)arg5 bytesRead:(unsigned long long *)arg6 error:(id *)arg7;
- (CKFileMetadata *)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 didGetFileMetadataItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 fileMetadata:(CKFileMetadata *)arg3 error:(NSError *)arg4;
- (BOOL)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 willGetFileMetadataItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 error:(id *)arg3;
- (void)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 didCloseItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 result:(BOOL)arg3 error:(NSError *)arg4;
- (BOOL)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 willCloseItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 error:(id *)arg3;
- (void)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 didOpenItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 result:(BOOL)arg3 error:(NSError *)arg4;
- (BOOL)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 willOpenItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 error:(id *)arg3;
- (id <CKDMMCSItemReaderWriterProtocol>)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 didGetItemReader:(id <CKDMMCSItemReaderWriterProtocol>)arg2 itemID:(unsigned long long)arg3;
- (BOOL)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 willGetMMCSItemReaderForItemID:(unsigned long long)arg2;
@end

