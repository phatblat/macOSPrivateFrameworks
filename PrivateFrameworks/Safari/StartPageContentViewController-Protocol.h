//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSView, StartPageViewController;

@protocol StartPageContentViewController <NSObject>
+ (NSString *)defaultPageTitle;
@property(readonly, nonatomic) double topContentInset;
@property(readonly, nonatomic) NSView *titleView;
@property(retain, nonatomic) NSView *externalCenteringView;
@property(readonly, nonatomic) NSString *pageTitle;
@property(nonatomic) __weak StartPageViewController *startPageViewController;
@end

