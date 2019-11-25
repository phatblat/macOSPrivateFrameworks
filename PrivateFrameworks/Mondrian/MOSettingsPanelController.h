//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class MOMediaView, NSArrayController, NSMutableArray, NSTextField, NSView;

@interface MOSettingsPanelController : NSWindowController
{
    MOMediaView *_mediaView;
    NSMutableArray *_layoutPresets;
    NSMutableArray *_cellRepresentations;
    NSMutableArray *_headerRepresentations;
    NSMutableArray *_colorBackgrounds;
    NSArrayController *_layoutArrayController;
    NSArrayController *_cellArrayController;
    NSArrayController *_headerArrayController;
    NSArrayController *_colorArrayController;
    NSTextField *_liveScrollingAutomationLapsTextField;
    NSTextField *_liveScrollingAutomationStepsTextField;
    NSView *_optionsView;
}

+ (id)panelControllerForMediaView:(id)arg1;
@property(retain) NSView *optionsView; // @synthesize optionsView=_optionsView;
@property(retain) NSTextField *liveScrollingAutomationStepsTextField; // @synthesize liveScrollingAutomationStepsTextField=_liveScrollingAutomationStepsTextField;
@property(retain) NSTextField *liveScrollingAutomationLapsTextField; // @synthesize liveScrollingAutomationLapsTextField=_liveScrollingAutomationLapsTextField;
@property(retain) NSArrayController *colorArrayController; // @synthesize colorArrayController=_colorArrayController;
@property(retain) NSArrayController *headerArrayController; // @synthesize headerArrayController=_headerArrayController;
@property(retain) NSArrayController *cellArrayController; // @synthesize cellArrayController=_cellArrayController;
@property(retain) NSArrayController *layoutArrayController; // @synthesize layoutArrayController=_layoutArrayController;
@property(retain) NSMutableArray *colorBackgrounds; // @synthesize colorBackgrounds=_colorBackgrounds;
@property(retain) NSMutableArray *headerRepresentations; // @synthesize headerRepresentations=_headerRepresentations;
@property(retain) NSMutableArray *cellRepresentations; // @synthesize cellRepresentations=_cellRepresentations;
@property(retain) NSMutableArray *layoutPresets; // @synthesize layoutPresets=_layoutPresets;
@property(nonatomic) __weak MOMediaView *mediaView; // @synthesize mediaView=_mediaView;
- (void).cxx_destruct;
- (void)automateLiveScrollingWithRecording:(id)arg1;
- (void)automateLiveScrollingWithLapsAndSteps:(id)arg1;
- (void)clearMonitoringStatistics:(id)arg1;
- (void)invalidateDataSourceMemory:(id)arg1;
- (void)invalidatePrefetchMemory:(id)arg1;
- (void)changeColorBackground:(id)arg1;
- (void)changeHeaderRepresentation:(id)arg1;
- (void)changeCellRepresentation:(id)arg1;
- (void)changeLayoutPreset:(id)arg1;
- (void)registerColorBackground:(id)arg1 withName:(id)arg2;
- (void)registerHeaderRepresentation:(Class)arg1 withName:(id)arg2;
- (void)registerCellRepresentation:(Class)arg1 withName:(id)arg2;
- (void)registerLayoutPreset:(id)arg1 withName:(id)arg2;
- (void)close:(id)arg1;
- (void)open:(id)arg1;
- (void)_setupLayoutOptions;
- (void)_setup;
- (void)windowDidLoad;
- (id)init;

@end

