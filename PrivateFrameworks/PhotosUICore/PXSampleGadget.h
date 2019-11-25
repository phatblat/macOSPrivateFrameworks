//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGadget.h"
#import "PXSampleGadgetViewDelegate.h"

@class NSColor, NSString, PXGadgetSpec;

@interface PXSampleGadget : NSObject <PXSampleGadgetViewDelegate, PXGadget>
{
    BOOL _hasContentToDisplay;
    BOOL _expanded;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    unsigned long long _accessoryButtonType;
    PXGadgetSpec *_gadgetSpec;
    NSString *_gadgetTitle;
    unsigned long long _preferredHeight;
    unsigned long long _preferredExpandedHeight;
    NSColor *_backgroundColor;
}

@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned long long preferredExpandedHeight; // @synthesize preferredExpandedHeight=_preferredExpandedHeight;
@property(nonatomic) unsigned long long preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(copy, nonatomic) NSString *gadgetTitle; // @synthesize gadgetTitle=_gadgetTitle;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(nonatomic) unsigned long long accessoryButtonType; // @synthesize accessoryButtonType=_accessoryButtonType;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (void)userDidSelectAccessoryButton:(struct NSObject *)arg1;
- (void)_prepareView:(id)arg1;
- (void)prepareCollectionViewItem:(struct NSCollectionViewItem *)arg1;
@property(readonly, nonatomic) Class collectionViewItemClass;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) BOOL hasContentToDisplay; // @synthesize hasContentToDisplay=_hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) NSString *localizedTitle;
- (struct CGRect)view:(id)arg1 colorFrameForBounds:(struct CGRect)arg2;
- (id)initWithMininumHeight:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL supportsAssetsDrop;
@property(readonly, nonatomic) BOOL supportsHighlighting;
@property(readonly, nonatomic) BOOL supportsSelection;

@end

