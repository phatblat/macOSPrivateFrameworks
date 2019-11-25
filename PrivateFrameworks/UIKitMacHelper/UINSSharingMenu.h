//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenu.h"

#import "NSMenuDelegate.h"
#import "NSSharingServicePickerDelegate.h"

@class NSSharingServicePicker, NSString;

__attribute__((visibility("hidden")))
@interface UINSSharingMenu : NSMenu <NSMenuDelegate, NSSharingServicePickerDelegate>
{
    NSSharingServicePicker *_picker;
}

@property(retain) NSSharingServicePicker *picker; // @synthesize picker=_picker;
- (void).cxx_destruct;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)menuNeedsUpdate:(id)arg1;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

