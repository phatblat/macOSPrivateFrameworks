//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INIntent, INIntentSlotDescription, NSData;

@protocol INIntentResolutionResultDataProviding <NSObject>
- (NSData *)resolutionResultDataForIntent:(INIntent *)arg1 intentSlotDescription:(INIntentSlotDescription *)arg2 error:(id *)arg3;
@end
