//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSObject, PortMO;

__attribute__((visibility("hidden")))
@interface DeviceConfigurationMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) NSObject *dataSources; // @dynamic dataSources;
@property(nonatomic) BOOL isInput; // @dynamic isInput;
@property(retain, nonatomic) PortMO *port; // @dynamic port;
@property(nonatomic) double sampleRate; // @dynamic sampleRate;

@end

