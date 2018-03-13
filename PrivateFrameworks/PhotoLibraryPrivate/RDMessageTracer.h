//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PFDispatchQueue, RDDatabase;

@interface RDMessageTracer : NSObject
{
    RDDatabase *_database;
    PFDispatchQueue *_queue;
    NSString *_domain;
}

+ (void)traceFileSignatureChangedForMaster:(id)arg1;
+ (void)traceRebuild:(BOOL)arg1;
+ (void)resetLibraryStatisticsLastReportedDate:(id)arg1 persistImmediately:(BOOL)arg2;
+ (BOOL)isLibraryStatisticsReportDue:(id)arg1;
+ (id)appPrivateDataKeyForReportedDate;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)traceLibraryStatistics:(CDUnknownBlockType)arg1;
- (void)updateLibraryStatisticsReportedDate;
- (id)initWithDatabase:(id)arg1;

@end

