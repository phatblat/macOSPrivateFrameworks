//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LinkPresentation/LPSpecializationMetadata.h>

#import "LPLinkMetadataPresentationTransformerAdaptor.h"
#import "LPLinkMetadataPreviewTransformerAdaptor.h"

@class LPImage, NSString;

@interface LPiCloudSharingMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor>
{
    NSString *_applicationBundleIdenfier;
    NSString *_application;
    NSString *_title;
    LPImage *_icon;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *application; // @synthesize application=_application;
@property(copy, nonatomic) NSString *applicationBundleIdenfier; // @synthesize applicationBundleIdenfier=_applicationBundleIdenfier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)computeLocalizedApplicationName;
- (id)computeIcon;

@end

