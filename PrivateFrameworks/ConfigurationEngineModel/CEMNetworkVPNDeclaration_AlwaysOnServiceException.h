//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNDeclaration_AlwaysOnServiceException : CEMPayloadBase
{
    NSString *_payloadServiceName;
    NSString *_payloadAction;
}

+ (id)buildRequiredOnlyWithServiceName:(id)arg1 withAction:(id)arg2;
+ (id)buildWithServiceName:(id)arg1 withAction:(id)arg2;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadAction; // @synthesize payloadAction=_payloadAction;
@property(copy, nonatomic) NSString *payloadServiceName; // @synthesize payloadServiceName=_payloadServiceName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end
