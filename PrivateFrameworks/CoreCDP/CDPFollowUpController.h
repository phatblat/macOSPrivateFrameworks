//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject
{
    CDPDaemonConnection *_daemonConn;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (BOOL)clearFollowUpWithContext:(id)arg1 error:(id *)arg2;
- (BOOL)postFollowUpWithContext:(id)arg1 error:(id *)arg2;
- (id)init;

@end

