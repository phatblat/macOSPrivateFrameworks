//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSLayoutConstraint, NSMutableArray;

@interface CalUIFastStackView : NSView
{
    NSMutableArray *_views;
    long long _orientation;
    long long _distribution;
    double _spacing;
    NSLayoutConstraint *_firstConstraint;
    NSLayoutConstraint *_lastConstraint;
    struct NSEdgeInsets _edgeInsets;
}

@property(retain) NSLayoutConstraint *lastConstraint; // @synthesize lastConstraint=_lastConstraint;
@property(retain) NSLayoutConstraint *firstConstraint; // @synthesize firstConstraint=_firstConstraint;
@property double spacing; // @synthesize spacing=_spacing;
@property long long distribution; // @synthesize distribution=_distribution;
@property struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property long long orientation; // @synthesize orientation=_orientation;
@property(retain) NSMutableArray *views; // @synthesize views=_views;
- (void).cxx_destruct;
- (void)_activateLowPriorityConstraint:(id)arg1;
- (void)_activateHighPriorityConstraint:(id)arg1;
- (void)_constrainNonOrientationEdges:(id)arg1;
- (void)_constrainLastView;
- (void)_constrainFirstView;
- (void)_constrainViewLeft:(id)arg1 right:(id)arg2;
- (void)removeAllSubviews;
- (void)removeLastView;
- (void)removeFirstView;
- (void)removeView:(id)arg1;
- (void)appendView:(id)arg1;
- (void)prependView:(id)arg1;
- (id)init;

@end

