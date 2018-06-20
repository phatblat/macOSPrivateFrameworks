//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBPair, _INPBString;

@protocol _INPBIntentMetadata <NSObject>
+ (Class)parameterImagesType;
@property(readonly, nonatomic) BOOL hasUserUtterance;
@property(retain, nonatomic) _INPBString *userUtterance;
@property(nonatomic) BOOL hasUserConfirmationRequired;
@property(nonatomic) BOOL userConfirmationRequired;
@property(nonatomic) BOOL hasTriggerMethod;
@property(nonatomic) int triggerMethod;
@property(readonly, nonatomic) BOOL hasSuggestedInvocationPhrase;
@property(copy, nonatomic) NSString *suggestedInvocationPhrase;
@property(readonly, nonatomic) unsigned long long parameterImagesCount;
@property(copy, nonatomic) NSArray *parameterImages;
@property(readonly, nonatomic) BOOL hasOriginatingDeviceIdsIdentifier;
@property(copy, nonatomic) NSString *originatingDeviceIdsIdentifier;
@property(readonly, nonatomic) BOOL hasIntentId;
@property(copy, nonatomic) NSString *intentId;
@property(readonly, nonatomic) BOOL hasIntentDescription;
@property(copy, nonatomic) NSString *intentDescription;
@property(nonatomic) BOOL hasConfirmed;
@property(nonatomic) BOOL confirmed;
@property(nonatomic) BOOL hasBackgroundLaunch;
@property(nonatomic) BOOL backgroundLaunch;
@property(readonly, nonatomic) BOOL hasSystemExtensionBundleId;
@property(copy, nonatomic) NSString *systemExtensionBundleId;
@property(readonly, nonatomic) unsigned long long requiredEntitlementsCount;
@property(readonly, nonatomic) int *requiredEntitlements;
@property(readonly, nonatomic) BOOL hasNanoLaunchId;
@property(copy, nonatomic) NSString *nanoLaunchId;
@property(readonly, nonatomic) BOOL hasLaunchId;
@property(copy, nonatomic) NSString *launchId;
@property(nonatomic) BOOL hasIntentCategory;
@property(nonatomic) int intentCategory;
@property(nonatomic) BOOL hasExecutionContext;
@property(nonatomic) int executionContext;
@property(readonly, nonatomic) BOOL hasCategoryVerb;
@property(copy, nonatomic) NSString *categoryVerb;
- (int)StringAsTriggerMethod:(NSString *)arg1;
- (NSString *)triggerMethodAsString:(int)arg1;
- (_INPBPair *)parameterImagesAtIndex:(unsigned long long)arg1;
- (void)addParameterImages:(_INPBPair *)arg1;
- (void)clearParameterImages;
- (int)StringAsRequiredEntitlements:(NSString *)arg1;
- (NSString *)requiredEntitlementsAsString:(int)arg1;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (void)clearRequiredEntitlements;
- (int)StringAsIntentCategory:(NSString *)arg1;
- (NSString *)intentCategoryAsString:(int)arg1;
- (int)StringAsExecutionContext:(NSString *)arg1;
- (NSString *)executionContextAsString:(int)arg1;
@end

