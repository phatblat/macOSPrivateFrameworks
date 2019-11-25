//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUTMetricLogger.h"

@class NSString;

@interface IDSSOSLogger : NSObject <CUTMetricLogger>
{
    NSString *_sosURLString;
}

+ (id)loggerWithURLString:(id)arg1;
+ (id)logger;
@property(retain, nonatomic) NSString *sosURLString; // @synthesize sosURLString=_sosURLString;
- (void).cxx_destruct;
- (void)logMetric:(id)arg1;
- (id)initWithSOSURLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

