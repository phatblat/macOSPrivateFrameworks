//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMAccessoryOwnershipToken, HMAddAccessoryRequest, HMSetupAccessoryBrowsingRequest, HMSetupAccessoryPayload, NSString;

@interface HMAccessorySetupPayload : NSObject
{
    HMSetupAccessoryPayload *_internalSetupPayload;
    HMAddAccessoryRequest *_addRequest;
    HMAccessoryOwnershipToken *_ownershipToken;
    HMSetupAccessoryBrowsingRequest *_accessoryBrowsingRequest;
    NSString *_suggestedRoomName;
}

@property(copy) NSString *suggestedRoomName; // @synthesize suggestedRoomName=_suggestedRoomName;
@property(retain) HMSetupAccessoryBrowsingRequest *accessoryBrowsingRequest; // @synthesize accessoryBrowsingRequest=_accessoryBrowsingRequest;
@property(readonly, nonatomic) HMAccessoryOwnershipToken *ownershipToken; // @synthesize ownershipToken=_ownershipToken;
@property(readonly, nonatomic) HMAddAccessoryRequest *addRequest; // @synthesize addRequest=_addRequest;
@property(retain) HMSetupAccessoryPayload *internalSetupPayload; // @synthesize internalSetupPayload=_internalSetupPayload;
- (void).cxx_destruct;
- (BOOL)_parseURLForBrowsingRequest:(id)arg1;
- (id)initWithAddRequest:(id)arg1 url:(id)arg2 ownershipToken:(id)arg3;
- (id)initWithURL:(id)arg1 ownershipToken:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

