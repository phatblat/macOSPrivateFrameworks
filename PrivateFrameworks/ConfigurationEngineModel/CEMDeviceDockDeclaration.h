//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSArray, NSNumber, NSString;

@interface CEMDeviceDockDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadOrientation;
    NSNumber *_payloadPositionImmutable;
    NSNumber *_payloadAutohide;
    NSNumber *_payloadAutohideImmutable;
    NSNumber *_payloadMinimizeToApplication;
    NSNumber *_payloadMinimizeToApplicationImmutable;
    NSNumber *_payloadMagnification;
    NSNumber *_payloadMagnifyImmutable;
    NSNumber *_payloadLargesize;
    NSNumber *_payloadMagsizeImmutable;
    NSNumber *_payloadShowProcessIndicators;
    NSNumber *_payloadLaunchanim;
    NSNumber *_payloadLaunchanimImmutable;
    NSString *_payloadMineffect;
    NSNumber *_payloadMineffectImmutable;
    NSNumber *_payloadTilesize;
    NSNumber *_payloadSizeImmutable;
    NSArray *_payloadMCXDockSpecialFolders;
    NSNumber *_payloadAllowDockFixupOverride;
    NSNumber *_payloadStaticOnly;
    NSArray *_payloadStaticOthers;
    NSArray *_payloadStaticApps;
    NSNumber *_payloadContentsImmutable;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withOrientation:(id)arg2 withPositionImmutable:(id)arg3 withAutohide:(id)arg4 withAutohideImmutable:(id)arg5 withMinimizeToApplication:(id)arg6 withMinimizeToApplicationImmutable:(id)arg7 withMagnification:(id)arg8 withMagnifyImmutable:(id)arg9 withLargesize:(id)arg10 withMagsizeImmutable:(id)arg11 withShowProcessIndicators:(id)arg12 withLaunchanim:(id)arg13 withLaunchanimImmutable:(id)arg14 withMineffect:(id)arg15 withMineffectImmutable:(id)arg16 withTilesize:(id)arg17 withSizeImmutable:(id)arg18 withMCXDockSpecialFolders:(id)arg19 withAllowDockFixupOverride:(id)arg20 withStaticOnly:(id)arg21 withStaticOthers:(id)arg22 withStaticApps:(id)arg23 withContentsImmutable:(id)arg24;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadContentsImmutable; // @synthesize payloadContentsImmutable=_payloadContentsImmutable;
@property(copy, nonatomic) NSArray *payloadStaticApps; // @synthesize payloadStaticApps=_payloadStaticApps;
@property(copy, nonatomic) NSArray *payloadStaticOthers; // @synthesize payloadStaticOthers=_payloadStaticOthers;
@property(copy, nonatomic) NSNumber *payloadStaticOnly; // @synthesize payloadStaticOnly=_payloadStaticOnly;
@property(copy, nonatomic) NSNumber *payloadAllowDockFixupOverride; // @synthesize payloadAllowDockFixupOverride=_payloadAllowDockFixupOverride;
@property(copy, nonatomic) NSArray *payloadMCXDockSpecialFolders; // @synthesize payloadMCXDockSpecialFolders=_payloadMCXDockSpecialFolders;
@property(copy, nonatomic) NSNumber *payloadSizeImmutable; // @synthesize payloadSizeImmutable=_payloadSizeImmutable;
@property(copy, nonatomic) NSNumber *payloadTilesize; // @synthesize payloadTilesize=_payloadTilesize;
@property(copy, nonatomic) NSNumber *payloadMineffectImmutable; // @synthesize payloadMineffectImmutable=_payloadMineffectImmutable;
@property(copy, nonatomic) NSString *payloadMineffect; // @synthesize payloadMineffect=_payloadMineffect;
@property(copy, nonatomic) NSNumber *payloadLaunchanimImmutable; // @synthesize payloadLaunchanimImmutable=_payloadLaunchanimImmutable;
@property(copy, nonatomic) NSNumber *payloadLaunchanim; // @synthesize payloadLaunchanim=_payloadLaunchanim;
@property(copy, nonatomic) NSNumber *payloadShowProcessIndicators; // @synthesize payloadShowProcessIndicators=_payloadShowProcessIndicators;
@property(copy, nonatomic) NSNumber *payloadMagsizeImmutable; // @synthesize payloadMagsizeImmutable=_payloadMagsizeImmutable;
@property(copy, nonatomic) NSNumber *payloadLargesize; // @synthesize payloadLargesize=_payloadLargesize;
@property(copy, nonatomic) NSNumber *payloadMagnifyImmutable; // @synthesize payloadMagnifyImmutable=_payloadMagnifyImmutable;
@property(copy, nonatomic) NSNumber *payloadMagnification; // @synthesize payloadMagnification=_payloadMagnification;
@property(copy, nonatomic) NSNumber *payloadMinimizeToApplicationImmutable; // @synthesize payloadMinimizeToApplicationImmutable=_payloadMinimizeToApplicationImmutable;
@property(copy, nonatomic) NSNumber *payloadMinimizeToApplication; // @synthesize payloadMinimizeToApplication=_payloadMinimizeToApplication;
@property(copy, nonatomic) NSNumber *payloadAutohideImmutable; // @synthesize payloadAutohideImmutable=_payloadAutohideImmutable;
@property(copy, nonatomic) NSNumber *payloadAutohide; // @synthesize payloadAutohide=_payloadAutohide;
@property(copy, nonatomic) NSNumber *payloadPositionImmutable; // @synthesize payloadPositionImmutable=_payloadPositionImmutable;
@property(copy, nonatomic) NSString *payloadOrientation; // @synthesize payloadOrientation=_payloadOrientation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

