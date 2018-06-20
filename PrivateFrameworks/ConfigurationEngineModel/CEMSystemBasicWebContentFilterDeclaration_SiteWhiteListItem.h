//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemBasicWebContentFilterDeclaration_SiteWhiteListItem : CEMPayloadBase
{
    NSString *_payloadAddress;
    NSString *_payloadPageTitle;
}

+ (id)buildWithAddress:(id)arg1 withPageTitle:(id)arg2;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadPageTitle; // @synthesize payloadPageTitle=_payloadPageTitle;
@property(copy, nonatomic) NSString *payloadAddress; // @synthesize payloadAddress=_payloadAddress;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

