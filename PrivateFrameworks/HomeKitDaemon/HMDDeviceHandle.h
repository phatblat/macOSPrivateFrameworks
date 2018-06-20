//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HMDAccountHandle, NSString, NSUUID, _HMDDeviceHandle;

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding>
{
    _HMDDeviceHandle *_internal;
}

+ (BOOL)supportsSecureCoding;
+ (id)deviceHandleForDestination:(id)arg1;
@property(readonly, copy) _HMDDeviceHandle *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *destination;
@property(readonly, copy) HMDAccountHandle *accountHandle;
@property(readonly, getter=isGlobal) BOOL global;
@property(readonly, getter=isLocal) BOOL local;
@property(readonly, copy) NSUUID *identifier;
- (id)attributeDescriptions;
- (id)shortDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithInternal:(id)arg1;
- (id)init;

@end

