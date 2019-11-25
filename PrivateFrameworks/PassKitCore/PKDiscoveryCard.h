//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, PKColor, PKDiscoveryCallToAction, PKDiscoveryMedia;

@interface PKDiscoveryCard : NSObject <NSSecureCoding>
{
    NSString *_headingKey;
    NSString *_titleKey;
    NSString *_inlineDescriptionKey;
    PKDiscoveryMedia *_backgroundMedia;
    PKColor *_backgroundColor;
    PKDiscoveryCallToAction *_callToAction;
    long long _foregroundContentMode;
    NSString *_heading;
    NSString *_title;
    NSString *_inlineDescription;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *inlineDescription; // @synthesize inlineDescription=_inlineDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property(readonly, nonatomic) long long foregroundContentMode; // @synthesize foregroundContentMode=_foregroundContentMode;
@property(readonly, nonatomic) PKDiscoveryCallToAction *callToAction; // @synthesize callToAction=_callToAction;
@property(readonly, nonatomic) PKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) PKDiscoveryMedia *backgroundMedia; // @synthesize backgroundMedia=_backgroundMedia;
@property(readonly, nonatomic) NSString *inlineDescriptionKey; // @synthesize inlineDescriptionKey=_inlineDescriptionKey;
@property(readonly, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
@property(readonly, nonatomic) NSString *headingKey; // @synthesize headingKey=_headingKey;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (void)localizeWithBundle:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

