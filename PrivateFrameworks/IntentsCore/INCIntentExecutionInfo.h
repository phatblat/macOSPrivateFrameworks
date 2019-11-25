//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IntentsCore/INCExecutionInfo.h>

@class NSArray, NSString;

@interface INCIntentExecutionInfo : INCExecutionInfo
{
    NSArray *_extensions;
    NSArray *_uiExtensions;
    NSString *_intentClassName;
    NSString *_extensionBundleId;
    NSString *_uiExtensionBundleId;
}

+ (void)initialize;
@property(readonly, copy, nonatomic) NSString *uiExtensionBundleId; // @synthesize uiExtensionBundleId=_uiExtensionBundleId;
@property(readonly, copy, nonatomic) NSString *extensionBundleId; // @synthesize extensionBundleId=_extensionBundleId;
@property(readonly, copy, nonatomic) NSString *intentClassName; // @synthesize intentClassName=_intentClassName;
- (void).cxx_destruct;
- (id)_uiExtensionsWithError:(id *)arg1;
- (id)_extensionsWithError:(id *)arg1;
- (id)_matchingAttributesForExtensionPoint:(id)arg1 error:(id *)arg2;
- (BOOL)canRunOnLocalDevice;
@property(readonly, nonatomic) BOOL hasCustomUIExtension;
- (id)_initWithIntentClassName:(id)arg1 launchableAppBundleId:(id)arg2 displayableAppBundleId:(id)arg3 extensionBundleId:(id)arg4 uiExtensionBundleId:(id)arg5 containingAppBundleURL:(id)arg6;
- (id)initWithIntentClassName:(id)arg1 launchableAppBundleId:(id)arg2;
- (id)initWithIntentTypeName:(id)arg1;
- (id)initWithIntent:(id)arg1;

@end

