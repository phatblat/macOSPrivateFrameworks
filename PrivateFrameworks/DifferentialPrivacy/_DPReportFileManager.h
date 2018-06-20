//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _DPDaemonConnection;

@interface _DPReportFileManager : NSObject
{
    NSString *_reportsDirectoryPath;
    _DPDaemonConnection *_connection;
}

+ (id)submittedReportsInDirectory:(id)arg1;
+ (id)submittedReports;
@property(readonly, nonatomic) _DPDaemonConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSString *reportsDirectoryPath; // @synthesize reportsDirectoryPath=_reportsDirectoryPath;
- (void).cxx_destruct;
- (void)retireReports:(id)arg1;
- (id)reportsNotYetSubmitted;
- (void)dealloc;
- (id)init;
- (id)initWithDirectoryPath:(id)arg1;

@end

