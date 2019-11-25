//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

#import "PXGDataSourceDrivenLayout.h"

@class NSString, PXGSublayoutComposition;

@interface PXGCompositeLayout : PXGLayout <PXGDataSourceDrivenLayout>
{
    CDStruct_5f1286c4 _updateFlags;
    BOOL _isUpdatingSublayouts;
    PXGSublayoutComposition *_composition;
    id <PXGSublayoutFaultingDelegate> _sublayoutFaultingDelegate;
    struct NSEdgeInsets _faultInOutsets;
    struct NSEdgeInsets _faultOutOutsets;
}

@property(nonatomic) struct NSEdgeInsets faultOutOutsets; // @synthesize faultOutOutsets=_faultOutOutsets;
@property(nonatomic) struct NSEdgeInsets faultInOutsets; // @synthesize faultInOutsets=_faultInOutsets;
@property(nonatomic) __weak id <PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate; // @synthesize sublayoutFaultingDelegate=_sublayoutFaultingDelegate;
@property(retain, nonatomic) PXGSublayoutComposition *composition; // @synthesize composition=_composition;
- (void).cxx_destruct;
- (void)_updateSublayouts;
- (void)_invalidateSublayouts;
- (void)screenScaleDidChange;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)viewEnvironmentDidChange;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)willRemoveSublayout:(id)arg1;
- (void)didAddSublayout:(id)arg1;
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)update;
- (id)initWithComposition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

