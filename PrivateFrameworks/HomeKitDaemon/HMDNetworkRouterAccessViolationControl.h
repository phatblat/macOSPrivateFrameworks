//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDTLVProtocol.h"
#import "NSCopying.h"

@class HMDNetworkRouterAccessViolationControlOperation, HMDNetworkRouterClientIdentifierList, NSString;

@interface HMDNetworkRouterAccessViolationControl : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterAccessViolationControlOperation *_operation;
    HMDNetworkRouterClientIdentifierList *_clientIdentifierList;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) HMDNetworkRouterClientIdentifierList *clientIdentifierList; // @synthesize clientIdentifierList=_clientIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterAccessViolationControlOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithOperation:(id)arg1 clientIdentifierList:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
