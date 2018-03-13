//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LPLinkPresentationPropertyProvider.h"

@class LPCaptionBarPresentationProperties, LPImage, LPVideo, LPiTunesPlaybackInformation, NSColor, NSString;

@interface LPWebLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider>
{
    BOOL _preliminary;
    long long _style;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPVideo *_video;
    NSColor *_backgroundColor;
    LPiTunesPlaybackInformation *_iTunesPlaybackInformation;
}

@property(retain, nonatomic) LPiTunesPlaybackInformation *iTunesPlaybackInformation; // @synthesize iTunesPlaybackInformation=_iTunesPlaybackInformation;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) LPVideo *video; // @synthesize video=_video;
@property(retain, nonatomic) LPImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *quotedText; // @synthesize quotedText=_quotedText;
@property(retain, nonatomic) LPCaptionBarPresentationProperties *mediaBottomCaptionBar; // @synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar;
@property(retain, nonatomic) LPCaptionBarPresentationProperties *mediaTopCaptionBar; // @synthesize mediaTopCaptionBar=_mediaTopCaptionBar;
@property(retain, nonatomic) LPCaptionBarPresentationProperties *captionBar; // @synthesize captionBar=_captionBar;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic, getter=isPreliminary) BOOL preliminary; // @synthesize preliminary=_preliminary;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

