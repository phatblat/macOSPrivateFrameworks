//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BridgeOSInstall/BOSOperation.h>

@class NSObject<OS_dispatch_semaphore>;

@interface BOSRequestControlOperation : BOSOperation
{
    NSObject<OS_dispatch_semaphore> *_doneWaitingForUpdateControl;
}

@property(retain) NSObject<OS_dispatch_semaphore> *doneWaitingForUpdateControl; // @synthesize doneWaitingForUpdateControl=_doneWaitingForUpdateControl;
- (void).cxx_destruct;
- (void)bridgeOSSoftwareUpdateController:(id)arg1 updateControlGranted:(BOOL)arg2 error:(id)arg3;
- (void)cancel;
- (id)description;
- (void)main;
- (id)initWithRequest:(id)arg1 controller:(id)arg2;

@end

