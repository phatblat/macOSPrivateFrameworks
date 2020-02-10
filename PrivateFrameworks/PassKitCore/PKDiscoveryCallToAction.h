//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSSet, NSString, PKColor, PKDiscoveryMedia;

@interface PKDiscoveryCallToAction : NSObject <NSSecureCoding>
{
    NSSet *_allowedFeatureIdentifiers;
    NSString *_transitNetworkIdentifier;
    NSString *_referrerIdentifier;
    BOOL _foregroundContentModeIsSet;
    BOOL _roundIcon;
    NSString *_titleKey;
    NSString *_subtitleKey;
    NSString *_buttonTextKey;
    long long _action;
    NSDictionary *_actionInfo;
    PKDiscoveryMedia *_icon;
    PKColor *_backgroundColor;
    long long _foregroundContentMode;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    NSString *_localizedButtonText;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *localizedButtonText; // @synthesize localizedButtonText=_localizedButtonText;
@property(retain, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) long long foregroundContentMode; // @synthesize foregroundContentMode=_foregroundContentMode;
@property(readonly, nonatomic) PKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic, getter=shouldRoundIcon) BOOL roundIcon; // @synthesize roundIcon=_roundIcon;
@property(readonly, nonatomic) PKDiscoveryMedia *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSDictionary *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
@property(readonly, nonatomic) NSString *buttonTextKey; // @synthesize buttonTextKey=_buttonTextKey;
@property(readonly, nonatomic) NSString *subtitleKey; // @synthesize subtitleKey=_subtitleKey;
@property(readonly, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *transitNetworkIdentifier;
@property(readonly, nonatomic) NSSet *allowedFeatureIdentifiers;
@property(readonly, nonatomic) long long paymentSetupMode;
@property(readonly, nonatomic) NSString *referrerIdentifier;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (void)localizeWithBundle:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
