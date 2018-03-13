//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSUStreamReadChannel.h"

@class NSString, TSUBufferedReadChannel;

__attribute__((visibility("hidden")))
@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel>
{
    TSUBufferedReadChannel *_bufferedReadChannel;
}

- (void).cxx_destruct;
- (void)close;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithBufferedReadChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

