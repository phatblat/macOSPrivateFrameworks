//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface SPBeaconDescription : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_stableIdentifier;
    NSString *_name;
    NSString *_model;
    NSString *_systemVersion;
    long long _vendorId;
    long long _productId;
    long long _role;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) long long productId; // @synthesize productId=_productId;
@property(nonatomic) long long vendorId; // @synthesize vendorId=_vendorId;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *stableIdentifier; // @synthesize stableIdentifier=_stableIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStableIdentifier:(id)arg1 name:(id)arg2 model:(id)arg3 systemVersion:(id)arg4 vendorId:(long long)arg5 productId:(long long)arg6 role:(long long)arg7;

@end
