//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSSecureCoding.h"

@class HMFWoBLEInfo, HMFWoWLANInfo, NSString;

@interface HMFConnectivityInfo : HMFObject <NSSecureCoding>
{
    NSString *_accessoryIdentifier;
    HMFWoBLEInfo *_woBLEInfo;
    HMFWoWLANInfo *_woWLANInfo;
}

+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) HMFWoWLANInfo *woWLANInfo; // @synthesize woWLANInfo=_woWLANInfo;
@property(retain, nonatomic) HMFWoBLEInfo *woBLEInfo; // @synthesize woBLEInfo=_woBLEInfo;
@property(readonly, nonatomic) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateWithWoWLANInfo:(id)arg1;
- (void)updateWithWoBLEInfo:(id)arg1;
- (id)initWithAccessory:(id)arg1 woWLANInfo:(id)arg2;
- (id)initWithAccessory:(id)arg1 woBLEInfo:(id)arg2;

@end
