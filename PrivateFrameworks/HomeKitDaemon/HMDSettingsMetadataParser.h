//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDSettingsMetadataParserProtocol.h"
#import "HMFLogging.h"

@class NSString;

@interface HMDSettingsMetadataParser : NSObject <HMFLogging, HMDSettingsMetadataParserProtocol>
{
    id <HMDSettingsControllerDependency> _dependency;
}

+ (id)logCategory;
@property(readonly) __weak id <HMDSettingsControllerDependency> dependency; // @synthesize dependency=_dependency;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)modelsFromMetadata:(id)arg1;
- (id)initWithDependency:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

