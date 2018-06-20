//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString;

@interface DMFCertificate : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isIdentity;
    NSString *_commonName;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isIdentity; // @synthesize isIdentity=_isIdentity;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *commonName; // @synthesize commonName=_commonName;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCommonName:(id)arg1 data:(id)arg2 isIdentity:(BOOL)arg3;

@end

