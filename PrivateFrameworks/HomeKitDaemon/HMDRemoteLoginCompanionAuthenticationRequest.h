//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginAuthenticationRequest.h>

#import "HMRemoteLoginMessageProtocol.h"

@class ACAccount, AKDevice, NSDictionary, NSString;

@interface HMDRemoteLoginCompanionAuthenticationRequest : HMDRemoteLoginAuthenticationRequest <HMRemoteLoginMessageProtocol>
{
    ACAccount *_account;
    AKDevice *_companionDevice;
}

+ (id)xpcMessageName;
+ (id)messageName;
+ (BOOL)supportsSecureCoding;
+ (id)objWithMessage:(id)arg1;
+ (id)objWithDict:(id)arg1;
@property(retain, nonatomic) AKDevice *companionDevice; // @synthesize companionDevice=_companionDevice;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

