//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoggingSupport/OSLogEventStreamBase.h>

@class NSObject<OS_xpc_object>, OSLogEventLiveSource, _OSLogStreamFilter;

@interface OSLogEventLiveStream : OSLogEventStreamBase
{
    _OSLogStreamFilter *_streamFilter;
    NSObject<OS_xpc_object> *_diagdconn;
    OSLogEventLiveSource *_source;
    CDUnknownBlockType _dropnoteHandler;
}

@property(copy, nonatomic) CDUnknownBlockType dropnoteHandler; // @synthesize dropnoteHandler=_dropnoteHandler;
@property(readonly, nonatomic) OSLogEventLiveSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSObject<OS_xpc_object> *diagdconn; // @synthesize diagdconn=_diagdconn;
- (void).cxx_destruct;
- (void)activate;
- (void)_activateLiveStream;
- (void)_handleStreamedObject:(id)arg1 usingProxy:(id)arg2;
- (void)setFilterPredicate:(id)arg1;
- (void)setDroppedEventHandler:(CDUnknownBlockType)arg1;
- (id)initWithLiveSource:(id)arg1;

@end
