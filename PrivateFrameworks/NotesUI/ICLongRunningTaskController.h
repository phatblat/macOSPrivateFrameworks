//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICMProgressWindowControllerDelegate.h"

@class ICMProgressWindowController, NSDate, NSProgress, NSString, NSWindow;

@interface ICLongRunningTaskController : NSObject <ICMProgressWindowControllerDelegate>
{
    BOOL _isCancelled;
    BOOL _shouldShowCancelButton;
    NSString *_progressFormatString;
    struct NSWindow *_window;
    double _intervalBeforeOpeningProgressDialog;
    id _keepAlive;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _updateProgressUIBlock;
    NSProgress *_progress;
    NSDate *_lastAccessibilityAnnouncementDate;
    NSDate *_openProgressDate;
    ICMProgressWindowController *_progressWindowController;
}

+ (void)setMainWindow:(struct NSWindow *)arg1;
@property(retain, nonatomic) ICMProgressWindowController *progressWindowController; // @synthesize progressWindowController=_progressWindowController;
@property(retain, nonatomic) NSDate *openProgressDate; // @synthesize openProgressDate=_openProgressDate;
@property(retain, nonatomic) NSDate *lastAccessibilityAnnouncementDate; // @synthesize lastAccessibilityAnnouncementDate=_lastAccessibilityAnnouncementDate;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType updateProgressUIBlock; // @synthesize updateProgressUIBlock=_updateProgressUIBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) id keepAlive; // @synthesize keepAlive=_keepAlive;
@property(nonatomic) double intervalBeforeOpeningProgressDialog; // @synthesize intervalBeforeOpeningProgressDialog=_intervalBeforeOpeningProgressDialog;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) NSString *progressFormatString; // @synthesize progressFormatString=_progressFormatString;
@property(nonatomic) BOOL shouldShowCancelButton; // @synthesize shouldShowCancelButton=_shouldShowCancelButton;
@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
- (void).cxx_destruct;
- (void)closeProgressDialog;
- (void)openProgressDialog;
- (void)didTapCancelButtonInProgressWindowController:(id)arg1;
- (void)updateProgress;
- (void)completeTaskIfNecessary;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startTask:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithWindow:(struct NSWindow *)arg1 intervalBeforeOpeningProgressDialog:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

