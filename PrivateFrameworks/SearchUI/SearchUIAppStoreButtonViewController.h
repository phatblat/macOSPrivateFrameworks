//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKStoreButton;

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController
{
    BOOL _appIsInstalled;
    TLKStoreButton *_appStoreButton;
}

+ (BOOL)supportsRowModel:(id)arg1;
@property(nonatomic) BOOL appIsInstalled; // @synthesize appIsInstalled=_appIsInstalled;
@property(retain, nonatomic) TLKStoreButton *appStoreButton; // @synthesize appStoreButton=_appStoreButton;
- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)shouldTopAlignForAccessibilityContentSizes;
- (void)buttonPressed;
- (void)updateWithRowModel:(id)arg1;
- (id)setupView;

@end
