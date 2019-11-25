//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, _DKObjectType;

@interface _CDEventStreamProperties : NSObject
{
    BOOL isAvailable;
    BOOL dataCollectionEnabled;
    BOOL setupOnDemand;
    BOOL isInstant;
    BOOL isHistorical;
    BOOL shouldSaveCurrentEventOnShutdown;
    NSString *name;
    NSString *knowledgeBaseName;
    NSString *knowledgeBaseMetadataClass;
    NSString *descriptionString;
    unsigned long long domainAvailability;
    NSString *monitorClass;
    NSURL *contentProviderBundleURL;
    _DKObjectType *valueType;
    double timeToLive;
    double temporalPrecision;
    long long eventCountLimit;
    double period;
    long long eventsPerPeriod;
    long long pollingPeriod;
}

+ (id)eventStreamPropertiesFromDictionary:(id)arg1 defaultProperties:(id)arg2;
+ (id)eventStreamPropertiesFromDictionary:(id)arg1;
@property(readonly, nonatomic) long long pollingPeriod; // @synthesize pollingPeriod;
@property(readonly, nonatomic) BOOL shouldSaveCurrentEventOnShutdown; // @synthesize shouldSaveCurrentEventOnShutdown;
@property(readonly, nonatomic) BOOL isHistorical; // @synthesize isHistorical;
@property(readonly, nonatomic) BOOL isInstant; // @synthesize isInstant;
@property(readonly, nonatomic) long long eventsPerPeriod; // @synthesize eventsPerPeriod;
@property(readonly, nonatomic) double period; // @synthesize period;
@property(readonly, nonatomic) long long eventCountLimit; // @synthesize eventCountLimit;
@property(readonly, nonatomic) double temporalPrecision; // @synthesize temporalPrecision;
@property(readonly, nonatomic) double timeToLive; // @synthesize timeToLive;
@property(readonly, nonatomic) BOOL setupOnDemand; // @synthesize setupOnDemand;
@property(readonly, nonatomic) _DKObjectType *valueType; // @synthesize valueType;
@property(readonly, nonatomic) NSURL *contentProviderBundleURL; // @synthesize contentProviderBundleURL;
@property(readonly, nonatomic) NSString *monitorClass; // @synthesize monitorClass;
@property(readonly, nonatomic) BOOL dataCollectionEnabled; // @synthesize dataCollectionEnabled;
@property(readonly, nonatomic) unsigned long long domainAvailability; // @synthesize domainAvailability;
@property(readonly, nonatomic) BOOL isAvailable; // @synthesize isAvailable;
@property(readonly, nonatomic) NSString *descriptionString; // @synthesize descriptionString;
@property(readonly, nonatomic) NSString *knowledgeBaseMetadataClass; // @synthesize knowledgeBaseMetadataClass;
@property(readonly, nonatomic) NSString *knowledgeBaseName; // @synthesize knowledgeBaseName;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)arg1 defaultProperties:(id)arg2;
- (id)description;

@end

