//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordZoneID, NSData;

__attribute__((visibility("hidden")))
@interface CKDZonePCSData : CKDPCSData
{
    struct _OpaquePCSShareProtection *_zoneishPCS;
    CKRecordZoneID *_zoneID;
    NSData *_zoneishPCSData;
    NSData *_zoneishPublicKeyID;
}

+ (BOOL)supportsSecureCoding;
+ (id)dataWithZone:(id)arg1;
@property(retain, nonatomic) NSData *zoneishPublicKeyID; // @synthesize zoneishPublicKeyID=_zoneishPublicKeyID;
@property(copy, nonatomic) NSData *zoneishPCSData; // @synthesize zoneishPCSData=_zoneishPCSData;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)itemID;
@property(nonatomic) struct _OpaquePCSShareProtection *zoneishPCS;
- (void)dealloc;
- (id)initWithZone:(id)arg1;

@end

