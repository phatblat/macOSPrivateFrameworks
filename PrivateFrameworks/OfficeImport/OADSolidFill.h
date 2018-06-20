//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADFill.h>

@class OADColor;

@interface OADSolidFill : OADFill
{
    OADColor *mColor;
    BOOL mIsColorOverridden;
}

+ (id)blackFill;
+ (id)whiteFill;
+ (id)defaultProperties;
- (void).cxx_destruct;
- (void)removeUnnecessaryOverrides;
- (BOOL)isAnythingOverridden;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)usesPlaceholderColor;
- (void)setStyleColor:(id)arg1;
- (BOOL)isColorOverridden;
- (void)setColor:(id)arg1;
- (id)color;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

