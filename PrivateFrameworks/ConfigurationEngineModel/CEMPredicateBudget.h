//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPredicateBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSArray, NSString;

@interface CEMPredicateBudget : CEMPredicateBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCalendarIdentifier;
    NSString *_payloadMonitor;
    NSArray *_payloadIdentifiers;
    NSArray *_payloadNotificationTimes;
    NSArray *_payloadTimeBudget;
}

+ (id)buildRequiredOnlyWithMonitor:(id)arg1 withTimeBudget:(id)arg2;
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withTimeBudget:(id)arg4;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSArray *payloadTimeBudget; // @synthesize payloadTimeBudget=_payloadTimeBudget;
@property(copy, nonatomic) NSArray *payloadNotificationTimes; // @synthesize payloadNotificationTimes=_payloadNotificationTimes;
@property(copy, nonatomic) NSArray *payloadIdentifiers; // @synthesize payloadIdentifiers=_payloadIdentifiers;
@property(copy, nonatomic) NSString *payloadMonitor; // @synthesize payloadMonitor=_payloadMonitor;
@property(copy, nonatomic) NSString *payloadCalendarIdentifier; // @synthesize payloadCalendarIdentifier=_payloadCalendarIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

