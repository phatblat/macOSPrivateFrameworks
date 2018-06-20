//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOAbstractTicket.h>

#import "GEOMapServiceProblemReportTicket.h"

@class GEOMapServiceTraits, GEORPProblem, GEORPProblemRequest, GEORPUserCredentials, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _GEORPSubmissionTicket : GEOAbstractTicket <GEOMapServiceProblemReportTicket>
{
    NSData *_resubmissionData;
    GEORPProblem *_problem;
    id <GEOMapItem> _place;
    GEORPProblemRequest *_problemRequest;
    GEORPUserCredentials *_userCredentials;
    NSData *_pushToken;
    NSString *_emailAddress;
    BOOL _started;
}

- (void).cxx_destruct;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)cancel;
- (id)initWithProblem:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6;
- (id)initWithResubmissionData:(id)arg1 traits:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

