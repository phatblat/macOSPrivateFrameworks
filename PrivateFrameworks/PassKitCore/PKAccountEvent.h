//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKCloudStoreCoding.h"

@class NSDate, NSSet, NSString;

@interface PKAccountEvent : NSObject <PKCloudStoreCoding>
{
    BOOL _blockNotification;
    NSString *_identifier;
    NSString *_accountIdentifier;
    long long _type;
    NSDate *_date;
    NSDate *_expirationDate;
    NSSet *_items;
    unsigned long long _updateReasons;
}

+ (BOOL)supportsSecureCoding;
+ (id)eventIdentifierFromRecordName:(id)arg1;
@property(readonly, nonatomic) unsigned long long updateReasons; // @synthesize updateReasons=_updateReasons;
@property(retain, nonatomic) NSSet *items; // @synthesize items=_items;
@property(nonatomic) BOOL blockNotification; // @synthesize blockNotification=_blockNotification;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToAccountEvent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)itemType;
- (id)recordNameForItem:(id)arg1;
- (id)recordTypesAndNames;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)updateReasonsDescription;
@property(readonly, nonatomic) BOOL updateReasonIsInitialDownload;
- (void)addUpdateReasons:(unsigned long long)arg1;
- (id)recordName;

@end
