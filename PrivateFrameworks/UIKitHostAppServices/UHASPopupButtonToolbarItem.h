//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitHostAppServices/UHASToolbarItem.h>

#import "UHAPopupButtonToolbarItemInterface.h"

@class NSString;

@interface UHASPopupButtonToolbarItem : UHASToolbarItem <UHAPopupButtonToolbarItemInterface>
{
    NSString *_title;
    NSString *_imageName;
    id <UHAMenuInterface> _menu;
    BOOL _enabled;
    BOOL _showsArrow;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL showsArrow;
@property(retain, nonatomic) id <UHAMenuInterface> menu;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(copy, nonatomic) NSString *imageName;
@property(copy, nonatomic) NSString *title;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType changeHandler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *label;
@property(readonly) Class superclass;

@end
