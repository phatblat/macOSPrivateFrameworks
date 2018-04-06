//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TitleAndStackViewControllerDelegate.h"

@class NSArray, NSMutableDictionary, NSString, PerSitePreferencesPopoverViewController;

__attribute__((visibility("hidden")))
@interface PerSitePreferencesPopoverManager : NSObject <TitleAndStackViewControllerDelegate>
{
    PerSitePreferencesPopoverViewController *_preferencesViewController;
    NSArray *_checkBoxStackViewElements;
    NSArray *_popUpStackViewElements;
    NSString *_domain;
    NSMutableDictionary *_domainToManagedPlugIns;
    NSArray *_managedPlugIns;
}

- (void).cxx_destruct;
- (void)_browserContentDidChange:(id)arg1;
- (BOOL)_isShowingPopoverOnSecureSite;
- (BOOL)_isPlugInOn:(id)arg1;
- (id)_stackViewElementsForPlugIns;
- (void)_getManagedPlugInsAndAddToStackViewElements;
- (id)_stackViewElementsFromManager:(id)arg1;
- (id)_createPopUpStackViewElements;
- (id)_createCheckBoxStackViewElements;
- (void)titleAndStackViewControllerViewDidDisappear:(id)arg1;
- (void)_updateTitleAndStackViewControllerForDomain:(id)arg1;
- (void)dismissPopoverIfNecessary;
- (void)togglePopoverForDomain:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
