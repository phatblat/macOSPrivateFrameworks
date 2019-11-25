//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CRKApplicationDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _includeIcon;
    BOOL _includeBadgeIcon;
    NSString *_bundleIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL includeBadgeIcon; // @synthesize includeBadgeIcon=_includeBadgeIcon;
@property(readonly, nonatomic) BOOL includeIcon; // @synthesize includeIcon=_includeIcon;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqualToApplicationDescriptor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 includeIcon:(BOOL)arg2 includeBadgeIcon:(BOOL)arg3;
- (id)init;

@end

