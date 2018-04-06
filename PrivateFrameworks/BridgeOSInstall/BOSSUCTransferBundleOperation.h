//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BridgeOSInstall/BOSSUCOperation.h>

@class NSDate;

@interface BOSSUCTransferBundleOperation : BOSSUCOperation
{
    NSDate *_lastProgressLogDate;
}

@property(retain) NSDate *lastProgressLogDate; // @synthesize lastProgressLogDate=_lastProgressLogDate;
- (void).cxx_destruct;
- (void)bridgeOSSoftwareUpdateController:(id)arg1 updateBundleTransferComplete:(id)arg2;
- (void)bridgeOSSoftwareUpdateController:(id)arg1 updateBundleTransferProgress:(double)arg2;
- (unsigned long long)_updateBundleSize;
- (void)startControllerOperation;
- (id)description;
- (int)controllerEndingState;
- (int)controllerOperation;
- (id)initWithRequest:(id)arg1 controller:(id)arg2;

@end
