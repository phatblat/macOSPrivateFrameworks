//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MUContentViewControllerDelegate.h"
#import "NSTouchBarDelegate.h"
#import "NSWindowDelegate.h"

@class AKController, MUCGPDFReader, MUContentBorderView, NSData, NSStackView, NSString, NSUndoManager, NSView, NSViewController<MUContentViewControllerProtocol>;

@interface MarkupViewController : NSViewController <MUContentViewControllerDelegate, NSTouchBarDelegate, NSWindowDelegate>
{
    BOOL _wantsToolbarAndPadding;
    BOOL _sourceContentIsLoaded;
    BOOL _viewDidAppearWasDoneOnce;
    BOOL _alreadyLoggedSavingForThisDocument;
    BOOL _needToPerformFullTeardown;
    BOOL _needToPerformDocumentClosedTeardown;
    BOOL _encryptPrivateMetadata;
    BOOL _cropToolEnabled;
    NSStackView *_toolBarViewHolder;
    NSView *_contentViewHolder;
    id _sourceContent;
    NSViewController<MUContentViewControllerProtocol> *_contentViewController;
    id _digestedSourceContent;
    NSData *_sourceArchivedModelData;
    MUCGPDFReader *_pdfReader;
    double _creationTimeStamp;
    NSUndoManager *_undoManager;
    MUContentBorderView *_borderOverlayView;
    double _initialContentScale;
    NSString *_hostProcessBundleIdentifier;
}

+ (id)cleanImageMetadataFromData:(id)arg1;
+ (BOOL)hasPrivateImageMetadata:(id)arg1;
@property BOOL cropToolEnabled; // @synthesize cropToolEnabled=_cropToolEnabled;
@property(copy, nonatomic) NSString *hostProcessBundleIdentifier; // @synthesize hostProcessBundleIdentifier=_hostProcessBundleIdentifier;
@property BOOL encryptPrivateMetadata; // @synthesize encryptPrivateMetadata=_encryptPrivateMetadata;
@property BOOL needToPerformDocumentClosedTeardown; // @synthesize needToPerformDocumentClosedTeardown=_needToPerformDocumentClosedTeardown;
@property BOOL needToPerformFullTeardown; // @synthesize needToPerformFullTeardown=_needToPerformFullTeardown;
@property BOOL alreadyLoggedSavingForThisDocument; // @synthesize alreadyLoggedSavingForThisDocument=_alreadyLoggedSavingForThisDocument;
@property BOOL viewDidAppearWasDoneOnce; // @synthesize viewDidAppearWasDoneOnce=_viewDidAppearWasDoneOnce;
@property double initialContentScale; // @synthesize initialContentScale=_initialContentScale;
@property(retain) MUContentBorderView *borderOverlayView; // @synthesize borderOverlayView=_borderOverlayView;
@property(retain) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property double creationTimeStamp; // @synthesize creationTimeStamp=_creationTimeStamp;
@property(retain) MUCGPDFReader *pdfReader; // @synthesize pdfReader=_pdfReader;
@property(retain) NSData *sourceArchivedModelData; // @synthesize sourceArchivedModelData=_sourceArchivedModelData;
@property(retain) id digestedSourceContent; // @synthesize digestedSourceContent=_digestedSourceContent;
@property(retain) NSViewController<MUContentViewControllerProtocol> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property BOOL sourceContentIsLoaded; // @synthesize sourceContentIsLoaded=_sourceContentIsLoaded;
@property(retain) id sourceContent; // @synthesize sourceContent=_sourceContent;
@property(nonatomic) __weak NSView *contentViewHolder; // @synthesize contentViewHolder=_contentViewHolder;
@property(nonatomic) __weak NSStackView *toolBarViewHolder; // @synthesize toolBarViewHolder=_toolBarViewHolder;
@property BOOL wantsToolbarAndPadding; // @synthesize wantsToolbarAndPadding=_wantsToolbarAndPadding;
- (void).cxx_destruct;
- (void)_someViewDidChangeFrame:(id)arg1;
- (void)_updateBorderOverlayView;
- (struct CGSize)_usableScreenSize;
- (BOOL)_writeToDataConsumer:(struct CGDataConsumer *)arg1 embedSourceImageAndEditModel:(BOOL)arg2 error:(id *)arg3;
- (id)_outputContentType;
- (id)_sourceContentType;
- (void)editDetectedForAnnotationController:(id)arg1;
- (id)annotationControllerOfContentViewController:(id)arg1 willSetToolbarItems:(id)arg2;
- (struct CGRect)positioningRectForCandidatePickerForContentViewController:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forContentViewController:(id)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forContentViewController:(id)arg2;
- (id)undoManagerForContentViewController:(id)arg1;
- (id)makeTouchBar;
- (void)deleteMessages:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (void)performActionForSender:(id)arg1;
- (void)revert;
- (BOOL)_validateItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
@property BOOL allEditingDisabled;
- (void)addToolbarButton:(id)arg1;
- (id)createArchivedModelData;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)dataRepresentationEmbeddingSourceImageAndEditModel:(BOOL)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(BOOL)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *outputType;
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2 preloadedView:(id)arg3;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2;
- (id)filteredToolbarItemsForItems:(id)arg1 fromController:(id)arg2;
- (id)_getUndoManager:(BOOL)arg1;
- (void)_setupInitialBaseModelScaleFactorWithScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGSize)idealViewSizeWithScaleFactor:(double)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGRect)idealScreenFrame;
- (BOOL)_sourceImageMayContainBaseImageAndModel;
@property(readonly, nonatomic) AKController *annotationController;
- (void)documentDidCloseTeardown;
- (void)fullTeardown;
- (void)willBeginLoadingNewDocument;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)windowWillClose:(id)arg1;
- (void)viewDidAppear;
- (void)_loadContentWithPreloadedView:(id)arg1;
- (void)_loadContent;
- (void)viewDidLoad;
- (void)loadView;
- (struct CGRect)contentViewRectInScreenCoordinates;
- (id)nibBundle;
- (id)nibName;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)awakeFromNib;
- (id)init;
- (id)initWithToolbar:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
