//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError, NSString, NSURL;

@interface RPFileTransferItem : NSObject
{
    BOOL _completed;
    long long _fileSize;
    CDUnknownBlockType _completionHandler;
    NSString *_filename;
    NSURL *_itemURL;
    NSDictionary *_metadata;
    NSData *_sha256HashData;
    NSError *_error;
    unsigned long long _estimatedSize;
    NSData *_fileData;
    unsigned long long _fileID;
    unsigned long long _metadataSize;
}

@property(nonatomic) unsigned long long metadataSize; // @synthesize metadataSize=_metadataSize;
@property(nonatomic) unsigned long long fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(nonatomic) unsigned long long estimatedSize; // @synthesize estimatedSize=_estimatedSize;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(copy, nonatomic) NSData *sha256HashData; // @synthesize sha256HashData=_sha256HashData;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (id)init;

@end

