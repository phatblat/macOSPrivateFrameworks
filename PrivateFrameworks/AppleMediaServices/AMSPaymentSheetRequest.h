//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, AMSBiometricsSignatureRequest, NSArray, NSAttributedString, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetRequest : NSObject
{
    BOOL _requiresAuthorization;
    BOOL _shouldUppercaseText;
    ACAccount *_account;
    NSString *_accountHeader;
    AMSBiometricsSignatureRequest *_biometricsRequest;
    long long _confirmationTitle;
    NSString *_currencyCode;
    NSString *_countryCode;
    NSString *_displayPrice;
    NSString *_explanation;
    NSArray *_flexList;
    NSArray *_inlineImages;
    NSString *_logKey;
    NSString *_message;
    long long _payee;
    NSString *_paymentSession;
    NSString *_paymentSummary;
    NSNumber *_price;
    NSArray *_priceSectionItems;
    NSString *_ratingHeader;
    NSString *_ratingValue;
    long long _salableIcon;
    NSURL *_salableIconURL;
    NSArray *_salableInfo;
    NSAttributedString *_salableInfoLabel;
    NSString *_storeName;
    NSString *_title;
    long long _titleType;
}

@property long long titleType; // @synthesize titleType=_titleType;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *storeName; // @synthesize storeName=_storeName;
@property BOOL shouldUppercaseText; // @synthesize shouldUppercaseText=_shouldUppercaseText;
@property BOOL requiresAuthorization; // @synthesize requiresAuthorization=_requiresAuthorization;
@property(copy) NSAttributedString *salableInfoLabel; // @synthesize salableInfoLabel=_salableInfoLabel;
@property(copy) NSArray *salableInfo; // @synthesize salableInfo=_salableInfo;
@property(copy) NSURL *salableIconURL; // @synthesize salableIconURL=_salableIconURL;
@property long long salableIcon; // @synthesize salableIcon=_salableIcon;
@property(copy) NSString *ratingValue; // @synthesize ratingValue=_ratingValue;
@property(copy) NSString *ratingHeader; // @synthesize ratingHeader=_ratingHeader;
@property(copy) NSArray *priceSectionItems; // @synthesize priceSectionItems=_priceSectionItems;
@property(copy) NSNumber *price; // @synthesize price=_price;
@property(copy) NSString *paymentSummary; // @synthesize paymentSummary=_paymentSummary;
@property(copy) NSString *paymentSession; // @synthesize paymentSession=_paymentSession;
@property long long payee; // @synthesize payee=_payee;
@property(copy) NSString *message; // @synthesize message=_message;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) NSArray *inlineImages; // @synthesize inlineImages=_inlineImages;
@property(copy) NSArray *flexList; // @synthesize flexList=_flexList;
@property(copy) NSString *explanation; // @synthesize explanation=_explanation;
@property(copy) NSString *displayPrice; // @synthesize displayPrice=_displayPrice;
@property(copy) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property long long confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(retain) AMSBiometricsSignatureRequest *biometricsRequest; // @synthesize biometricsRequest=_biometricsRequest;
@property(copy) NSString *accountHeader; // @synthesize accountHeader=_accountHeader;
@property(copy) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (struct CGImage *)_createRGBImageRefForGreyScaleImageRef:(struct CGImage *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (struct CGImage *)_createResizedImageWithOriginalImage:(struct CGImage *)arg1 targetHeight:(double)arg2;
- (struct CGImage *)_createRatingImageWithStringValue:(id)arg1 assetScale:(float *)arg2;
- (struct CGImage *)_createMaskedImageRefForImageRef:(struct CGImage *)arg1 withPathRef:(struct CGPath *)arg2 andAdornmentStyle:(long long)arg3;
- (struct CGImage *)_createImageRefWithURL:(id)arg1 adornmentStyle:(long long)arg2 bag:(id)arg3;
- (struct CGImage *)_createImageRefForImageSource:(struct CGImageSource *)arg1 screenScale:(float)arg2 outAssetScale:(float *)arg3;
- (struct CGImage *)_createImageMaskRefWithSize:(struct CGSize)arg1 andPath:(struct CGPath *)arg2;
- (struct CGImage *)_createImageForResourceName:(id)arg1 outAssetScale:(float *)arg2;
- (struct CGImage *)_createDefaultImageWithImageRef:(struct CGImage *)arg1 size:(struct CGSize)arg2 borderPath:(struct CGPath *)arg3;
- (struct CGPath *)_createBorderPathForAdornmentStyle:(long long)arg1 iconWidth:(double)arg2 iconHeight:(double)arg3;
- (id)_replaceImagePlaceholderTagWithImageData:(id)arg1 tag:(id)arg2 data:(id)arg3 scale:(float)arg4;
- (id)_removeAllImagePlaceholderTags:(id)arg1;
- (long long)_imageTypeForURL:(id)arg1;
- (unsigned long long)_countImagePlaceholderTags:(id)arg1;
- (id)ams_createContentItemForSalableInfoWithCache:(id)arg1 bag:(id)arg2;
- (id)ams_createContentItemForRating;
- (id)ams_createContentItemsForFlexibleListWithCache:(id)arg1 bag:(id)arg2;
- (id)ams_createContentItemForAccount;
- (id)ams_createSummaryItems;
@property(readonly) unsigned long long ams_paymentRequestorType;
@property(readonly) unsigned long long ams_confirmationStyle;

@end

