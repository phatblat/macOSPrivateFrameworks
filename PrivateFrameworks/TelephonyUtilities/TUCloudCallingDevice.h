//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface TUCloudCallingDevice : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _defaultPairedDevice;
    BOOL _supportsRestrictingSecondaryCalling;
    NSString *_name;
    NSString *_modelIdentifier;
    NSString *_uniqueID;
    NSArray *_linkedUserURIs;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *linkedUserURIs; // @synthesize linkedUserURIs=_linkedUserURIs;
@property(nonatomic) BOOL supportsRestrictingSecondaryCalling; // @synthesize supportsRestrictingSecondaryCalling=_supportsRestrictingSecondaryCalling;
@property(nonatomic, getter=isDefaultPairedDevice) BOOL defaultPairedDevice; // @synthesize defaultPairedDevice=_defaultPairedDevice;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

