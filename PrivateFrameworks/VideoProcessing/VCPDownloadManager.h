//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionTaskDelegate.h"

@class NSMutableData, NSObject<OS_dispatch_semaphore>, NSString, NSURLSession, NSURLSessionDataTask;

@interface VCPDownloadManager : NSObject <NSURLSessionTaskDelegate>
{
    NSObject<OS_dispatch_semaphore> *_mutex;
    NSMutableData *_buffer;
    NSURLSession *_session;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSURLSessionDataTask *_dataTask;
    CDUnknownBlockType _cancel;
}

+ (unsigned long long)maxSizeBytes;
+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)flush;
- (id)requestDownloadOfResource:(id)arg1;
- (id)requestDownloadFromURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
