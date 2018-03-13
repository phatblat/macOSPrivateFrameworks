//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface _RWITCPRelayMessage : NSObject
{
    NSData *_payload;
    BOOL _writtenHeader;
    unsigned long long _writtenPayloadOffset;
}

+ (id)TCPRelayMessageWithPayload:(id)arg1;
+ (id)TCPRelayMessageFromDataStream:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (long long)writeInternal:(CDUnknownBlockType)arg1;
- (long long)writeMobileDevice:(struct _AMDServiceConnection *)arg1;
- (long long)write:(int)arg1;
@property(readonly, nonatomic) unsigned long long length;
- (id)initWithPayload:(id)arg1;

@end

