//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDSoftwareUpdate.h>

@class NSArray, NSDate, NSDictionary;

@interface ASDSoftwareUpdateMac : ASDSoftwareUpdate
{
}

+ (BOOL)supportsSecureCoding;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)updateDictionary;
- (long long)storeItemIdentifier;
- (id)releaseDate;
- (id)externalVersionIdentifier;
- (id)buyParams;
- (id)bundleIdentifier;
- (id)initWithUpdateDictionary:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSArray *blockedBy; // @dynamic blockedBy;
@property(nonatomic, getter=isDownloaded) BOOL downloaded; // @dynamic downloaded;
@property(copy, nonatomic) NSDate *installDate; // @dynamic installDate;
@property(copy, nonatomic) NSDictionary *metrics; // @dynamic metrics;
@property(nonatomic, getter=isPerDevice) BOOL perDevice; // @dynamic perDevice;
@property(nonatomic, getter=isProfileValidated) BOOL profileValidated; // @dynamic profileValidated;
@property(copy, nonatomic) NSDictionary *rawUpdateDictionary; // @dynamic rawUpdateDictionary;
@property(nonatomic) long long rawUpdateState; // @dynamic rawUpdateState;
@property(copy, nonatomic) NSDate *timestamp; // @dynamic timestamp;
@property(nonatomic) long long updateState; // @dynamic updateState;

@end

