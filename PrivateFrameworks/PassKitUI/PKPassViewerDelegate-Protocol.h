//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPass, PKPassViewerViewController;

@protocol PKPassViewerDelegate <NSObject>
- (void)passViewer:(PKPassViewerViewController *)arg1 didChangePass:(PKPass *)arg2;
- (void)passViewer:(PKPassViewerViewController *)arg1 closeClicked:(id)arg2;
- (void)passViewer:(PKPassViewerViewController *)arg1 didAddToPassbook:(id)arg2;
@end

