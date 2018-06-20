//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTouchBarDelegate.h"
#import "NSTouchBarProvider.h"

@class NSButton, NSString, NSTouchBar;

__attribute__((visibility("hidden")))
@interface AppControllerTouchBarProvider : NSObject <NSTouchBarDelegate, NSTouchBarProvider>
{
    NSTouchBar *_touchBar;
    id <AppControllerTouchBarProviderDelegate> _delegate;
    NSButton *_newWindowButton;
    NSButton *_newPrivateBrowsingWindowButton;
}

@property(nonatomic) __weak id <AppControllerTouchBarProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_openNewPrivateBrowsingWindow:(id)arg1;
- (void)_openNewWindow:(id)arg1;
@property(readonly, nonatomic) NSButton *newPrivateBrowsingWindowButton; // @synthesize newPrivateBrowsingWindowButton=_newPrivateBrowsingWindowButton;
@property(readonly, nonatomic) NSButton *newWindowButton; // @synthesize newWindowButton=_newWindowButton;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
@property(readonly) NSTouchBar *touchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

