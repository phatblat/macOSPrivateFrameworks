//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCSessionMessaging : NSObject
{
    NSMutableDictionary *topics;
    unsigned int p2pID;
}

- (id)newDictionaryFromUnpackedMomentsMessage:(id)arg1;
- (id)newPackedMessageFromMomentsDictionary:(id)arg1;
- (id)newDictionaryFromUnpackedMessage:(id)arg1;
- (id)newPackedMessageFromDictionary:(id)arg1;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2;
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(BOOL)arg3 receiveHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)stopMessaging;
- (id)initWithP2PID:(unsigned int)arg1 remoteVersion:(id)arg2;

@end

