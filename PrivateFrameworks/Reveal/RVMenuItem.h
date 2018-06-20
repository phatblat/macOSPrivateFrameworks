//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenuItem.h"

@class NSDictionary, RVDocumentContext, RVItem, RVPresenter, RVPresentingContext;

__attribute__((visibility("hidden")))
@interface RVMenuItem : NSMenuItem
{
    RVPresenter *_presenter;
    RVItem *_item;
    RVDocumentContext *_documentContext;
    RVPresentingContext *_presentingContext;
    NSDictionary *_options;
}

- (void).cxx_destruct;
- (long long)tagForType;
- (void)_rvMenuItemAction;
- (id)initWithTitle:(id)arg1 presenter:(id)arg2 item:(id)arg3 documentContext:(id)arg4 presentingContext:(id)arg5 options:(id)arg6;

@end
