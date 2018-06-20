//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface AKDeviceListRequestContext : NSObject <NSSecureCoding>
{
    BOOL _includeUntrustedDevices;
    BOOL _includeFamilyDevices;
    NSString *_altDSID;
    NSArray *_services;
    NSArray *_operatingSystems;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *operatingSystems; // @synthesize operatingSystems=_operatingSystems;
@property(copy, nonatomic) NSArray *services; // @synthesize services=_services;
@property(nonatomic) BOOL includeFamilyDevices; // @synthesize includeFamilyDevices=_includeFamilyDevices;
@property(nonatomic) BOOL includeUntrustedDevices; // @synthesize includeUntrustedDevices=_includeUntrustedDevices;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

