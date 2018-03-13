//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSRemoteViewDelegate.h"

@class DDActionContext, DDButtonBar, DDDataDetectorsViewHost, NSBox, NSMapTable, NSRemoteView, NSURL;

@interface DDActionViewController : NSViewController <NSRemoteViewDelegate>
{
    struct __DDResult *_ddResult;
    NSURL *_url;
    BOOL _local;
    NSRemoteView *_remoteView;
    NSBox *_calloutTint;
    BOOL _isObserving;
    BOOL _bridgeBurnt;
    BOOL _presentationEndedSignaled;
    BOOL _hasArrow;
    unsigned long long _actionType;
    DDDataDetectorsViewHost *_localViewController;
    NSMapTable *_localBridge;
    DDActionContext *_actionContext;
    DDButtonBar *_buttonBar;
    BOOL _editedContent;
    BOOL _editionMode;
    id <DDActionViewPresenter> _presenter;
}

+ (unsigned long long)typeForUrl:(id)arg1;
+ (unsigned long long)typeForResult:(struct __DDResult *)arg1;
@property BOOL editionMode; // @synthesize editionMode=_editionMode;
@property BOOL editedContent; // @synthesize editedContent=_editedContent;
@property __weak id <DDActionViewPresenter> presenter; // @synthesize presenter=_presenter;
@property(retain) NSBox *calloutTint; // @synthesize calloutTint=_calloutTint;
@property(retain) NSRemoteView *remoteView; // @synthesize remoteView=_remoteView;
- (void).cxx_destruct;
- (BOOL)viewShouldDragOldestAncestorWindow:(id)arg1;
- (void)viewDidInvalidate:(id)arg1;
- (BOOL)view:(id)arg1 shouldResize:(struct CGSize)arg2;
- (void)triggerControlWithIdentifier:(id)arg1;
- (void)setupControls:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_viewDidDisappear;
- (void)_viewWillDisappear;
- (void)_viewDidAppear;
- (void)_viewWillAppear;
- (void)runPhaseForLocalView:(id)arg1 remoteView:(id)arg2;
- (void)configureRunPhaseForBridge:(id)arg1;
- (void)finalizeForBridge:(id)arg1;
- (void)_viewDidLoad;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)loadView;
- (void)burnViewBridge;
- (void)commonRemoteViewControllerTeardown;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 url:(id)arg2 context:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (void)cleanAndSetContext:(id)arg1;
- (struct CGSize)defaultSize;
@property BOOL local;

// Remaining properties
@property(readonly) BOOL shouldRetainExportedObject;

@end

