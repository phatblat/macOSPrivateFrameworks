//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSFont, NSImageView, NSString, NSTextField, NSTrackingArea;

@interface PRSFUSETrackSliceView : NSView
{
    NSTrackingArea *_trackingArea;
    NSImageView *_albumOrSongImage;
    NSTextField *_leadingTextField;
    NSTextField *_trailingTextField;
}

@property __weak NSTextField *trailingTextField; // @synthesize trailingTextField=_trailingTextField;
@property __weak NSTextField *leadingTextField; // @synthesize leadingTextField=_leadingTextField;
@property __weak NSImageView *albumOrSongImage; // @synthesize albumOrSongImage=_albumOrSongImage;
- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *trailingTextColor;
@property(retain, nonatomic) NSFont *trailingFont;
- (id)albumArt;
@property(retain, nonatomic) NSString *trailingString;
@property(retain, nonatomic) NSColor *leadingTextColor;
@property(retain, nonatomic) NSFont *leadingFont;
@property(retain, nonatomic) NSString *leadingString;
- (void)updateTrackingAreas;
- (void)cursorUpdate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

