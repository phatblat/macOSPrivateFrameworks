//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSUICollectionViewController;

@interface NSUICollectionViewControllerWrapperView : NSView
{
    NSUICollectionViewController *_collectionViewController;
}

@property(nonatomic) NSUICollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
- (void)didMoveToSuperview;
- (id)_viewControllerToNotifyOnLayoutSubviews;

@end

