//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "HMFObject.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString, NSUUID;

@interface HMFMessageDestination : HMFObject <HMFObject, NSCopying, NSSecureCoding>
{
    NSUUID *_target;
}

+ (BOOL)supportsSecureCoding;
+ (id)allMessageDestinations;
@property(readonly, copy, nonatomic) NSUUID *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *shortDescription;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithTarget:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

