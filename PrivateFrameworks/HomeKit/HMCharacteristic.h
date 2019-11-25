//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMCharacteristicMetadata, HMFUnfairLock, HMService, NSArray, NSDate, NSDictionary, NSNumber, NSString, NSUUID, _HMContext;

@interface HMCharacteristic : NSObject <NSSecureCoding, HMObjectMerge>
{
    HMFUnfairLock *_lock;
    BOOL _notificationEnabled;
    BOOL _requiresDeviceUnlock;
    BOOL _hasAuthorizationData;
    BOOL _notificationEnabledByThisClient;
    NSUUID *_uniqueIdentifier;
    NSString *_characteristicType;
    NSArray *_properties;
    id _value;
    NSDate *_valueUpdatedTime;
    NSDate *_notificationEnabledTime;
    HMService *_service;
    HMCharacteristicMetadata *_metadata;
    _HMContext *_context;
    NSNumber *_instanceID;
}

+ (id)__localizedDescriptionForCharacteristicType:(id)arg1;
+ (id)localizedDescriptionForCharacteristicType:(id)arg1;
+ (id)_characteristicTypeAsString:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)characteristicWithCharacteristicReference:(id)arg1 home:(id)arg2;
+ (id)characteristicWithSerializedDictionaryRepresentation:(id)arg1 home:(id)arg2;
@property(nonatomic) BOOL notificationEnabledByThisClient; // @synthesize notificationEnabledByThisClient=_notificationEnabledByThisClient;
@property(readonly, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) HMCharacteristicMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) __weak HMService *service; // @synthesize service=_service;
@property(copy, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;
@property(nonatomic) BOOL requiresDeviceUnlock; // @synthesize requiresDeviceUnlock=_requiresDeviceUnlock;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *localizedDescription;
- (id)_characteristicTypeDescription;
- (void)_updateAuthorizationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAuthorizationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_enableNotification:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enableNotification:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_readValueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)readValueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_writeValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateValue:(id)arg1 updateTime:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mapHAPProperties:(long long)arg1;
- (id)logIdentifier;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property BOOL hasAuthorizationData; // @synthesize hasAuthorizationData=_hasAuthorizationData;
@property(copy, nonatomic) NSDate *notificationEnabledTime; // @synthesize notificationEnabledTime=_notificationEnabledTime;
- (void)setValueUpdateTime:(id)arg1;
@property(nonatomic, getter=isNotificationEnabled) BOOL notificationEnabled; // @synthesize notificationEnabled=_notificationEnabled;
@property(copy, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
- (void)__configureWithContext:(id)arg1 service:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)init;
@property(readonly, copy) NSDictionary *serializedDictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

