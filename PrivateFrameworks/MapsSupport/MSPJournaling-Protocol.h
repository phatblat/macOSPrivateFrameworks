//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOLogMsgEvent, NSString;

@protocol MSPJournaling <NSObject>

@optional
- (GEOLogMsgEvent *)eventForState:(NSString *)arg1 affectedObject:(id)arg2;
- (int)telemetricKeyForState:(NSString *)arg1;
- (BOOL)shouldReportState:(NSString *)arg1;
- (BOOL)shouldLogState:(NSString *)arg1;
- (BOOL)shouldJournalState:(NSString *)arg1;
@end

