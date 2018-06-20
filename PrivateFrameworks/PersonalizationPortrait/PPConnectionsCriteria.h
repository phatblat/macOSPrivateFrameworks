//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface PPConnectionsCriteria : NSObject <NSSecureCoding>
{
    unsigned char _locationField;
    NSString *_bundleIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) unsigned char locationField; // @synthesize locationField=_locationField;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationField:(unsigned char)arg1 bundleIdentifier:(id)arg2;

@end

