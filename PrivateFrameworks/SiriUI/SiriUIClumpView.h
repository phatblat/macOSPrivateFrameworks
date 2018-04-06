//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriUI/SiriUIScrollView.h>

@class NSCollectionView, NSCollectionViewLayout;

@interface SiriUIClumpView : SiriUIScrollView
{
    BOOL _allowsQuickLook;
    NSCollectionView *_collectionView;
    NSCollectionViewLayout *_collectionViewLayout;
    id <SiriUIClumpViewDelegate> _clumpViewDelegate;
}

@property BOOL allowsQuickLook; // @synthesize allowsQuickLook=_allowsQuickLook;
@property __weak id <SiriUIClumpViewDelegate> clumpViewDelegate; // @synthesize clumpViewDelegate=_clumpViewDelegate;
@property __weak NSCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly) NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
@property BOOL acceptsFirstMouse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionView:(id)arg2 collectionViewLayout:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end
