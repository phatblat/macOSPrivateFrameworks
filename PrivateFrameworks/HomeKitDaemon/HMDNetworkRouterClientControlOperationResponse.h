//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDTLVProtocol.h"
#import "NSCopying.h"

@class HMDNetworkRouterClientConfiguration, HMDNetworkRouterControlOperationStatus, NSString;

@interface HMDNetworkRouterClientControlOperationResponse : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterControlOperationStatus *_status;
    HMDNetworkRouterClientConfiguration *_configuration;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) HMDNetworkRouterClientConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) HMDNetworkRouterControlOperationStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithStatus:(id)arg1 configuration:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
