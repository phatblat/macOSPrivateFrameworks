//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOpenSavePanelDelegate.h"

@class NSOpenPanel, NSURL;

@protocol NSOpenPanelNewDocumentDelegate <NSOpenSavePanelDelegate>
- (void)panel:(NSOpenPanel *)arg1 shouldCreateNewDocumentAtURL:(NSURL *)arg2;
- (void)panel:(NSOpenPanel *)arg1 userRequestedCreateNewDocument:(void (^)(NSString *))arg2;
@end
