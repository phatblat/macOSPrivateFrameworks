//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RemoteProcessingBlockServer : NSObject
{
}

+ (int)itemParameterChanged:(unsigned int)arg1 inItemID:(unsigned int)arg2 inParmameterID:(unsigned int)arg3 inParameterValue:(float)arg4;
+ (int)itemPropertyChanged:(unsigned int)arg1 inItemID:(unsigned int)arg2 inPropertyID:(unsigned int)arg3;
+ (int)propertyChanged:(unsigned int)arg1 inPropertyID:(unsigned int)arg2;
+ (int)propertiesChanged:(unsigned int)arg1 inPropertyIDs:(id)arg2;
+ (int)unregisterItem:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2;
+ (int)registerItem:(unsigned int *)arg1 inRPBlockID:(unsigned int)arg2;
+ (int)unregisterRPB:(unsigned int)arg1;
+ (int)registerRPB:(id)arg1 outRPBlockID:(unsigned int *)arg2;

@end

