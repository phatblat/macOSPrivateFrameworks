//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PKProduct.h"

@class NSArray, NSData, NSDate, NSDictionary, NSError, NSNumber, NSString, PKDistributionContainer;

@interface MSUProduct : PKProduct
{
    BOOL _staged;
    BOOL _evaluated;
    BOOL _installable;
    BOOL _visibleOnlyForPredicate;
    NSString *_key;
    NSDate *_postDate;
    NSString *_buildVersion;
    NSString *_updateVersion;
    NSString *_updateType;
    NSString *_stagedPrefix;
    NSString *_stagedSuffix;
    long long _criticalUpdateType;
    double _criticalUpdateAutoInstallDelay;
    NSDictionary *_extendedMetaInfoDictionary;
    NSDictionary *_distributionURLsByLocalization;
    NSArray *_packages;
    NSError *_eligibilityError;
    NSString *_displayName;
    NSNumber *_displaySizeBytes;
    NSString *_displayVersion;
    NSData *_displayDescriptionData;
    NSString *_displayDescriptionMIMEType;
    PKDistributionContainer *__distributionContainer;
}

@property(retain) PKDistributionContainer *_distributionContainer; // @synthesize _distributionContainer=__distributionContainer;
@property BOOL visibleOnlyForPredicate; // @synthesize visibleOnlyForPredicate=_visibleOnlyForPredicate;
@property(retain) NSString *displayDescriptionMIMEType; // @synthesize displayDescriptionMIMEType=_displayDescriptionMIMEType;
@property(retain) NSData *displayDescriptionData; // @synthesize displayDescriptionData=_displayDescriptionData;
@property(retain) NSString *displayVersion; // @synthesize displayVersion=_displayVersion;
@property(retain) NSNumber *displaySizeBytes; // @synthesize displaySizeBytes=_displaySizeBytes;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSError *eligibilityError; // @synthesize eligibilityError=_eligibilityError;
@property(getter=isInstallable) BOOL installable; // @synthesize installable=_installable;
@property(getter=isEvaluated) BOOL evaluated; // @synthesize evaluated=_evaluated;
@property(retain) NSArray *packages; // @synthesize packages=_packages;
@property(readonly) NSDictionary *distributionURLsByLocalization; // @synthesize distributionURLsByLocalization=_distributionURLsByLocalization;
@property(retain) NSDictionary *extendedMetaInfoDictionary; // @synthesize extendedMetaInfoDictionary=_extendedMetaInfoDictionary;
@property double criticalUpdateAutoInstallDelay; // @synthesize criticalUpdateAutoInstallDelay=_criticalUpdateAutoInstallDelay;
@property long long criticalUpdateType; // @synthesize criticalUpdateType=_criticalUpdateType;
@property(retain) NSString *stagedSuffix; // @synthesize stagedSuffix=_stagedSuffix;
@property(retain) NSString *stagedPrefix; // @synthesize stagedPrefix=_stagedPrefix;
@property(retain) NSString *updateType; // @synthesize updateType=_updateType;
@property(retain) NSString *updateVersion; // @synthesize updateVersion=_updateVersion;
@property(retain) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain) NSDate *postDate; // @synthesize postDate=_postDate;
@property(getter=isStaged) BOOL staged; // @synthesize staged=_staged;
@property(readonly) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)stringsDictionary;
- (id)distributionContainer;
- (id)distribution;
- (id)allPackageReferences;
- (id)description;
- (id)initWithProductKey:(id)arg1 dictionaryRepresentation:(id)arg2 error:(id *)arg3;

@end

