//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXApplicationSettings : PXSettings
{
    double _defaultUserInterfaceTimeoutDuration;
}

+ (id)timeoutTitles;
+ (id)timeoutPossibleValues;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double defaultUserInterfaceTimeoutDuration; // @synthesize defaultUserInterfaceTimeoutDuration=_defaultUserInterfaceTimeoutDuration;
- (void)setDefaultValues;
- (id)parentSettings;

@end
