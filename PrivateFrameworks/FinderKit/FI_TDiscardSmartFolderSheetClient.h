//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TStdAlertSheetClientProtocol.h"

@class FI_TBrowserContainerController, NSString;

__attribute__((visibility("hidden")))
@interface FI_TDiscardSmartFolderSheetClient : NSObject <TStdAlertSheetClientProtocol>
{
    FI_TBrowserContainerController *_controller;
}

+ (id)clientWithContainerController:(id)arg1;
- (void)stdAlertSheetOtherButtonPressed;
- (void)stdAlertSheetCancelButtonPressed;
- (void)stdAlertSheetOKButtonPressed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

