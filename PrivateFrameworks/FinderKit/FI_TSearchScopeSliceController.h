//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

@class NSObject<TSearchScopeSliceControllerDelegate>;

__attribute__((visibility("hidden")))
@interface FI_TSearchScopeSliceController : FI_TViewController
{
}

- (void)setScopePlusMinusButtonTitle:(_Bool)arg1;
- (void)setScopePlusMinusButtonEnabled:(_Bool)arg1;
- (void)setSaveButtonEnabled:(_Bool)arg1;
- (id)currentScopeString;
- (unsigned long long)scopeSelection;
- (void)setScopeSelection:(unsigned long long)arg1;
- (void)setButtonTitles:(const vector_757c8b87 *)arg1 andToolTips:(const vector_757c8b87 *)arg2;
@property __weak NSObject<TSearchScopeSliceControllerDelegate> *scopeSliceDelegate; // @dynamic scopeSliceDelegate;
- (id)scopeSlice;
- (id)nibName;

@end

