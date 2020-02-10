//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMPredicateCompositeBudget_Monitors : CEMPayloadBase
{
    NSArray *_payloadApps;
    NSArray *_payloadWebSites;
    NSArray *_payloadCategories;
}

+ (id)buildRequiredOnly;
+ (id)buildWithApps:(id)arg1 withWebSites:(id)arg2 withCategories:(id)arg3;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSArray *payloadCategories; // @synthesize payloadCategories=_payloadCategories;
@property(copy, nonatomic) NSArray *payloadWebSites; // @synthesize payloadWebSites=_payloadWebSites;
@property(copy, nonatomic) NSArray *payloadApps; // @synthesize payloadApps=_payloadApps;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end
