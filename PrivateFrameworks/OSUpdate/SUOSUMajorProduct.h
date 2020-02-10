//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSUpdate/SUOSUProduct.h>

@class NSImage, NSString, SUMajorProduct;

@interface SUOSUMajorProduct : SUOSUProduct
{
    SUMajorProduct *_majorProduct;
}

@property(readonly) SUMajorProduct *majorProduct; // @synthesize majorProduct=_majorProduct;
- (void).cxx_destruct;
- (void)updateMajorProduct:(id)arg1;
- (id)installerApplicationBundleURLOnDisk;
@property(readonly) NSImage *majorOSIconImage;
@property(readonly) NSString *majorOSMoreInfoLinkString;
@property(readonly) NSString *majorOSBundleIdentifier;
@property(readonly) NSString *majorOSDisplayVersion;
@property(readonly) NSString *majorOSDisplayTitle;
- (id)initWithAppStoreUpdate:(id)arg1 withMajorProduct:(id)arg2;
- (id)initWithAppStoreUpdate:(id)arg1;

@end
