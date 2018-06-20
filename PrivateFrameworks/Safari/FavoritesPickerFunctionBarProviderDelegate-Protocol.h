//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesPickerFunctionBarProvider, WebBookmarkLeaf;

@protocol FavoritesPickerFunctionBarProviderDelegate <NSObject>

@optional
- (void)favoritesPickerFunctionBarProvider:(FavoritesPickerFunctionBarProvider *)arg1 didUpdateFunctionBarAvailability:(BOOL)arg2;
- (void)favoritesPickerFunctionBarProvider:(FavoritesPickerFunctionBarProvider *)arg1 didSelectFavorite:(WebBookmarkLeaf *)arg2;
- (void)favoritesPickerFunctionBarProviderDidChangeFunctionBar:(FavoritesPickerFunctionBarProvider *)arg1;
- (void)favoritesPickerFunctionBarProviderWillChangeFunctionBar:(FavoritesPickerFunctionBarProvider *)arg1;
@end

