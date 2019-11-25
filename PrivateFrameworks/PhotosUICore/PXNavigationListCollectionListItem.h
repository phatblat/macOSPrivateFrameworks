//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXNavigationListItem.h>

@class NSString, PHCollectionList;

@interface PXNavigationListCollectionListItem : PXNavigationListItem
{
    BOOL _draggable;
    BOOL _renamable;
    BOOL _expandable;
    BOOL _expanded;
    NSString *_glyphImageName;
    PHCollectionList *_collection;
    long long _indentationLevel;
}

@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(readonly, nonatomic) PHCollectionList *collection; // @synthesize collection=_collection;
- (BOOL)isExpandable;
- (BOOL)isRenamable;
- (BOOL)isDraggable;
- (id)glyphImageName;
- (void).cxx_destruct;
- (id)representedObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCollectionList:(id)arg1 itemCount:(long long)arg2;

@end

