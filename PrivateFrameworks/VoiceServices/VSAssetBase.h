//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface VSAssetBase : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSNumber *_compatibilityVersion;
    NSNumber *_contentVersion;
    NSString *_masteredVersion;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *masteredVersion; // @synthesize masteredVersion=_masteredVersion;
@property(copy, nonatomic) NSNumber *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(copy, nonatomic) NSNumber *compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

