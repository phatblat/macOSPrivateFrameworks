//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCRObserverTarget.h"

@class NSArray, NSDate, NSObject<OS_dispatch_queue>, NSObservation<NSObservable><NSObserver>, NSString, SCRApplicationManager, SCRElement;

__attribute__((visibility("hidden")))
@interface SCRDFRFocusManager : NSObject <SCRObserverTarget>
{
    BOOL __needToRefreshFunctionRows;
    SCRElement *_focusedElement;
    NSArray *_orderedNavigableElements;
    NSDate *_lastFocusTimestamp;
    SCRApplicationManager *__applicationManager;
    NSArray *__functionRows;
    SCRElement *__functionRowInFocusChain;
    id <AXETimer> __focusValidationTimer;
    NSObservation<NSObservable><NSObserver> *__focusedApplicationObservation;
    id <NSObject> __remoteUIElementsChangedObservation;
    NSObject<OS_dispatch_queue> *__dfrFocusManagerQueue;
}

+ (BOOL)_isAllowedToDrillIntoElement:(id)arg1;
+ (BOOL)_isAllowedToFocusOntoElement:(id)arg1;
+ (BOOL)_isValidDFRElementToFocusOnto:(id)arg1;
+ (id)_applicationFunctionRowElementFromRemoteUIElement:(id)arg1;
+ (id)validatedChildrenToFocusIntoForElement:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_dfrFocusManagerQueue; // @synthesize _dfrFocusManagerQueue=__dfrFocusManagerQueue;
@property(retain, nonatomic) id <NSObject> _remoteUIElementsChangedObservation; // @synthesize _remoteUIElementsChangedObservation=__remoteUIElementsChangedObservation;
@property(retain, nonatomic) NSObservation<NSObservable><NSObserver> *_focusedApplicationObservation; // @synthesize _focusedApplicationObservation=__focusedApplicationObservation;
@property(retain, nonatomic) id <AXETimer> _focusValidationTimer; // @synthesize _focusValidationTimer=__focusValidationTimer;
@property(retain, nonatomic) SCRElement *_functionRowInFocusChain; // @synthesize _functionRowInFocusChain=__functionRowInFocusChain;
@property(nonatomic) BOOL _needToRefreshFunctionRows; // @synthesize _needToRefreshFunctionRows=__needToRefreshFunctionRows;
@property(retain, nonatomic) NSArray *_functionRows; // @synthesize _functionRows=__functionRows;
@property(readonly, nonatomic) SCRApplicationManager *_applicationManager; // @synthesize _applicationManager=__applicationManager;
@property(retain, nonatomic) NSDate *lastFocusTimestamp; // @synthesize lastFocusTimestamp=_lastFocusTimestamp;
@property(retain, nonatomic) NSArray *orderedNavigableElements; // @synthesize orderedNavigableElements=_orderedNavigableElements;
@property(retain, nonatomic) SCRElement *focusedElement; // @synthesize focusedElement=_focusedElement;
- (void).cxx_destruct;
- (void)_refreshOrderedNavigableElements;
- (id)_appThread_deepestDescendantOfFunctionRowElement:(id)arg1 containingPoint:(struct CGPoint)arg2;
- (id)_appThread_deepestFocusableDescendantOfElement:(id)arg1 leadingEdge:(BOOL)arg2;
- (id)_appThread_adjacentLeafElementTo:(id)arg1 movingForward:(BOOL)arg2;
- (id)_adjacentElementInElements:(id)arg1 relativeToIndex:(unsigned long long)arg2 searchingForward:(BOOL)arg3;
- (BOOL)_moveFocusToAdjacentElementSearchingForward:(BOOL)arg1;
- (BOOL)_focusOntoElement:(id)arg1 containedInsideFunctionRow:(id)arg2;
- (void)_validateCurrentFocusChain;
- (void)_refreshFunctionRows;
- (void)_handleFocusValidationTimerFired;
- (void)_validateFocus;
- (void)_handleFocusedElementParentLayoutChanged:(id)arg1;
- (void)_handleAnnouncementRequested:(id)arg1;
- (void)_handleTitleChanged:(id)arg1;
- (void)_handleValueChanged:(id)arg1;
- (void)_handleUIElementDestroyed:(id)arg1;
- (BOOL)canActAsObserverTarget;
- (void)scheduleFocusValidation;
- (void)clearFocus;
- (BOOL)moveFocusToElement:(id)arg1;
- (BOOL)moveFocusToPreviousElement;
- (BOOL)moveFocusToNextElement;
- (BOOL)focusOntoElementAtPoint:(struct CGPoint)arg1;
- (void)setFocusedApplication:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

