//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HMAccessoryCollectionSetting, HMFUnfairLock, NSData, NSUUID;

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    id <NSObject><NSCopying><NSSecureCoding> _value;
    NSData *_serializedValue;
    NSUUID *_identifier;
    HMAccessoryCollectionSetting *_setting;
}

+ (BOOL)supportsSecureCoding;
+ (id)shortDescription;
@property __weak HMAccessoryCollectionSetting *setting; // @synthesize setting=_setting;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) id <NSObject><NSCopying><NSSecureCoding> value; // @synthesize value=_value;
@property(readonly) NSData *serializedValue; // @synthesize serializedValue=_serializedValue;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1;
- (id)init;

@end

