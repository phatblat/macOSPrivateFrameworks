//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface CTCategory : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_bundleIdentifier;
    NSString *_canonicalBundleIdentifier;
    NSArray *_equivalentBundleIdentifiers;
    NSArray *_webDomains;
    NSString *_primaryWebDomain;
    NSString *_secondaryIdentifier;
    NSString *_resourceString;
}

+ (id)_getAssociatedDomainsForHostNames:(id)arg1;
+ (id)_equivalentBundleIDsMapping;
+ (id)_equivalentBundleIDsMappingForWatchOSBundleID:(id)arg1;
+ (id)itemWith:(id)arg1 platform:(id)arg2 array:(id)arg3;
+ (id)equivalentIdentifiersForBundleID:(id)arg1;
+ (id)_schemeRemovedEquivalentBundleIDsMapping:(id)arg1;
+ (id)_getequivalentBundleIdentifiers:(id)arg1;
+ (id)_identifierUsingContextKit:(id)arg1 error:(id *)arg2 relatedItems:(id *)arg3;
+ (void)_lookupAppStoreUsing:(id)arg1 platform:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)_DHToAppStoreCategoriesMap;
+ (id)_DHIDtoPrimaryCategoriesMap;
+ (void)_getCategoryTypeForDomainName:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)_overrideEquivalentIdentifiers:(id)arg1 forBundleID:(id)arg2;
+ (id)systemAppCategoryIdentifierForBundleIdentifier:(id)arg1;
+ (void)categoryForDomainName:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)categoryForDomainURL:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)categoryForBundleID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)categoryForBundleIdentifiers:(id)arg1 platform:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)categoryForBundleID:(id)arg1 platform:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)shortLocalizedNameForIdentifier:(id)arg1;
+ (id)localizedNameForIdentifier:(id)arg1;
+ (id)primaryLocalizedNameForIdentifier:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)_newXpcConnection;
+ (id)_xpcConnection;
+ (void)initialize;
@property(copy, nonatomic) NSString *resourceString; // @synthesize resourceString=_resourceString;
@property(copy, nonatomic) NSString *secondaryIdentifier; // @synthesize secondaryIdentifier=_secondaryIdentifier;
@property(copy, nonatomic) NSString *primaryWebDomain; // @synthesize primaryWebDomain=_primaryWebDomain;
@property(copy, nonatomic) NSArray *webDomains; // @synthesize webDomains=_webDomains;
@property(readonly, copy, nonatomic) NSArray *equivalentBundleIdentifiers; // @synthesize equivalentBundleIdentifiers=_equivalentBundleIdentifiers;
@property(copy, nonatomic) NSString *canonicalBundleIdentifier; // @synthesize canonicalBundleIdentifier=_canonicalBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCategory:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSArray *equivalentBundleIdentifers;
@property(readonly, copy, nonatomic) NSString *secondaryLocalizedName;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, copy, nonatomic) NSString *primaryLocalizedName;
@property(readonly, copy, nonatomic) NSString *primaryIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_ctCategoryCommonInitWithIdentifier:(id)arg1 equivalentBundleIdentifiers:(id)arg2 webDomains:(id)arg3 bundleIdentifier:(id)arg4 primaryWebDomain:(id)arg5 canonicalBundleIdentifier:(id)arg6;
- (id)initWithIdentifier:(id)arg1 equivalentBundleIdentifiers:(id)arg2 webDomains:(id)arg3 bundleIdentifier:(id)arg4 primaryWebDomain:(id)arg5 canonicalBundleIdentifier:(id)arg6;
- (id)initWithIdentifier:(id)arg1 equivalentBundleIdentifiers:(id)arg2 webDomains:(id)arg3 bundleIdentifier:(id)arg4 primaryWebDomain:(id)arg5;
- (id)initWithIdentifier:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3 primaryWebDomain:(id)arg4;
- (id)initWithIdentifier:(id)arg1 equivalentBundleIdentifiers:(id)arg2 webDomains:(id)arg3 bundleIdentifier:(id)arg4;
- (id)initWithIdentifier:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3;

@end

