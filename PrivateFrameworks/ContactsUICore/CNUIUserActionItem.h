//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactProperty, NSDictionary, NSString;

@interface CNUIUserActionItem : NSObject
{
    NSString *_type;
    NSString *_bundleIdentifier;
    CNContactProperty *_contactProperty;
    NSString *_label;
    long long _group;
    unsigned long long _options;
    NSString *_teamIdentifier;
    NSDictionary *_associatedRecentContactMetadata;
}

+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 isSensitive:(BOOL)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)ttyRelayItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)ttyItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)videoItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)textItemWithLabel:(id)arg1 targetPhoneNumber:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)textItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)emailItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)emailItemWithLabel:(id)arg1 targetHandle:(id)arg2 url:(id)arg3;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 isSuggested:(BOOL)arg5;
+ (id)_voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 userActivity:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 userActivity:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)videoItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)textItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)emailItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 isSuggested:(BOOL)arg5;
+ (id)_voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 dialRequest:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 dialRequest:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 dialRequest:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)videoItemWithLabel:(id)arg1 targetStringValue:(id)arg2 dialRequest:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)thirdPartyCallActionItemForHandle:(id)arg1 contactProperty:(id)arg2 actionType:(id)arg3 bundleIdentifier:(id)arg4 callProviderManager:(id)arg5;
+ (id)actionItemForContactProperty:(id)arg1 actionType:(id)arg2 bundleIdentifier:(id)arg3 callProviderManager:(id)arg4 senderIdentity:(id)arg5;
+ (id)actionItemForContactProperty:(id)arg1 actionType:(id)arg2 bundleIdentifier:(id)arg3 senderIdentity:(id)arg4;
+ (id)actionItemForContactProperty:(id)arg1 actionType:(id)arg2 bundleIdentifier:(id)arg3;
@property(readonly, copy, nonatomic) NSDictionary *associatedRecentContactMetadata; // @synthesize associatedRecentContactMetadata=_associatedRecentContactMetadata;
@property(copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) long long group; // @synthesize group=_group;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) CNContactProperty *contactProperty; // @synthesize contactProperty=_contactProperty;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 group:(long long)arg4 options:(unsigned long long)arg5;
- (id)initWithItem:(id)arg1 contactProperty:(id)arg2;
@property(readonly, nonatomic) BOOL isSuggested;
@property(readonly, nonatomic) BOOL shouldCurateIfPerformed;
@property(readonly, nonatomic) BOOL shouldGroupByBundleIdentifier;
@property(readonly, nonatomic) NSString *sanitizedTargetHandle;
@property(readonly, nonatomic) NSString *targetHandle;
- (void)associateWithRecentContactMetadata:(id)arg1;
- (BOOL)isHandledByFirstPartyApp;
- (BOOL)shouldUseLabelForQuickActionButtonTitle;
- (BOOL)shouldUseApplicationNameForLabel;
- (id)performActionWithContext:(id)arg1;
- (id)url;

@end

