//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@interface TDCatalogGlobals : NSManagedObject
{
    unsigned long long _defaultBlendMode;
    BOOL _allowsVibrancy;
    BOOL _supportsWhitePointAdjustments;
    BOOL _supportsBrightnessAdjustments;
    BOOL _allowsSystemTintColors;
    BOOL _allowsCustomTintColors;
}

- (id)dictionaryForArchiving;
@property(nonatomic) BOOL allowsCustomTintColors;
@property(nonatomic) BOOL allowsSystemTintColors;
@property(nonatomic) BOOL supportsBrightnessAdjustments;
@property(nonatomic) BOOL supportsWhitePointAdjustments;
@property(nonatomic) BOOL allowsVibrancy;
@property(nonatomic) unsigned long long defaultBlendMode;

@end

