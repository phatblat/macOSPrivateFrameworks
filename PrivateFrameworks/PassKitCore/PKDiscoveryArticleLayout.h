//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString, PKDiscoveryCallToAction, PKDiscoveryCard;

@interface PKDiscoveryArticleLayout : NSObject <NSSecureCoding>
{
    BOOL _requestedBadge;
    NSString *_itemIdentifier;
    long long _version;
    long long _variant;
    PKDiscoveryCard *_card;
    NSArray *_shelves;
    PKDiscoveryCallToAction *_footerLockup;
    CDUnknownBlockType _actionOnDismiss;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic, getter=hasRequestedBadge) BOOL requestedBadge; // @synthesize requestedBadge=_requestedBadge;
@property(copy, nonatomic) CDUnknownBlockType actionOnDismiss; // @synthesize actionOnDismiss=_actionOnDismiss;
@property(readonly, nonatomic) PKDiscoveryCallToAction *footerLockup; // @synthesize footerLockup=_footerLockup;
@property(readonly, nonatomic) NSArray *shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) PKDiscoveryCard *card; // @synthesize card=_card;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualForUI:(id)arg1;
- (void)setForItem:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (void)localizeWithBundle:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
