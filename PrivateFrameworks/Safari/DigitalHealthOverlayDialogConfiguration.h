//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TabDialogConfiguration.h"

@class NSString, NSURL, STLockoutViewController;

__attribute__((visibility("hidden")))
@interface DigitalHealthOverlayDialogConfiguration : NSObject <TabDialogConfiguration>
{
    BOOL _shouldHideTabContent;
    long long _dialogType;
    CDUnknownBlockType _presentationBlock;
    NSURL *_url;
    STLockoutViewController *_lockoutViewController;
}

@property(readonly, nonatomic) STLockoutViewController *lockoutViewController; // @synthesize lockoutViewController=_lockoutViewController;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) CDUnknownBlockType presentationBlock; // @synthesize presentationBlock=_presentationBlock;
@property(readonly, nonatomic) BOOL shouldHideTabContent; // @synthesize shouldHideTabContent=_shouldHideTabContent;
@property(readonly, nonatomic) long long dialogType; // @synthesize dialogType=_dialogType;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *host;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 lockoutViewController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

