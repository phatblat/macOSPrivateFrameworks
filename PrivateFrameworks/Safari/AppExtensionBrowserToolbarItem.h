//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/BrowserToolbarItem.h>

@class AppExtensionToolbarItem, BrowserWindowController, NSUUID;

__attribute__((visibility("hidden")))
@interface AppExtensionBrowserToolbarItem : BrowserToolbarItem
{
    AppExtensionToolbarItem *_appExtensionToolbarItem;
    BrowserWindowController *_browserWindowController;
    NSUUID *_uuid;
}

@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) __weak BrowserWindowController *browserWindowController; // @synthesize browserWindowController=_browserWindowController;
@property(readonly, nonatomic) __weak AppExtensionToolbarItem *appExtensionToolbarItem; // @synthesize appExtensionToolbarItem=_appExtensionToolbarItem;
- (void).cxx_destruct;
- (void)showPopover;
- (void)_performClickAction:(id)arg1;
- (void)validate;
- (void)setBadgeText:(id)arg1;
- (id)initWithExtensionToolbarItem:(id)arg1 browserWindowController:(id)arg2;

@end

