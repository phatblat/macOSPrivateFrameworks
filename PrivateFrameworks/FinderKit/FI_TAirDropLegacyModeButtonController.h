//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

@class FI_TAirDropDiscoveryController, NSString;

__attribute__((visibility("hidden")))
@interface FI_TAirDropLegacyModeButtonController : FI_TViewController
{
    struct TNSRef<FI_TAirDropDiscoveryController, void> _discoveryController;
    struct TNSRef<FI_TAirDropLegacyModePopoverViewController, void> _popoverViewContoller;
    struct TNotificationCenterObserver _popoverWillCloseObserver;
}

+ (id)keyPathsForValuesAffectingLegacyModeSupported;
+ (id)keyPathsForValuesAffectingButtonTitle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)popoverWillClose;
@property(readonly, getter=isLegacyModeSupported) _Bool legacyModeSupported;
- (void)buttonPressed:(id)arg1;
@property(readonly, retain, nonatomic) NSString *buttonTitle; // @dynamic buttonTitle;
@property(readonly) FI_TAirDropDiscoveryController *discoveryController;
- (void)initCommon;

@end

