//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData;

@interface IDSEndpointTransparencyState : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_pushToken;
    long long _verificationState;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long verificationState; // @synthesize verificationState=_verificationState;
@property(readonly, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToEndpointTransparencyState:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithPushToken:(id)arg1 verificationState:(long long)arg2;

@end
