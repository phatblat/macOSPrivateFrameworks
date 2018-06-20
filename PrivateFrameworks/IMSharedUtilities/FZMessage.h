//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMSharedUtilities/IMMessageItem.h>

#import "IMRemoteObjectCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface FZMessage : IMMessageItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

