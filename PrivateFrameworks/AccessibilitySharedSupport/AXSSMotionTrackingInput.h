//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface AXSSMotionTrackingInput : NSObject <NSSecureCoding, NSCopying>
{
}

+ (id)motionTrackingInputFromPlistDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)initWithPlistDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *plistDictionary;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToMotionTrackingInput:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long trackingType;
@property(readonly, nonatomic) BOOL supportsLookAtPoint;
@property(readonly, nonatomic) BOOL supportsExpressions;
@property(readonly, nonatomic) BOOL isHIDDevice;
@property(readonly, nonatomic) BOOL isCamera;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;

@end
