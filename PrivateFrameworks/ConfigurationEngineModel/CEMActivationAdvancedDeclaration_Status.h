//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMActivationAdvancedDeclaration_Status : CEMPayloadBase
{
    NSArray *_statusInstalledConfigurations;
}

+ (id)buildWithInstalledConfigurations:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusInstalledConfigurations; // @synthesize statusInstalledConfigurations=_statusInstalledConfigurations;
- (void).cxx_destruct;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end
