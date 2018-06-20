//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/Banner.h>

@class ButtonWithFontSmoothing, NSTextField, RolloverImageButton;

__attribute__((visibility("hidden")))
@interface DefaultBrowserBanner : Banner
{
    ButtonWithFontSmoothing *_useSafariAsDefaultButton;
    RolloverImageButton *_closeButton;
    NSTextField *_promptLabel;
}

+ (int)bannerSortOrder;
@property(nonatomic) __weak NSTextField *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) __weak RolloverImageButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak ButtonWithFontSmoothing *useSafariAsDefaultButton; // @synthesize useSafariAsDefaultButton=_useSafariAsDefaultButton;
- (void).cxx_destruct;
- (id)bannerNibName;
- (void)awakeFromNib;
- (id)init;
- (void)_setSafariAsDefaultBrowser:(id)arg1;

@end

