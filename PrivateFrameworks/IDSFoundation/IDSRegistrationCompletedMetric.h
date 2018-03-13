//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUTAWDMetric.h"
#import "CUTCoreAnalyticsMetric.h"

@class NSDictionary, NSString, PBCodable<NSCopying>;

@interface IDSRegistrationCompletedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>
{
    long long _registrationType;
    NSString *_serviceIdentifier;
    BOOL _wasSuccessful;
    long long _registrationError;
    long long _circleStatus;
}

@property(readonly, nonatomic) long long circleStatus; // @synthesize circleStatus=_circleStatus;
@property(readonly, nonatomic) long long registrationError; // @synthesize registrationError=_registrationError;
@property(readonly, nonatomic) BOOL wasSuccessful; // @synthesize wasSuccessful=_wasSuccessful;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(readonly, nonatomic) long long registrationType; // @synthesize registrationType=_registrationType;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithRegistrationType:(long long)arg1 serviceIdentifier:(id)arg2 wasSuccessful:(BOOL)arg3 registrationError:(long long)arg4 circleStatus:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

