//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUIGadget.h>

@class EKUICompositeView, EKViewController, NSString;

@interface EKUICompositeGadget : EKUIGadget
{
    BOOL _isExpanded;
    EKUICompositeView *_view;
    EKViewController *_viewController;
    NSString *_uuid;
    id <EKUILayoutItem> _parentItem;
}

@property __weak id <EKUILayoutItem> parentItem; // @synthesize parentItem=_parentItem;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property __weak EKViewController *viewController; // @synthesize viewController=_viewController;
@property(retain) EKUICompositeView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)enumerateSubitemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)updateKeyViewLoop;
- (BOOL)needsExpansion;
- (BOOL)isEditable;
- (BOOL)wantsAnimationSuppression;
- (BOOL)isContainer;
@property(setter=setExpanded:) BOOL isExpanded;
- (BOOL)updateWithDiff:(id)arg1;
- (void)updateScrollState;
- (void)setObject:(id)arg1;
- (BOOL)shouldDisplay;
- (void)updateConstraints;
- (id)subgadgets;
- (id)initWithViewController:(id)arg1;

@end

