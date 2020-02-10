//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSRemoteViewController.h"

#import "GKRemoteViewController.h"
#import "GKRemoteViewControllerHostProtocol.h"
#import "NSRemoteViewDelegate.h"

@class GKRemoteViewControllerProxy, NSDictionary, NSString, NSWindow;

@interface GKRemoteViewController : NSRemoteViewController <GKRemoteViewController, GKRemoteViewControllerHostProtocol, NSRemoteViewDelegate>
{
    unsigned long long _mode;
    NSDictionary *_modeSpecificInitialState;
    id _delegate;
    GKRemoteViewControllerProxy *_proxy;
    NSWindow *_parentWindow;
    NSWindow *_panelWindow;
    struct _NSModalSession *_modalSession;
}

@property(nonatomic) struct _NSModalSession *modalSession; // @synthesize modalSession=_modalSession;
@property(retain) NSWindow *panelWindow; // @synthesize panelWindow=_panelWindow;
@property __weak NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain, nonatomic) GKRemoteViewControllerProxy *proxy; // @synthesize proxy=_proxy;
@property __weak id delegate; // @synthesize delegate=_delegate;
@property unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)dismiss;
- (void)sendMessageToService:(id)arg1;
- (void)serviceRequestsDismiss;
- (void)messageFromService:(id)arg1;
- (id)gkServiceViewControllerProxy;
- (id)exportedObject;
- (id)exportedObjectProxy;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)_setupRemoteViewOnMainThread;
- (void)_setupRemoteView;
- (void)presentWithWindow:(id)arg1;
- (void)configureRemoteViewForParentView:(id)arg1;
@property(retain) NSDictionary *modeSpecificInitialState; // @synthesize modeSpecificInitialState=_modeSpecificInitialState;
- (void)viewDidLoad;
- (struct CGSize)_gkSizeForDialogController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) BOOL shouldRetainExportedObject;
@property(readonly) Class superclass;

@end
