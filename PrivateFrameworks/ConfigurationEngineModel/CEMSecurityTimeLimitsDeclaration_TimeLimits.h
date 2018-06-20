//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSecurityTimeLimitsDeclaration_Allowance;

@interface CEMSecurityTimeLimitsDeclaration_TimeLimits : CEMPayloadBase
{
    CEMSecurityTimeLimitsDeclaration_Allowance *_payloadWeekdayAllowance;
    CEMSecurityTimeLimitsDeclaration_Allowance *_payloadWeekdayCurfew;
    CEMSecurityTimeLimitsDeclaration_Allowance *_payloadWeekendAllowance;
    CEMSecurityTimeLimitsDeclaration_Allowance *_payloadWeekendCurfew;
}

+ (id)buildWithWeekdayAllowance:(id)arg1 withWeekdayCurfew:(id)arg2 withWeekendAllowance:(id)arg3 withWeekendCurfew:(id)arg4;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekendCurfew; // @synthesize payloadWeekendCurfew=_payloadWeekendCurfew;
@property(copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekendAllowance; // @synthesize payloadWeekendAllowance=_payloadWeekendAllowance;
@property(copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekdayCurfew; // @synthesize payloadWeekdayCurfew=_payloadWeekdayCurfew;
@property(copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekdayAllowance; // @synthesize payloadWeekdayAllowance=_payloadWeekdayAllowance;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

