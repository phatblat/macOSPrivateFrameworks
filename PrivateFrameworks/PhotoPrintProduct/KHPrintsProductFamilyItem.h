//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHProductFamilyItem.h>

@interface KHPrintsProductFamilyItem : KHProductFamilyItem
{
    unsigned long long _productFamily;
}

+ (id)imageForPrintsProductFamily:(unsigned long long)arg1 suffix:(id)arg2;
+ (id)subtitleForPrintsProductFamily:(unsigned long long)arg1 countryCode:(id)arg2;
+ (id)titleForPrintsProductFamily:(unsigned long long)arg1;
+ (id)keyForPrintsProductFamily:(unsigned long long)arg1 suffix:(id)arg2;
+ (struct _NSRange)verticalDimensionRangeForPrintsProductFamily:(unsigned long long)arg1;
+ (struct _NSRange)horizontalDimensionRangeForPrintsProductFamily:(unsigned long long)arg1;
+ (id)allProductFamilyItems;
+ (id)itemWithPrintsProductFamily:(unsigned long long)arg1;
@property(nonatomic) unsigned long long productFamily; // @synthesize productFamily=_productFamily;
- (id)subTitleForCountryCode:(id)arg1;
- (id)universalImage;
- (id)landscapeImage;
- (id)portraitImage;
- (id)productSubgroups;

@end
