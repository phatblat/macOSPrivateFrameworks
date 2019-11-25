//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface ASAuthorizationRequest : NSObject <NSCopying, NSSecureCoding>
{
    id <ASAuthorizationProvider> _provider;
}

+ (BOOL)supportsSecureCoding;
+ (id)new;
@property(readonly, nonatomic) id <ASAuthorizationProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (id)init;

@end

