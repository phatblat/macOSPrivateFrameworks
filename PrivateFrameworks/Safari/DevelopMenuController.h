//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"
#import "RWIApplicationDelegate.h"
#import "RWIDebuggableDelegate.h"
#import "RWIManagerDelegate.h"
#import "RWITargetDelegate.h"

@class ExtensionBuilderController, NSArray, NSMenu, NSMenuItem, NSString;

__attribute__((visibility("hidden")))
@interface DevelopMenuController : NSObject <RWIManagerDelegate, RWITargetDelegate, RWIApplicationDelegate, RWIDebuggableDelegate, NSMenuDelegate>
{
    NSMenuItem *_developMenuItem;
    NSMenuItem *_highlightedRemoteWebInspectorMenuItem;
    NSMenu *_userAgentMenu;
    NSMenu *_openWithMenu;
    NSMenu *_experimentalFeaturesMenu;
    NSMenu *_serviceWorkersMenu;
    NSMenuItem *_getSafariTechnologyPreviewMenuItem;
    BOOL _menuInstalled;
    ExtensionBuilderController *_extensionBuilderController;
    BOOL _developMenuOpen;
    NSArray *_userAgents;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)debuggableDidChange:(id)arg1;
- (void)applicationDidBecomeInactive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)application:(id)arg1 didRemoveDebuggable:(id)arg2;
- (void)application:(id)arg1 didAddDebuggable:(id)arg2;
- (void)target:(id)arg1 didRemoveApplication:(id)arg2;
- (void)target:(id)arg1 didAddApplication:(id)arg2;
- (void)targetDidBecomeNotReady:(id)arg1;
- (void)targetDidBecomeReady:(id)arg1;
- (void)manager:(id)arg1 didRemoveTarget:(id)arg2;
- (void)manager:(id)arg1 didAddTarget:(id)arg2;
@property(readonly) NSString *iPadUserAgent;
@property(readonly) NSString *iPhoneUserAgent;
@property(readonly) NSArray *userAgents;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (BOOL)_isRemoteWebInspectorMenuItem:(id)arg1;
- (void)_indicate:(id)arg1 enabled:(BOOL)arg2;
- (id)_noServiceWorkersMenuItem;
- (void)_updateServiceWorkerMenuItems;
- (id)_generateRemoteInspectorTargetMenuItems;
- (id)_menuItemForDebuggable:(id)arg1;
- (id)_displayNameForDebuggable:(id)arg1;
- (void)_updateSubmenu:(id)arg1 forTarget:(id)arg2;
- (void)_updateMenuItem:(id)arg1 forMachine:(id)arg2;
- (void)_updateMenuItem:(id)arg1 forSimulator:(id)arg2;
- (void)_updateMenuItem:(id)arg1 forDevice:(id)arg2;
- (void)_updateMenuItem:(id)arg1 forTarget:(id)arg2;
- (void)_insertMenuItem:(id)arg1 forTarget:(id)arg2;
- (void)_updateMenuForTarget:(id)arg1;
- (void)_removeMenuForTarget:(id)arg1;
- (id)_createMenuItemForTarget:(id)arg1;
- (id)_menuItemForTarget:(id)arg1;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (BOOL)updateMenu:(id)arg1 withEvent:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)_toggleWirelessDebugging:(id)arg1;
- (void)_installAutoAttachHandlerForTarget:(id)arg1;
- (void)_toggleAutoPause:(id)arg1;
- (void)_toggleAutoAttach:(id)arg1;
- (BOOL)_togglePauseSettingForTarget:(id)arg1;
- (BOOL)_autoPauseSettingForTarget:(id)arg1;
- (id)_autoPausePreferenceKeyForTarget:(id)arg1;
- (BOOL)_toggleAttachSettingForTarget:(id)arg1;
- (BOOL)_autoAttachSettingForTarget:(id)arg1;
- (id)_autoAttachPreferenceKeyForTarget:(id)arg1;
- (void)inspectDebuggable:(id)arg1;
- (void)pairWithDevice:(id)arg1;
- (void)saveExtensionBuilderChanges;
- (void)showExtensionBuilder:(id)arg1;
- (void)showSnippetEditor:(id)arg1;
- (void)removeMenu;
- (void)_actuallyInstallMenu;
- (void)installMenuWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setDeveloperExtrasEnabled:(BOOL)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

