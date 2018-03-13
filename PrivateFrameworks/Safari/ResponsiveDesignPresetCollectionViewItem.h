//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionViewItem.h"

@class NSButton, ResponsiveDesignPresetConfiguration;

__attribute__((visibility("hidden")))
@interface ResponsiveDesignPresetCollectionViewItem : NSCollectionViewItem
{
}

+ (id)keyPathsForValuesAffectingPresetConfiguration;
- (id)_landscapeImage;
- (id)_portraitImage;
- (void)_buttonClicked:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)preferredContentSize;
- (void)setRepresentedObject:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(retain, nonatomic) NSButton *button; // @dynamic button;
@property(readonly, nonatomic) ResponsiveDesignPresetConfiguration *presetConfiguration;
- (void)dealloc;

@end

