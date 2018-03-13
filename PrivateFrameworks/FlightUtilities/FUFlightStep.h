//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class FUAirport, FUStepTime, NSNumber, NSString;

@interface FUFlightStep : NSObject <NSSecureCoding, NSCopying>
{
    NSNumber *_delayFromSchedule;
    FUAirport *_airport;
    NSString *_gate;
    NSString *_terminal;
    long long _legStatus;
    FUStepTime *_actualTime;
    FUStepTime *_scheduledTime;
    FUStepTime *_plannedTime;
    FUStepTime *_estimatedTime;
    FUStepTime *_runwayTime;
}

+ (BOOL)supportsSecureCoding;
@property(retain) FUStepTime *runwayTime; // @synthesize runwayTime=_runwayTime;
@property(retain) FUStepTime *estimatedTime; // @synthesize estimatedTime=_estimatedTime;
@property(retain) FUStepTime *plannedTime; // @synthesize plannedTime=_plannedTime;
@property(retain) FUStepTime *scheduledTime; // @synthesize scheduledTime=_scheduledTime;
@property(retain) FUStepTime *actualTime; // @synthesize actualTime=_actualTime;
@property long long legStatus; // @synthesize legStatus=_legStatus;
@property(retain) NSString *terminal; // @synthesize terminal=_terminal;
@property(retain) NSString *gate; // @synthesize gate=_gate;
@property(retain) FUAirport *airport; // @synthesize airport=_airport;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) unsigned long long status;
@property(retain, nonatomic) NSNumber *delayFromSchedule;
@property(readonly) FUStepTime *time;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

