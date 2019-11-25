//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileWrapper.h"

@class NSURL;

@interface ICNFMCLargeAttachmentFileWrapper : NSFileWrapper
{
    unsigned long long _attachmentSize;
    NSURL *_fileToCopy;
}

+ (id)localAttachmentFilesDirectory;
+ (id)ic_fileWrapperWithDictionaryRepresentation:(id)arg1;
+ (id)fileWrapperWithURL:(id)arg1 andContentID:(id)arg2;
@property(retain, nonatomic) NSURL *fileToCopy; // @synthesize fileToCopy=_fileToCopy;
@property(nonatomic) unsigned long long approximateSize; // @synthesize approximateSize=_attachmentSize;
- (void).cxx_destruct;
- (BOOL)isALargeAttachment;
- (id)symbolicLinkDestinationURL;
- (id)ic_archivedDataWithPartNumber:(id)arg1;

@end

