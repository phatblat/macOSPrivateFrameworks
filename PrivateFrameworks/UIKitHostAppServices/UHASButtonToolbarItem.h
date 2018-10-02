//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitHostAppServices/UHASToolbarItem.h>

#import "UHAButtonToolbarItemInterface.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface UHASButtonToolbarItem : UHASToolbarItem <UHAButtonToolbarItemInterface>
{
    NSString *_title;
    NSString *_imageName;
    BOOL _enabled;
    CDUnknownBlockType _actionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(copy, nonatomic) NSString *imageName;
@property(copy, nonatomic) NSString *title;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(copy, nonatomic) id <UHAAccesibilityInfoInterface> accessibilityInfo;
@property(copy, nonatomic) CDUnknownBlockType changeHandler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *label;
@property(readonly, nonatomic) unsigned long long rock_invocationFlags;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *rock_invocationQueue;
@property(readonly) Class superclass;

@end

