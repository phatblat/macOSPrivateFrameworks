//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSystemEnergySaverDeclaration_RepeatingPowerItem : CEMPayloadBase
{
    NSString *_payloadEventtype;
    NSNumber *_payloadWeekdays;
    NSNumber *_payloadTime;
}

+ (id)buildRequiredOnlyWithEventtype:(id)arg1;
+ (id)buildWithEventtype:(id)arg1 withWeekdays:(id)arg2 withTime:(id)arg3;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadTime; // @synthesize payloadTime=_payloadTime;
@property(copy, nonatomic) NSNumber *payloadWeekdays; // @synthesize payloadWeekdays=_payloadWeekdays;
@property(copy, nonatomic) NSString *payloadEventtype; // @synthesize payloadEventtype=_payloadEventtype;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

