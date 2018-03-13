//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesPickerViewController, WebBookmark;

@protocol FavoritesPickerViewControllerDataSource <NSObject>
- (BOOL)canNavigateUpInFavoritesPickerViewController:(FavoritesPickerViewController *)arg1;
- (WebBookmark *)favoritesPickerViewController:(FavoritesPickerViewController *)arg1 favoriteAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfFavoritesForFavoritesPickerViewController:(FavoritesPickerViewController *)arg1;

@optional
- (int)favoritesPickerViewController:(FavoritesPickerViewController *)arg1 styleForFavoriteAtIndex:(unsigned long long)arg2;
@end

