//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AOSUI/AOSUISpyglassBaseViewController.h>

#import "PPSpecifierTableViewControllerDelegate.h"

@class NSBox, NSString, NSView, PPSpecifierTableViewController;

@interface AOSUISpyglassPaneViewController : AOSUISpyglassBaseViewController <PPSpecifierTableViewControllerDelegate>
{
    AOSUISpyglassBaseViewController *_topViewController;
    PPSpecifierTableViewController *_tableViewController;
    NSView *_topView;
    NSView *_infoView;
    NSBox *_detailView;
}

@property __weak NSBox *detailView; // @synthesize detailView=_detailView;
@property __weak NSView *infoView; // @synthesize infoView=_infoView;
@property __weak NSView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) PPSpecifierTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(retain, nonatomic) AOSUISpyglassBaseViewController *topViewController; // @synthesize topViewController=_topViewController;
- (void).cxx_destruct;
- (BOOL)shouldSelectSpecifier:(id)arg1 tableViewController:(id)arg2;
- (void)didSelectSpecifier:(id)arg1 tableViewController:(id)arg2;
- (void)viewDidLoad;
- (id)nibName;
- (id)nibBundle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

