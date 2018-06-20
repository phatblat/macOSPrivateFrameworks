//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

@class FI_TBrowserContainerController, FI_TContainerLayoutManager;

__attribute__((visibility("hidden")))
@interface FI_TBrowserContentViewController : FI_TViewController
{
    struct TNSRef<FI_TBrowserContainerController, void> _browserContainerController;
    struct TNSRef<NSMutableArray<NSLayoutConstraint *>, void> _layoutConstraints;
    FI_TContainerLayoutManager *_containerLayoutManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeBrowserContainerView;
- (void)addBrowserContainerView;
- (double)statusBarHeight;
- (_Bool)isStatusBarVisible;
- (_Bool)isInBrowseMode;
@property(retain, nonatomic) FI_TBrowserContainerController *browserContainerController; // @dynamic browserContainerController;
- (id)initWithContentView:(id)arg1 containerLayoutManager:(id)arg2;
- (void)initCommon;
- (void)aboutToTearDown;

@end

