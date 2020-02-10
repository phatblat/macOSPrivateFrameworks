//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface VCAccessSpecifier : NSObject <NSCopying>
{
    NSString *_associatedAppBundleIdentifier;
    NSString *_bundleIdentifier;
    long long _entitlements;
}

+ (id)accessSpecifierForTask:(struct __SecTask *)arg1;
+ (id)accessSpecifierForAuditToken:(CDStruct_6ad76789)arg1;
+ (id)accessSpecifierForXPCConnection:(id)arg1;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)arg1;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)accessSpecifierUnrestricted;
+ (void)initialize;
@property(readonly, nonatomic) long long entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
- (void).cxx_destruct;
- (BOOL)isRemovalService;
- (BOOL)isSettingsApp;
- (BOOL)allowHomeResidentShortcutRunning;
- (BOOL)allowBackgroundShortcutRunning;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)arg1;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)arg1;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)arg1;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (BOOL)allowUnrestrictedAccess;
- (BOOL)allowConnection;
- (BOOL)hasEntitlements:(long long)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1 associatedAppBundleIdentifier:(id)arg2 entitlements:(long long)arg3;
- (id)init;

@end
