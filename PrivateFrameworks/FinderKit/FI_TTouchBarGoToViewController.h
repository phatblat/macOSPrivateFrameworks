//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TTouchBarViewController.h>

#import "TMarkTornDown.h"

@class NSObject<TTouchBarGoToViewDelegate>, NSString;

__attribute__((visibility("hidden")))
@interface FI_TTouchBarGoToViewController : FI_TTouchBarViewController <TMarkTornDown>
{
    struct TNSWeakPtr<NSObject<TTouchBarGoToViewDelegate>, void> _weakDelegate;
    struct TKeyValueBinder _goTouchBarButtonBinder;
    _Bool tornDown;
}

@property(getter=isTornDown) _Bool tornDown; // @synthesize tornDown;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reload;
@property(nonatomic) __weak NSObject<TTouchBarGoToViewDelegate> *delegate; // @dynamic delegate;
- (void)aboutToTearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

