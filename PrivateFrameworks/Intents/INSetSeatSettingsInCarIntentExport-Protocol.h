//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INSpeakableString, NSNumber;

@protocol INSetSeatSettingsInCarIntentExport <NSObject, JSExport>
@property(copy) INSpeakableString *carName;
@property long long relativeLevelSetting;
@property(copy) NSNumber *level;
@property long long seat;
@property(copy) NSNumber *enableMassage;
@property(copy) NSNumber *enableCooling;
@property(copy) NSNumber *enableHeating;
- (id)init;
@end

