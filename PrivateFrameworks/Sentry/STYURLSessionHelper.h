//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"

@class NSMutableDictionary, NSString, NSURLSession, STYDiagnosticUploader;

@interface STYURLSessionHelper : NSObject <NSURLSessionDataDelegate>
{
    NSURLSession *_session;
    STYDiagnosticUploader *_uploader;
    NSMutableDictionary *_responseData;
}

+ (id)sessionWithConfiguration:(id)arg1 uploader:(id)arg2 queue:(id)arg3;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)_responseForFinishedTask:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)initWithConfiguration:(id)arg1 uploader:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

