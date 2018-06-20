//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPassView.h>

#import "NSSharingServiceDelegate.h"
#import "NSSharingServicePickerDelegate.h"

@class NSButton, NSImage, NSMutableArray, NSString, NSView, PKImageView, PKPassTextField;

@interface PKPassFrontView : PKPassView <NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    NSView *_primaryFieldsView;
    NSMutableArray *_primaryFieldViews;
    NSView *_secondaryFieldsView;
    NSMutableArray *_secondaryFieldViews;
    NSView *_auxFieldsView;
    NSMutableArray *_auxFieldViews;
    NSView *_headerFieldsView;
    NSMutableArray *_headerFieldViews;
    PKPassTextField *_logoTextField;
    PKImageView *_logoImageView;
    NSImage *_barcodeImage;
    PKImageView *_barcodeImageView;
    PKImageView *_footerImageView;
    NSImage *_cachedFrontImage;
    BOOL _isStripImageDrawn;
    NSButton *_infoButton;
    NSButton *_shareButton;
}

@property(readonly) NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property(readonly) NSButton *infoButton; // @synthesize infoButton=_infoButton;
- (void).cxx_destruct;
- (struct CGRect)sharingService:(id)arg1 opaqueFrameForSourceWindow:(id)arg2;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)_itemsToShare;
- (void)shareClicked:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_unobserveField:(id)arg1;
- (void)_observeField:(id)arg1;
- (void)setPass:(id)arg1;
- (void)_drawBoardingPassIcon;
- (void)_drawThumbnail;
- (void)_drawInlineBackground;
- (void)_drawBarcodeShowingText:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateBarcodeImage;
- (void)_updateCardFaceButtonImages;
- (void)_layoutFooterImageView;
- (void)_layoutBarcodeImageView;
- (void)_layoutLogoImageView;
- (void)_layoutHeaderFields;
- (void)_layoutAuxFields;
- (void)_layoutSecondaryFields;
- (void)_layoutPrimaryFields;
- (void)_layoutLogoTextField;
- (void)_layoutFields:(id)arg1 type:(long long)arg2 usingFieldViews:(id)arg3 inContentView:(id)arg4 withFrame:(struct CGRect)arg5;
- (struct CGRect)auxFieldsBounds;
- (struct CGRect)secondaryFieldsBounds;
- (struct CGRect)primaryFieldsBounds;
- (struct CGRect)_barcodeBoxRectWithBarcodeImage:(id)arg1 infoString:(id)arg2 imageRect:(struct CGRect *)arg3;
- (struct CGRect)_logoTextRectWithString:(id)arg1 attributes:(id)arg2 logoImage:(id)arg3;
- (struct CGRect)headerFieldRect;
- (struct CGRect)_logoRectForImage:(id)arg1;
- (struct CGRect)inlineBackgroundRect;
- (struct CGRect)contentRect;
- (struct CGRect)barCodeRect;
- (struct CGRect)headerRect;
- (void)_addTextFieldsWithField:(id)arg1;
- (id)_addTextFieldWithValue:(id)arg1;
- (void)dealloc;
- (id)initWithPass:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

