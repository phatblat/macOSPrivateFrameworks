//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTouchBarDelegate.h"

@class AKDFRColorPickerController, NSColorPickerTouchBarItem, NSGroupTouchBarItem, NSString;

@interface AKDFRAnnotationPropertiesController : NSObject <NSTouchBarDelegate>
{
    id <AKDFRAnnotationPropertiesControllerDelegate> _delegate;
    NSGroupTouchBarItem *_touchBarItem;
    NSColorPickerTouchBarItem *_strokeColorItem;
    NSColorPickerTouchBarItem *_fillColorItem;
    AKDFRColorPickerController *_fillColorPickerController;
    AKDFRColorPickerController *_strokeColorPickerController;
}

@property(retain) AKDFRColorPickerController *strokeColorPickerController; // @synthesize strokeColorPickerController=_strokeColorPickerController;
@property(retain) AKDFRColorPickerController *fillColorPickerController; // @synthesize fillColorPickerController=_fillColorPickerController;
@property(retain) NSColorPickerTouchBarItem *fillColorItem; // @synthesize fillColorItem=_fillColorItem;
@property(retain) NSColorPickerTouchBarItem *strokeColorItem; // @synthesize strokeColorItem=_strokeColorItem;
@property(retain) NSGroupTouchBarItem *touchBarItem; // @synthesize touchBarItem=_touchBarItem;
@property __weak id <AKDFRAnnotationPropertiesControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)colorPickerAction:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)itemIdentifiers;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

