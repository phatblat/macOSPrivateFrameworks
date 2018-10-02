//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSUUID, TUHandle;

@interface TUSenderIdentity : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    NSUUID *_accountUUID;
    TUHandle *_handle;
    NSString *_localizedName;
    NSString *_localizedShortName;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *localizedShortName; // @synthesize localizedShortName=_localizedShortName;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) NSUUID *accountUUID; // @synthesize accountUUID=_accountUUID;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (BOOL)isEqualToSenderIdentity:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 accountUUID:(id)arg2 localizedName:(id)arg3 localizedShortName:(id)arg4 handle:(id)arg5;

@end

