//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"
#import "RPBroadcastActivityHostRemoteNSViewControllerDelegate.h"
#import "RPVideoEditorHostRemoteNSViewControllerDelegate.h"
#import "ReplayKitMacHelper.h"

@class NSExtension, NSStatusItem, NSString, NSWindow, RPBroadcastActivityHostRemoteNSViewController, RPRemoteViewContainerWindow, RPRemoteWindowController, RPVideoEditorHostRemoteNSViewController;

@interface ReplayKitMacHelperClass : NSObject <RPVideoEditorHostRemoteNSViewControllerDelegate, RPBroadcastActivityHostRemoteNSViewControllerDelegate, NSWindowDelegate, ReplayKitMacHelper>
{
    id <ReplayKitMacHelperDelegate> delegate;
    NSWindow *_sourceWindow;
    NSWindow *_modalSheet;
    RPVideoEditorHostRemoteNSViewController *_videoEditorHostViewController;
    id _extensionMatchToken;
    NSStatusItem *_recStatusItem;
    NSExtension *_extension;
    double _scaleFactor;
    RPBroadcastActivityHostRemoteNSViewController *_broadcastActivityHostViewController;
    RPRemoteWindowController *_controller;
    RPRemoteViewContainerWindow *_remoteWindow;
}

@property(retain, nonatomic) RPRemoteViewContainerWindow *remoteWindow; // @synthesize remoteWindow=_remoteWindow;
@property(retain, nonatomic) RPRemoteWindowController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) RPBroadcastActivityHostRemoteNSViewController *broadcastActivityHostViewController; // @synthesize broadcastActivityHostViewController=_broadcastActivityHostViewController;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSStatusItem *recStatusItem; // @synthesize recStatusItem=_recStatusItem;
@property(retain, nonatomic) id extensionMatchToken; // @synthesize extensionMatchToken=_extensionMatchToken;
@property(retain, nonatomic) RPVideoEditorHostRemoteNSViewController *videoEditorHostViewController; // @synthesize videoEditorHostViewController=_videoEditorHostViewController;
@property(retain, nonatomic) NSWindow *modalSheet; // @synthesize modalSheet=_modalSheet;
@property(nonatomic) __weak NSWindow *sourceWindow; // @synthesize sourceWindow=_sourceWindow;
@property(nonatomic) __weak id <ReplayKitMacHelperDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowDidMiniaturize:(id)arg1;
- (void)registerForApplicationStateChangesWithSourceUIWindow:(id)arg1;
- (void)removeSystemStatusItem;
- (void)statusMenuStop:(id)arg1;
- (void)setupSystemStatusItem;
- (void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(BOOL)arg4;
- (void)presentBroadcastActivitySheet;
- (void)presentBroadcastPickerAsContextMenu:(id)arg1 sourceWindowSize:(struct CGSize)arg2 sourceViewFrame:(struct CGRect)arg3 hostInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (struct CGRect)CGRectCenteredInFrame:(struct CGRect)arg1 size:(struct CGSize)arg2;
- (void)viewControlerDidFinish;
- (void)dismissSheet;
- (void)presentVideoEditorSheetOverUIWindow:(id)arg1 withVideoURL:(id)arg2;
- (long long)windowIndexWithSourceUIWindow:(id)arg1;
- (void)enableResizingWithSourceUIWindow:(id)arg1;
- (void)disableResizingWithSourceUIWindow:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

