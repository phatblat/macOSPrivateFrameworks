//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeCore/STCoreOrganizationSettings.h>

@class STLocalOrganization;

__attribute__((visibility("hidden")))
@interface STLocalOrganizationSettings : STCoreOrganizationSettings
{
}

- (void)setPasscode:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;

// Remaining properties
@property(retain, nonatomic) STLocalOrganization *organization; // @dynamic organization;

@end
