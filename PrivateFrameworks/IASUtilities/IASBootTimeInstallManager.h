//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSURL, NSXPCConnection;

@interface IASBootTimeInstallManager : NSObject
{
    NSURL *_volumeURL;
    NSXPCConnection *_connection;
    NSMutableArray *_progressObservers;
    NSObject<OS_dispatch_queue> *_progressObserversQueue;
}

+ (id)managerForVolume:(id)arg1 error:(id *)arg2;
+ (void)initialize;
@property(retain) NSObject<OS_dispatch_queue> *progressObserversQueue; // @synthesize progressObserversQueue=_progressObserversQueue;
@property(retain) NSMutableArray *progressObservers; // @synthesize progressObservers=_progressObservers;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) NSURL *volumeURL; // @synthesize volumeURL=_volumeURL;
- (void).cxx_destruct;
- (BOOL)performRestartReturningError:(id *)arg1;
- (BOOL)isRestartRequiredByPackages:(id)arg1 error:(id *)arg2;
- (void)installQueuedPackages:(id)arg1 withProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)clearQueuedPackagesReturningError:(id *)arg1;
- (BOOL)queuePackageForInstallation:(id)arg1 error:(id *)arg2;
- (double)estimatedInstallationTimeForPackages:(id)arg1 error:(id *)arg2;
- (id)queuedPackagesReturningError:(id *)arg1;
@property(readonly, copy) NSArray *queuedPackages;
- (id)initWithVolume:(id)arg1 error:(id *)arg2;

@end

