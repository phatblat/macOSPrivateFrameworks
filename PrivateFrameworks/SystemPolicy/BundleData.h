//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface BundleData : NSObject
{
    NSURL *_url;
    CDUnknownBlockType _reloadHandler;
    NSString *_version;
    NSDate *_timestamp;
    struct __FSEventStream *_stream;
}

@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)forceReload;
- (void)reloadIfNecessary;
- (void)loadInternalData:(id)arg1;
- (void)doReload;
- (void)setupFSStream;
- (id)initWithURL:(id)arg1 withReloadBlock:(CDUnknownBlockType)arg2 watchForUpdates:(BOOL)arg3;
- (void)dealloc;
- (id)init;

@end
