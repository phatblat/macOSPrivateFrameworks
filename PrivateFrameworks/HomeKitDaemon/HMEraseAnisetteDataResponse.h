//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMRemoteLoginMessage.h>

#import "HMRemoteLoginMessageProtocol.h"

@class NSDictionary, NSString;

@interface HMEraseAnisetteDataResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol>
{
    BOOL _didSucceed;
}

+ (id)xpcMessageName;
+ (id)messageName;
+ (BOOL)supportsSecureCoding;
+ (id)objWithMessage:(id)arg1;
+ (id)objWithDict:(id)arg1;
@property(nonatomic) BOOL didSucceed; // @synthesize didSucceed=_didSucceed;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
- (id)xpcMessageName;
- (id)messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

