//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface PLAssetDownloadManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requestsById;
    NSMutableDictionary *_progressById;
    // Error parsing type: Ai, name: _currentRequestId
    id <PLAssetDownloadManagerDelegate> _delegate;
}

+ (id)defaultManager;
@property(nonatomic) __weak id <PLAssetDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelRequest:(int)arg1;
- (int)requestRequiredResourcesForManagedAssetObjectUUID:(id)arg1 library:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;

@end

