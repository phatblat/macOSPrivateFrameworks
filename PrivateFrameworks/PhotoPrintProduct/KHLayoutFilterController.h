//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "KHFilterControlDelegate.h"

@class KHFilterControl, KHProjectLayout, NSString;

@interface KHLayoutFilterController : NSViewController <KHFilterControlDelegate>
{
    id <KHLayoutFilterDelegate> _delegate;
    KHProjectLayout *_layout;
    KHFilterControl *_filterControl;
}

@property(retain, nonatomic) KHFilterControl *filterControl; // @synthesize filterControl=_filterControl;
@property(retain, nonatomic) KHProjectLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) id <KHLayoutFilterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)filterControl:(id)arg1 didSelectItemAtIndex:(long long)arg2;
@property(nonatomic) unsigned long long selectedLayoutType;
- (void)loadView;
- (id)initWithLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

