//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPlistObject.h>

#import "AXFGeometrySortableRect.h"

@class ACSHAction, ACSHPanel, ACSHPanelElementView, ACSHResourceCollection, NSArray, NSColor, NSMutableArray, NSString;

@interface ACSHPanelElement : ACSHPlistObject <AXFGeometrySortableRect>
{
    BOOL _rectBeingManipulated;
    ACSHPanelElement *_parentElement;
    NSString *_spokenDescription;
    NSColor *_displayColor;
    NSMutableArray *_panelElements;
    unsigned long long _displayTheme;
    ACSHPanelElementView *_panelElementView;
    NSString *_soundIdentifier;
    NSString *_parentGroupID;
    NSString *_accessibilityIdentifier;
    struct CGRect _extraRect;
    struct CGRect _rect;
    struct CGRect _pixelAlignedRectInFlippedViewCoords;
    struct CGRect _rectAtStartOfCurrentManipulation;
}

+ (Class)classForDict:(id)arg1;
+ (id)keysForValuesToObserveForView;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(copy, nonatomic) NSString *parentGroupID; // @synthesize parentGroupID=_parentGroupID;
@property(retain, nonatomic) NSString *soundIdentifier; // @synthesize soundIdentifier=_soundIdentifier;
@property(nonatomic, getter=isRectBeingManipulated) BOOL rectBeingManipulated; // @synthesize rectBeingManipulated=_rectBeingManipulated;
@property(readonly, nonatomic) struct CGRect rectAtStartOfCurrentManipulation; // @synthesize rectAtStartOfCurrentManipulation=_rectAtStartOfCurrentManipulation;
@property(readonly, nonatomic) struct CGRect pixelAlignedRectInFlippedViewCoords; // @synthesize pixelAlignedRectInFlippedViewCoords=_pixelAlignedRectInFlippedViewCoords;
@property(nonatomic) __weak ACSHPanelElementView *panelElementView; // @synthesize panelElementView=_panelElementView;
@property(nonatomic) unsigned long long displayTheme; // @synthesize displayTheme=_displayTheme;
@property(retain, nonatomic) NSMutableArray *_panelElements; // @synthesize _panelElements;
@property(retain, nonatomic) NSColor *displayColor; // @synthesize displayColor=_displayColor;
@property(nonatomic) struct CGRect extraRect; // @synthesize extraRect=_extraRect;
@property(nonatomic) __weak ACSHPanelElement *parentElement; // @synthesize parentElement=_parentElement;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSColor *resolvedDisplayColor;
- (void)didChangeInheritedDisplayTheme;
- (void)willChangeInheritedDisplayTheme;
@property(readonly, nonatomic) unsigned long long resolvedDisplayTheme;
- (void)dealloc;
- (void)fixDuplicateIdentifiers;
- (BOOL)containsIdentifier:(id)arg1;
- (void)_allDescendentsRecursively:(id)arg1;
- (void)updateResourceIdentifiers:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allRequiredResourceIDs;
- (void)sortChildrenRecursively;
- (void)sortChildren;
- (id)keyStringForElement:(id)arg1;
- (long long)compareKeyString:(id)arg1;
- (long long)compareGeometry:(id)arg1;
- (void)performBlockOnElementAndAncestors:(CDUnknownBlockType)arg1;
- (void)performBlockOnAncestors:(CDUnknownBlockType)arg1;
- (void)_performBlockOnAncestors:(CDUnknownBlockType)arg1 includeSelf:(BOOL)arg2;
- (void)setRect:(struct CGRect)arg1 andNotify:(BOOL)arg2 includeInUndoStack:(BOOL)arg3;
- (void)setRect:(struct CGRect)arg1 andNotify:(BOOL)arg2;
@property(nonatomic) struct CGRect rectForGeometrySorting;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (void)switchToPanelIfUndoing;
@property(retain, nonatomic) NSString *spokenDescription; // @synthesize spokenDescription=_spokenDescription;
@property(readonly, nonatomic, getter=isGroupElementWithSingleChild) BOOL groupElementWithSingleChild;
@property(readonly, nonatomic) ACSHPanel *parentPanel;
@property(readonly, nonatomic) ACSHResourceCollection *resourceCollection;
- (id)panelElementsInGroup:(id)arg1;
@property(readonly, nonatomic) BOOL supportsActionToggle;
- (BOOL)descendentsContainPanelElement:(id)arg1;
@property(readonly, nonatomic) ACSHAction *action;
@property(readonly, copy, nonatomic) NSArray *actions;
- (void)removeChildElements:(id)arg1;
- (void)prependChildElements:(id)arg1 reversed:(BOOL)arg2;
- (void)appendChildElements:(id)arg1;
- (void)removeChildElement:(id)arg1;
- (void)prependChildElement:(id)arg1;
- (void)appendChildElement:(id)arg1;
- (void)insertChildElement:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *textPredictionLists;
@property(readonly, nonatomic) NSArray *hoverTextGroups;
- (id)_recursivelyFindElementsOfClass:(Class)arg1;
@property(copy, nonatomic) NSArray *panelElements; // @dynamic panelElements;
@property(readonly, nonatomic) BOOL shouldSkipWhenScanning; // @dynamic shouldSkipWhenScanning;
- (void)sizeToFitPanelElementsAndAncestors;
- (struct CGRect)rectThatFitsPanelElements:(struct CGPoint *)arg1;
- (void)sizeToFitPanelElementsAndNotify:(BOOL)arg1;
- (void)sizeToFitPanelElements;
@property(readonly, nonatomic) struct CGSize minimumSize;
- (void)resizeToRect:(struct CGRect)arg1 resizeType:(long long)arg2;
- (BOOL)_overlapsSet:(id)arg1 forRect:(struct CGRect)arg2;
- (id)makeGroupWithPanelElements:(id)arg1;
- (void)moveBy:(struct CGPoint)arg1;
@property(readonly, copy, nonatomic) NSArray *descendantsWithoutGrouping;
- (id)breakApartGroup:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *panelButtons;
- (id)dictionaryForSaving;
- (void)_configureWithPlistDictionary:(id)arg1;
- (id)descriptionForDepth:(unsigned long long)arg1;
- (unsigned long long)numberOfTrailingExtrasForItemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfLeadingExtrasForItemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfChildItemsForItemAtIndexPath:(id)arg1;
- (id)panelElementAtIndexPath:(id)arg1;
- (void)setPanelElementsWithDictArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

