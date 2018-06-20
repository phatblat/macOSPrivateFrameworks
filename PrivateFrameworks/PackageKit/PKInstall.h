//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSObject<OS_dispatch_queue>, NSSet, PKInstallAnalyzer, PKInstallOperationController, PKInstallRequest, PKInstallSandbox;

@interface PKInstall : NSObject
{
    PKInstallRequest *_installRequest;
    id _delegate;
    PKInstallSandbox *_installSandbox;
    PKInstallAnalyzer *_installAnalyzer;
    PKInstallOperationController *_installController;
    NSObject<OS_dispatch_queue> *_installControllerUpdateQueue;
    BOOL _done;
    BOOL _isCancelled;
    NSError *_error;
    int _installState;
    NSArray *_clientSideRegistrationPaths;
    NSSet *_previousPackageIdentifiersSharingGroupsWithCurrentRequest;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(getter=isDone) BOOL done; // @synthesize done=_done;
- (id)_previousPackageIdentifiersSharingGroupsWithCurrentRequest;
- (void)_handleCanCancelDidChange:(id)arg1;
- (void)_releaseResources;
- (void)_setInstallController:(id)arg1;
- (id)_installController;
- (void)_installMain:(id)arg1;
- (id)registrationPaths;
- (id)request;
- (id)_currentPackageSpecifier;
- (int)installState;
- (double)progressValue;
- (double)estimatedTimeRemaining;
- (BOOL)canCancel;
- (BOOL)cancel;
- (void)start;
- (void)_startWithQualityOfServiceClass:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 error:(id *)arg3;

@end

