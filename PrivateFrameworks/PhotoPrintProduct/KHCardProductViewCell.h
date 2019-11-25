//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXCollectionViewCell.h"

#import "NSAccessibilityGroup.h"

@class KHProduct, NSButton, NSImageView, NSLayoutConstraint, NSString, NSTextField;

@interface KHCardProductViewCell : UXCollectionViewCell <NSAccessibilityGroup>
{
    NSTextField *_productTitleLabel;
    NSTextField *_productDescriptionLabel;
    NSImageView *_productImageView;
    NSTextField *_productSizeLabel;
    NSTextField *_primaryPriceLabel;
    NSTextField *_primaryPriceLabelInfo;
    NSLayoutConstraint *_topSpaceConstraintContinueButton;
    NSButton *_continueButton;
    NSButton *_learnMoreButton;
    id <KHProductViewDelegate> _delegate;
    KHProduct *_product;
}

@property(retain, nonatomic) KHProduct *product; // @synthesize product=_product;
@property(nonatomic) __weak id <KHProductViewDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak NSButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property __weak NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property __weak NSLayoutConstraint *topSpaceConstraintContinueButton; // @synthesize topSpaceConstraintContinueButton=_topSpaceConstraintContinueButton;
@property __weak NSTextField *primaryPriceLabelInfo; // @synthesize primaryPriceLabelInfo=_primaryPriceLabelInfo;
@property __weak NSTextField *primaryPriceLabel; // @synthesize primaryPriceLabel=_primaryPriceLabel;
@property __weak NSTextField *productSizeLabel; // @synthesize productSizeLabel=_productSizeLabel;
@property __weak NSImageView *productImageView; // @synthesize productImageView=_productImageView;
@property __weak NSTextField *productDescriptionLabel; // @synthesize productDescriptionLabel=_productDescriptionLabel;
@property __weak NSTextField *productTitleLabel; // @synthesize productTitleLabel=_productTitleLabel;
- (void).cxx_destruct;
- (void)productButtonHit:(id)arg1;
- (void)_showPricesLabel:(BOOL)arg1 animated:(BOOL)arg2;
- (void)hidePrices;
- (void)showPricesWithProduct:(id)arg1;
- (void)loadWithProduct:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

