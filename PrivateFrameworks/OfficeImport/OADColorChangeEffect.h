//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

@interface OADColorChangeEffect : OADBlipEffect
{
    OADColor *mFromColor;
    OADColor *mToColor;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (void)setToColor:(id)arg1;
- (id)toColor;
- (void)setFromColor:(id)arg1;
- (id)fromColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
