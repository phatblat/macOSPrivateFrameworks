//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ServerFoundation/XSAdminAction.h>

#import "NSURLConnectionDelegate.h"
#import "NSURLDownloadDelegate.h"

@class NSFileHandle, NSString, NSTask, NSURLConnection;

@interface XSAdminFileTransferAction : XSAdminAction <NSURLConnectionDelegate, NSURLDownloadDelegate>
{
    NSString *_directoryName;
    NSString *_fileName;
    NSString *_destinationFilePath;
    NSURLConnection *_urlConnection;
    NSFileHandle *_fileHandle;
    NSTask *_expansionTask;
    int _receivedContentLength;
    int _expectedContentLength;
    NSString *_archiveMethod;
}

+ (id)actionToCopyRemoteFile:(id)arg1 inDirectoryName:(id)arg2 toLocalPath:(id)arg3 session:(id)arg4;
+ (id)actionToCopyRemoteFile:(id)arg1 inDirectoryName:(id)arg2 toLocalPath:(id)arg3;
@property(retain) NSString *archiveMethod; // @synthesize archiveMethod=_archiveMethod;
@property(retain) NSTask *expansionTask; // @synthesize expansionTask=_expansionTask;
@property(retain) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain) NSString *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
@property(retain) NSString *directoryName; // @synthesize directoryName=_directoryName;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
- (id)responseDescription;
- (id)requestDescription;
- (id)title;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)stopExecution;
- (void)startExecution;
- (id)_encodedStringForDictionary:(id)arg1;
- (id)_encodedStringForString:(id)arg1;
- (id)_dataForDictionary:(id)arg1;
- (id)_dataForDictionary:(id)arg1 attemptCleanup:(BOOL)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

