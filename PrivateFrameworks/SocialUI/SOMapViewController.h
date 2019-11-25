//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "FMFMapViewControllerDelegate.h"

@class FMFMapViewController, NSArray, NSString;

@interface SOMapViewController : NSViewController <FMFMapViewControllerDelegate>
{
    NSArray *_trackedIMHandles;
    FMFMapViewController *_fmfViewController;
}

@property(retain) FMFMapViewController *fmfViewController; // @synthesize fmfViewController=_fmfViewController;
@property(copy) NSArray *trackedIMHandles; // @synthesize trackedIMHandles=_trackedIMHandles;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)_windowOcclusionStateDidChange:(id)arg1;
- (void)_windowWillClose:(id)arg1;
- (void)fmfMapViewController:(id)arg1 didSelectHandle:(id)arg2;
- (id)annotationABRecordForHandle:(id)arg1;
- (id)annotationImageForHandle:(id)arg1;
- (void)updateTrackedIMHandles:(id)arg1;
- (void)_deactivateLocation;
- (void)_activateLocation;
- (void)updateRefreshState;
- (void)recenterLocation;
- (void)selectHandle:(id)arg1;
- (void)_cleanFMFMapViewController;
- (void)_setupFMFMapViewController;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

