//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MarkupUI/MUContentViewController.h>

#import "MUContentViewControllerProtocol.h"
#import "PDFAKControllerDelegateProtocol.h"
#import "PDFViewDelegate.h"

@class MUPDFViewBase, NSClipView, NSCursor, NSMutableSet, NSString, PDFDocument;

__attribute__((visibility("hidden")))
@interface MUPDFContentViewController : MUContentViewController <PDFAKControllerDelegateProtocol, PDFViewDelegate, MUContentViewControllerProtocol>
{
    BOOL contentViewControllerCropEnabled;
    NSCursor *_annotationCursor;
    NSMutableSet *_currentlyObservedCropAnnotations;
    NSMutableSet *_currentlyObservedPageModelControllers;
    PDFDocument *_contentPDFDocument;
    id _frameChangedObserver;
    NSClipView *_pdfScrollViewContentView;
    MUPDFViewBase *_preloadedView;
}

@property(retain) MUPDFViewBase *preloadedView; // @synthesize preloadedView=_preloadedView;
@property __weak NSClipView *pdfScrollViewContentView; // @synthesize pdfScrollViewContentView=_pdfScrollViewContentView;
@property(retain) id frameChangedObserver; // @synthesize frameChangedObserver=_frameChangedObserver;
@property(retain) PDFDocument *contentPDFDocument; // @synthesize contentPDFDocument=_contentPDFDocument;
@property(retain) NSMutableSet *currentlyObservedPageModelControllers; // @synthesize currentlyObservedPageModelControllers=_currentlyObservedPageModelControllers;
@property(retain) NSMutableSet *currentlyObservedCropAnnotations; // @synthesize currentlyObservedCropAnnotations=_currentlyObservedCropAnnotations;
@property(retain) NSCursor *annotationCursor; // @synthesize annotationCursor=_annotationCursor;
@property BOOL contentViewControllerCropEnabled; // @synthesize contentViewControllerCropEnabled;
- (void).cxx_destruct;
- (struct CGSize)_medianSizeForCurrentDocumentInPDFViewWithGetter:(CDUnknownBlockType)arg1;
- (void)_warnThatPDFOcclusionIsNonDestructive;
- (void)_warnThatPDFCroppingIsNonDestructive;
- (void)_callBlockAfterWaitingForMouseUpIfNecessary:(CDUnknownBlockType)arg1;
- (void)_showPDFOcclusionWarningIfNecessary;
- (void)_showPDFCropWarningIfNecessary;
- (void)_stopObservingAllPageModelControllers;
- (void)_stopObservingPageModelControllerForAddedAnnotations:(id)arg1;
- (void)_startObservingPageModelControllerForAddedAnnotations:(id)arg1;
- (void)_stopObservingAllCropAnnotations;
- (void)_stopObservingCropAnnotationForFirstEdit:(id)arg1;
- (void)_startObservingCropAnnotationForFirstEdit:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)editDetectedForAnnotationController:(id)arg1;
- (struct CGRect)positioningRectForCandidatePicker;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (BOOL)shouldShowAnnotationsOfType:(id)arg1;
- (void)pdfView:(id)arg1 willRemoveView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(id)arg1 didAddView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)setupInitialDocumentAppearanceAndPosition;
- (struct CGSize)idealContentSizeForScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGSize)contentSize;
- (struct CGRect)borderFrame;
- (struct CGRect)contentRect;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)loadContentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)teardown;
- (void)setup;
- (void)dealloc;
- (id)initWithPDFDocument:(id)arg1 delegate:(id)arg2 preloadedView:(id)arg3;
- (id)initWithPreloadedView:(id)arg1 delegate:(id)arg2;
- (id)initWithPDFDocument:(id)arg1 delegate:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

