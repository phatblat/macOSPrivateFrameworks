//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ACSHPanelGenerator : NSObject
{
}

+ (id)allGeneratedTemplatePanels;
+ (id)_templateDwellActionPanel;
+ (id)_templateAlphabeticalKeyboardPanel;
+ (id)_templateTypingSuggestionsPanel;
+ (void)_updateRectAndGroupingForOrderedElements:(id)arg1;
+ (id)_groupForPanelElements:(id)arg1;
+ (id)_alphabeticallySortedElementsForPanelElements:(id)arg1 originalPanel:(id)arg2;
+ (id)alphabeticallyOrderedPanelFromPanel:(id)arg1;
+ (id)_panelIDForListPanelIdentifier:(id)arg1 indexPath:(id)arg2;
+ (id)_generatedPanelForListPanelIdentifier:(id)arg1 indexPath:(id)arg2 sizingPanel:(id)arg3 dataSource:(id)arg4;
+ (id)_buttonForListPanelIdentifier:(id)arg1 indexPath:(id)arg2 dataSource:(id)arg3;
+ (unsigned long long)_numberOfRowsPerPageForListPanelIdentifier:(id)arg1 atIndexPath:(id)arg2 dataSource:(id)arg3;
+ (unsigned long long)_numberOfRowsInListPanelIdentifier:(id)arg1 atIndexPath:(id)arg2 dataSource:(id)arg3;
+ (unsigned long long)flatIndexForIndexPath:(id)arg1 listPanelIdentifier:(id)arg2 dataSource:(id)arg3;
+ (id)listPanelForIdentifier:(id)arg1 indexPath:(id)arg2 sizingPanel:(id)arg3 dataSource:(id)arg4;
+ (id)minimizedPanelForPanel:(id)arg1;
+ (id)dwellActionsPanelForMergingIntoPanel:(id)arg1;
+ (BOOL)substituteSuggestionPlaceholderForChildElement:(id)arg1 ofPanelElement:(id)arg2;
+ (id)suggestionsPanelForMergingIntoPanel:(id)arg1 sizingPanel:(id)arg2 forTemplate:(BOOL)arg3;

@end

