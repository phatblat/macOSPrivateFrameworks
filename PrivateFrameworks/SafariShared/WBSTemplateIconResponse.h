//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataResponse.h>

@class NSColor, NSImage;

@interface WBSTemplateIconResponse : WBSSiteMetadataResponse
{
    BOOL _monogram;
    NSImage *_image;
    NSImage *_highlightedImage;
    NSColor *_themeColor;
}

+ (id)responseWithURL:(id)arg1 image:(id)arg2 highlightedImage:(id)arg3 themeColor:(id)arg4 isMonogram:(BOOL)arg5;
@property(readonly, nonatomic, getter=isMonogram) BOOL monogram; // @synthesize monogram=_monogram;
@property(readonly, nonatomic) NSColor *themeColor; // @synthesize themeColor=_themeColor;
@property(readonly, nonatomic) NSImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 image:(id)arg2 highlightedImage:(id)arg3 themeColor:(id)arg4 isMonogram:(BOOL)arg5;
- (id)initWithURL:(id)arg1;

@end

