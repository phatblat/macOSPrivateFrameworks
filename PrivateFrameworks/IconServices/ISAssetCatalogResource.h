//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISScalableCompositorResource.h"

@class CUICatalog, ISImageBag, NSString;

@interface ISAssetCatalogResource : NSObject <ISScalableCompositorResource>
{
    ISImageBag *_imageBag;
    CUICatalog *_catalog;
    NSString *_imageName;
    NSString *_symbolName;
}

+ (id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3 error:(id *)arg4;
+ (id)coreGlyphsCatalog;
+ (id)assetCatalogResourceWithURL:(id)arg1 symbolName:(id)arg2 error:(id *)arg3;
+ (id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 error:(id *)arg3;
@property(readonly) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly) CUICatalog *catalog; // @synthesize catalog=_catalog;
- (void).cxx_destruct;
@property(readonly, getter=isPrecomposed) BOOL precomposed;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
@property(readonly) ISImageBag *imageBag; // @synthesize imageBag=_imageBag;
- (id)imageWithName:(id)arg1 scale:(double)arg2;
- (id)multisizedImageWithName:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (long long)deviceIdiomWithName:(id)arg1;
- (id)initWithCatalog:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3;
- (id)symbolImageForFontSize:(double)arg1 scale:(double)arg2 symbolSize:(unsigned long long)arg3 symbolWeight:(long long)arg4;
- (id)symbolImageForSize:(struct CGSize)arg1 scale:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

