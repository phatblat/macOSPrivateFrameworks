//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject
{
    NSMutableDictionary *_networkOptions;
    long long _receiveTimeout;
}

@property(readonly, nonatomic) long long receiveTimeout; // @synthesize receiveTimeout=_receiveTimeout;
@property(readonly, nonatomic) NSMutableDictionary *networkOptions; // @synthesize networkOptions=_networkOptions;
- (void).cxx_destruct;
- (long long)receiveTimeoutValue;
- (const char *)port;
- (const char *)networkNameIdentifier;
- (const char *)localPort;
- (const char *)localAddr;
- (const char *)psk;
- (unsigned long long)family;
- (BOOL)useTLS;
- (BOOL)useUDP;
- (BOOL)useBonjour;
- (BOOL)useAWDL;
- (id)initWithOptions:(id)arg1;

@end

