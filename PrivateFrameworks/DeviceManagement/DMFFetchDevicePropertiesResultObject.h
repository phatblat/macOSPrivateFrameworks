//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class DMFDevice, NSDictionary;

@interface DMFFetchDevicePropertiesResultObject : CATTaskResultObject
{
    NSDictionary *_valuesByPropertyKey;
    NSDictionary *_errorsByPropertyKey;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *errorsByPropertyKey; // @synthesize errorsByPropertyKey=_errorsByPropertyKey;
@property(readonly, copy, nonatomic) NSDictionary *valuesByPropertyKey; // @synthesize valuesByPropertyKey=_valuesByPropertyKey;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
@property(readonly, nonatomic) DMFDevice *device;
- (id)valueForPropertyKey:(id)arg1 error:(id *)arg2;
- (id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2;

@end

