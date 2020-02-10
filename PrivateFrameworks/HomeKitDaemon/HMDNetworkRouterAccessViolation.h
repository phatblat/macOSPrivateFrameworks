//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDTLVProtocol.h"
#import "NSCopying.h"

@class HMDTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterAccessViolation : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDTLVUnsignedNumberValue *_clientIdentifier;
    HMDTLVUnsignedNumberValue *_lastViolationTimestamp;
    HMDTLVUnsignedNumberValue *_lastResetTimestamp;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *lastResetTimestamp; // @synthesize lastResetTimestamp=_lastResetTimestamp;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *lastViolationTimestamp; // @synthesize lastViolationTimestamp=_lastViolationTimestamp;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithClientIdentifier:(id)arg1 lastViolationTimestamp:(id)arg2 lastResetTimestamp:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
