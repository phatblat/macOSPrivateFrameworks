//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHThemePreviewDefaultInfo, KHThemePreviewInfo, KHThemePreviewLayoutInfo, KHThemePreviewLocalizableFile, NSString, NSURL;

@interface KHThemePreview : NSObject
{
    NSURL *_url;
    NSString *_identifier;
    unsigned long long _previewImageVersion;
    KHThemePreviewInfo *_info;
    KHThemePreviewLayoutInfo *_layoutInfo;
    KHThemePreviewDefaultInfo *_defaultInfo;
    KHThemePreviewLocalizableFile *_localizableFile;
    NSURL *_dictionaryURL;
    NSURL *_localizablePreviewURL;
}

@property(retain, nonatomic) NSURL *localizablePreviewURL; // @synthesize localizablePreviewURL=_localizablePreviewURL;
@property(retain, nonatomic) NSURL *dictionaryURL; // @synthesize dictionaryURL=_dictionaryURL;
@property(retain, nonatomic) KHThemePreviewLocalizableFile *localizableFile; // @synthesize localizableFile=_localizableFile;
@property(retain, nonatomic) KHThemePreviewDefaultInfo *defaultInfo; // @synthesize defaultInfo=_defaultInfo;
@property(retain, nonatomic) KHThemePreviewLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(retain, nonatomic) KHThemePreviewInfo *info; // @synthesize info=_info;
@property(nonatomic) unsigned long long previewImageVersion; // @synthesize previewImageVersion=_previewImageVersion;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (BOOL)_loadTextStyleForFrame:(id)arg1 countryCode:(id)arg2;
- (id)generatePreviewImageForCountryCode:(id)arg1;
- (id)generatePreviewImage;
- (BOOL)localizablePreviewImageOnDisk;
@property(readonly, nonatomic) NSString *englishTitle;
@property(readonly, nonatomic) NSString *title;
- (BOOL)previewFilesAreValid;
- (void)commonInit;
- (id)initWithIdentifier:(id)arg1 andURL:(id)arg2;

@end

