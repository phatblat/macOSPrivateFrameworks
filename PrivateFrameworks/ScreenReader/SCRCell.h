//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

#import "SCRCellElementProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCell : SCRMapElement <SCRCellElementProtocol>
{
    NSString *_lastFocusedAXIdentifier;
    BOOL _hasCoordinatesInfoWithoutContentDescription;
}

@property(nonatomic) BOOL hasCoordinatesInfoWithoutContentDescription; // @synthesize hasCoordinatesInfoWithoutContentDescription=_hasCoordinatesInfoWithoutContentDescription;
- (void).cxx_destruct;
- (id)dragDescription;
- (BOOL)alwaysAllowDrag;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (void)addCellLabelToRequest:(id)arg1;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (id)spanInfo;
- (id)coordinatesInfo;
- (id)textRepresentation;
- (id)typeDescription;
- (id)statusDescriptionWithOptionsMask:(long long)arg1;
- (id)titleDescription;
- (id)attributedValueDescription;
- (id)valueDescription;
- (id)descriptionForNonTitleContentElement:(id)arg1;
- (id)cellChildrenValueDescriptionsIncludingCaption:(BOOL)arg1;
- (id)reorderedChildrenForSummaryDescription:(id)arg1;
- (void)addItemNameContentToRequest:(id)arg1;
- (void)addItemNameDescriptionToRequest:(id)arg1;
- (void)addItemNameToRequest:(id)arg1;
- (void)_addCoordinatesInfoToRequest:(id)arg1;
@property(readonly, nonatomic) BOOL shouldOutputCoordinatesInfo;
- (id)_coordinatesInfoForOutput;
- (void)addItemDescriptionForInteractionToRequest:(id)arg1;
- (id)onlyChild;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)shouldInterceptUpShiftEvent;
- (BOOL)_isPromotable;
- (BOOL)allowFocusThroughSingleChild;
- (void)setFocusedChild:(id)arg1;
- (id)lastFocusedAXIdentifier;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)isInteractive;
- (unsigned long long)groupBehavior;
- (BOOL)canNavigateToChildren;
- (BOOL)isContainerElement;
@property(readonly, nonatomic) struct SCRDataCell cellCoordinates;
- (unsigned long long)columnSpanCount;
- (unsigned long long)rowSpanCount;
- (unsigned long long)columnIndex;
- (unsigned long long)rowIndex;
- (id)parentTable;

@end

