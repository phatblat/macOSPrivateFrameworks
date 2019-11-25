//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMPredicateCompositeBudget_TimeBudgetItem : CEMPayloadBase
{
    NSNumber *_payloadSeconds;
    NSArray *_payloadDays;
}

+ (id)buildRequiredOnlyWithSeconds:(id)arg1;
+ (id)buildWithSeconds:(id)arg1 withDays:(id)arg2;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSArray *payloadDays; // @synthesize payloadDays=_payloadDays;
@property(copy, nonatomic) NSNumber *payloadSeconds; // @synthesize payloadSeconds=_payloadSeconds;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

