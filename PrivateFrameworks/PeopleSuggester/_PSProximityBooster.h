//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RPPeopleDiscovery;

@interface _PSProximityBooster : NSObject
{
    RPPeopleDiscovery *_peopleDiscovery;
}

@property(retain, nonatomic) RPPeopleDiscovery *peopleDiscovery; // @synthesize peopleDiscovery=_peopleDiscovery;
- (void).cxx_destruct;
- (id)suggestionsByBoostingNearbySuggestions:(id)arg1;
- (void)stopMonitoringProximity;
- (void)startMonitoringProximity;
- (id)init;

@end
