//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIMultilingualPreferenceProviding.h"

@class NSArray, NSString, TIInputMode;

@interface _TIMultilingualPreferences : NSObject <TIMultilingualPreferenceProviding>
{
}

+ (id)inputModesForIdentifiers:(id)arg1;
@property(readonly, nonatomic) NSArray *userPreferredLanguages;
@property(readonly, nonatomic) NSArray *userEnabledInputModes;
@property(readonly, nonatomic) TIInputMode *preferredSecondaryInputMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

