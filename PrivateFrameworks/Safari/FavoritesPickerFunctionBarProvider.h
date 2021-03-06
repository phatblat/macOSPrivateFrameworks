//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FavoritesPickerViewControllerDataSource.h"
#import "FavoritesPickerViewControllerDelegate.h"
#import "FunctionBarFavoritesClient.h"
#import "NSTouchBarDelegate.h"
#import "NSTouchBarProvider.h"

@class FavoritesPickerItemStyleResolver, FavoritesPickerViewController, NSArray, NSCustomTouchBarItem, NSString, NSTouchBar;

__attribute__((visibility("hidden")))
@interface FavoritesPickerFunctionBarProvider : NSObject <FavoritesPickerViewControllerDataSource, FavoritesPickerViewControllerDelegate, FunctionBarFavoritesClient, NSTouchBarDelegate, NSTouchBarProvider>
{
    NSCustomTouchBarItem *_favoritesPickerBarItem;
    FavoritesPickerViewController *_favoritesPickerViewController;
    FavoritesPickerItemStyleResolver *_styleResolver;
    NSArray *_displayedFavorites;
    BOOL _canNavigateUp;
    unsigned long long _favoritesGenerationAtLastFetch;
    NSTouchBar *_functionBar;
    id <FavoritesPickerFunctionBarProviderDelegate> _delegate;
    id <FunctionBarFavoritesVending> _favoritesVendor;
}

@property(retain, nonatomic) id <FunctionBarFavoritesVending> favoritesVendor; // @synthesize favoritesVendor=_favoritesVendor;
@property(nonatomic) __weak id <FavoritesPickerFunctionBarProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSTouchBar *touchBar; // @synthesize touchBar=_functionBar;
- (void).cxx_destruct;
- (void)_openFolder:(id)arg1;
- (id)_favoriteAtIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfFavorites;
- (void)_refreshFavorites;
- (void)_updateFunctionBarIfNeeded;
- (id)_expectedFunctionBarItemIdentifiers;
- (void)functionBarFavoritesVendorDidRefresh:(id)arg1;
- (void)favoritesPickerViewControllerDidNavigateUp:(id)arg1;
- (void)favoritesPickerViewController:(id)arg1 didSelectFavoriteAtIndex:(unsigned long long)arg2;
- (BOOL)canNavigateUpInFavoritesPickerViewController:(id)arg1;
- (int)favoritesPickerViewController:(id)arg1 styleForFavoriteAtIndex:(unsigned long long)arg2;
- (id)favoritesPickerViewController:(id)arg1 favoriteAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfFavoritesForFavoritesPickerViewController:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)resetCurrentFolder;
- (void)refreshItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

