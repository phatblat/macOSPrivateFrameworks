//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface LPSpecializationMetadata : NSObject <NSSecureCoding, NSCopying>
{
    BOOL __dummyPropertyForObservation;
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL _dummyPropertyForObservation; // @synthesize _dummyPropertyForObservation=__dummyPropertyForObservation;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

