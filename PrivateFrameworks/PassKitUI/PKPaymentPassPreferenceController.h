//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPaymentPreferenceController.h>

@class PKPaymentPreferenceContact;

@interface PKPaymentPassPreferenceController : PKPaymentPreferenceController
{
    PKPaymentPreferenceContact *_billingPreference;
}

@property(retain, nonatomic) PKPaymentPreferenceContact *billingPreference; // @synthesize billingPreference=_billingPreference;
- (void).cxx_destruct;
- (BOOL)canSelectPreference:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_setupPreferences;
- (long long)numberOfMenuItemsInSection:(long long)arg1;
- (void)updatePreferences;
- (void)setModel:(id)arg1;

@end
