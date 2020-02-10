//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableURLRequest;

@interface HMCameraClipDownloadAssetDataTask : NSObject
{
    NSMutableURLRequest *_urlRequest;
    id <HMCameraClipDownloadAssetDataTaskHandling> _handler;
}

@property(readonly) id <HMCameraClipDownloadAssetDataTaskHandling> handler; // @synthesize handler=_handler;
@property(readonly) NSMutableURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
- (void).cxx_destruct;
- (id)downloadDataForByteRange:(struct _NSRange)arg1;
- (id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2 handler:(id)arg3;
- (id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2;

@end
