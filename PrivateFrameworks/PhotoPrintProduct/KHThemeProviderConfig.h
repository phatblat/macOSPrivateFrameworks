//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHThemePreview, KHThemeProvider, NSMutableDictionary, NSOperationQueue, NSString;

@interface KHThemeProviderConfig : NSObject
{
    NSOperationQueue *_previewQueue;
    NSMutableDictionary *_configuration;
    KHThemeProvider *_themeProvider;
    KHThemePreview *_themePreview;
}

+ (id)themeProviderConfigWithProvider:(id)arg1 config:(id)arg2;
@property(readonly, nonatomic) KHThemePreview *themePreview; // @synthesize themePreview=_themePreview;
@property(retain, nonatomic) KHThemeProvider *themeProvider; // @synthesize themeProvider=_themeProvider;
@property(retain, nonatomic) NSMutableDictionary *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)requestPreviewImageForCountryCode:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestPreviewImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadThemePreview;
@property(retain) NSString *preferredLanguageCode;
@property(readonly, nonatomic) NSString *title;
@property(readonly) NSString *baseIdentifier;
- (id)description;
- (id)init;

@end

